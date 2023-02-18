#pragma once


#include "libjimmy/types/string.hpp"
#include "libjimmy/types/ordered_object.hpp"

#include <tao/pegtl.hpp>
#include <tao/pegtl/contrib/analyze.hpp>

#include <iostream>
#include <stack>
#include <vector>
#include <string>
#include <map>



namespace pegtl = tao::pegtl;



/***********************************************************************************************************************************
* libjimmy::types namespace
***********************************************************************************************************************************/
namespace libjimmy::types {
	
	enum XML_PARSE_MODE {
		XML_PARSE_MODE_LITERAL,
		XML_PARSE_MODE_COMPACT,
		XML_PARSE_MODE_MINIMAL,
	};
	
	class XMLNode;
	class XMLElementNode;
	class XMLTextNode;
	class XMLCommentNode;
	
	
	typedef std::shared_ptr<XMLNode> XMLNodePtr;
	typedef std::shared_ptr<XMLElementNode> XMLElementNodePtr;
	typedef std::shared_ptr<XMLTextNode> XMLTextNodePtr;
	typedef std::shared_ptr<XMLCommentNode> XMLCommentNodePtr;
	typedef std::shared_ptr<OrderedObject<String, String>> AttributesPtr;
	
	
	class XMLNode {
		public:
			virtual String str(int indent = 0)=0;
	};
	
	class XMLElementNode : public XMLNode {
		public:
			std::string name;
			OrderedObject<String, String> attributes;
			std::vector<XMLNodePtr> children;
			
			XMLElementNode() { }
			XMLElementNode(std::string _name) : name(_name) { }
		
		
			String str(int indent = 0) {
				String str;
				
				str = "<" + this->name;
				for (auto [name, value] : this->attributes)
				{
					str += " " + name + "=\"" + value + "\"";
				}
				if (this->children.size() == 0)
				{
					str += " />";
				}
				else
				{
					str += ">";
					for (auto& child : this->children)
					{
						str += child->str(indent);
					}
					str += "</" + this->name + ">";
				}
				
				return str;
			}
	};
	
	class XMLTextNode : public XMLNode {
		public:
			std::string text;
			
			XMLTextNode(std::string _text) : text(_text) { }
			
			String str(int indent = 0) {
				return this->text;
			}
			
	};
	
	class XMLCommentNode : public XMLNode {
		public:
			std::string text;
			
			XMLCommentNode(std::string _text) : text(_text) { }
			
			String str(int indent = 0) {
				return "<!-- " + this->text + " -->";
			}
			
	};
	
	struct XMLWorkItem {
		XMLElementNodePtr root;
		std::stack<XMLElementNodePtr> stack;
		AttributesPtr attributes;
		XML_PARSE_MODE parse_mode;
		
		XMLWorkItem(XMLElementNodePtr& root, AttributesPtr& attributes, XML_PARSE_MODE parse_mode) {
			this->root = root;
			this->attributes = attributes;
			this->parse_mode = parse_mode;
		}
	};
	
	struct XMLSpace : pegtl::plus< pegtl::space > { };
	struct XMLOptionalSpace : pegtl::opt< XMLSpace > { };
	
	struct XMLTagName : pegtl::plus< pegtl::alnum > { };
	struct XMLTagNameClose
	{
		using rule_t = XMLTagNameClose;

		template< pegtl::apply_mode, pegtl::rewind_mode, template< typename... > class Action, template< typename... > class Control, typename ParseInput, typename... States >
		static bool match( ParseInput& in, XMLWorkItem& work, States&&... /*unused*/ )
		{
			if (work.stack.size() == 0)
			{
				return false;
			}
			std::string tag_name = work.stack.top()->name;
			if( in.size( tag_name.size() ) >= tag_name.size() )
			{
				if( std::memcmp( in.current(), tag_name.c_str(), tag_name.size() ) == 0 )
				{
					in.bump( tag_name.size() );
					work.stack.pop();
					return true;
				}
			}
			return false;
		}
	};
	
	struct XMLContent
	{
		using rule_t = XMLContent;

		template< pegtl::apply_mode, pegtl::rewind_mode, template< typename... > class Action, template< typename... > class Control, typename ParseInput, typename... States >
		static bool match( ParseInput& in, XMLWorkItem& work, States&&... /*unused*/ )
		{
			int i = 0;
			for (; in.current()[i] != '<' && in.current()[i] != '\0'; i++);
			if (i)
			{
				in.bump(i);
				return true;
			}
			return false;
		}
	};
	
	struct XMLComment : pegtl::seq< pegtl::one< '<' >, pegtl::one< '!' >, pegtl::two< '-' >, pegtl::until< pegtl::two< '-' >, pegtl::any >, pegtl::one< '>' > > { };
	
	struct XMLAttributeName : pegtl::plus< pegtl::alnum > { };
	struct XMLAttributeValue : pegtl::seq< pegtl::one< '"' >, pegtl::until<pegtl::one< '"' >, pegtl::any > > { };
	
	struct XMLKeyValue : pegtl::seq< XMLSpace, XMLAttributeName, XMLOptionalSpace, pegtl::one< '=' >, XMLOptionalSpace, XMLAttributeValue > { };
	struct XMLKeyValues : pegtl::plus< XMLKeyValue > { };
	
	struct XMLTagOpen : pegtl::seq< pegtl::one< '<' >, XMLOptionalSpace, XMLTagName, pegtl::opt< XMLKeyValues >, XMLOptionalSpace > { };
	struct XMLTagCloseEmpty : pegtl::seq< pegtl::one< '/' >, XMLOptionalSpace, pegtl::one< '>' > > { };
	
	struct XMLElement;
	
	struct XMLTagEnd : pegtl::seq< pegtl::one< '<' >, XMLOptionalSpace, pegtl::one< '/' >, XMLOptionalSpace, XMLTagNameClose, XMLOptionalSpace, pegtl::one< '>' > > { };
	struct XMLCloseFull : pegtl::seq< pegtl::one< '>' >, pegtl::until< XMLTagEnd, pegtl::sor< pegtl::plus< XMLElement >, XMLContent, XMLComment > > > { };
	
	struct XMLElement : pegtl::seq< XMLTagOpen, pegtl::sor< XMLTagCloseEmpty, XMLCloseFull > > { };
	
	struct XMLDeclaration : pegtl::seq< pegtl::one< '<' >, pegtl::one< '?' >, pegtl::one< 'x' >, pegtl::one< 'm' >, pegtl::one< 'l' >, pegtl::opt< XMLKeyValues >, XMLOptionalSpace, pegtl::one< '?' >, pegtl::one< '>' > > { };
	
	struct XMLGrammar : pegtl::must< XMLOptionalSpace, pegtl::opt< XMLDeclaration >, XMLOptionalSpace, XMLElement, XMLOptionalSpace, pegtl::eof > {};
	
	template< typename Rule > struct action {};
	
	template<> struct action< XMLTagName >
	{
		template< typename ActionInput > static void apply(const ActionInput& in, XMLWorkItem& work)
		{
			if (in.string()[0] != '/')
			{
				if (work.stack.size() == 0)
				{
					work.root->name = in.string();
					work.stack.push(work.root);
				}
				else
				{
					XMLElementNodePtr element_ptr = std::make_shared<XMLElementNode>(in.string());
					XMLNodePtr node_ptr = std::static_pointer_cast<XMLNode>(element_ptr);
					work.stack.top()->children.push_back(node_ptr);
					work.stack.push(element_ptr);
				}
			}
			else
			{
				work.stack.pop();
			}
		}
	};
	
	template<> struct action< XMLTagCloseEmpty >
	{
		template< typename ActionInput > static void apply(const ActionInput& in, XMLWorkItem& work)
		{
			work.stack.pop();
		}
	};
	
	template<> struct action< XMLAttributeName >
	{
		template< typename ActionInput > static void apply(const ActionInput& in, XMLWorkItem& work)
		{
			if (work.stack.size() == 0)
			{
				(*work.attributes)[in.string()] = "";
			}
			else
			{
				work.stack.top()->attributes[in.string()] = "";
			}
		}
	};
	
	template<> struct action< XMLAttributeValue >
	{
		template< typename ActionInput > static void apply(const ActionInput& in, XMLWorkItem& work)
		{
			String value = in.string();
			value.erase(0, 1);
			value.erase(value.size() - 1);
			
			if (work.stack.size() == 0)
			{
				if (work.attributes->size() == 0)
				{
					return;
				}
				
				(*work.attributes)[work.attributes->back().key()] = value;
			}
			else
			{
				if (work.stack.top()->attributes.size() == 0)
				{
					return;
				}
				
				work.stack.top()->attributes[work.stack.top()->attributes.back().key()] = value;
			}
		}
	};
	
	template<> struct action< XMLContent >
	{
		template< typename ActionInput > static void apply(const ActionInput& in, XMLWorkItem& work)
		{
			if (work.stack.size() == 0)
			{
				return;
			}
			
			String content = in.string();
			if (work.parse_mode == XML_PARSE_MODE_MINIMAL)
			{
				content.trim();
			}
			else if (work.parse_mode == XML_PARSE_MODE_COMPACT)
			{
				if (String(content).trim().size() == 0)
				{
					return;
				}
			}
			
			if (content.size())
			{
				XMLTextNodePtr text_ptr = std::make_shared<XMLTextNode>(content);
				XMLNodePtr node_ptr = std::static_pointer_cast<XMLNode>(text_ptr);
				work.stack.top()->children.push_back(node_ptr);
			}
		}
	};
	
	template<> struct action< XMLComment >
	{
		template< typename ActionInput > static void apply(const ActionInput& in, XMLWorkItem& work)
		{
			if (work.stack.size() == 0)
			{
				return;
			}
			
			String comment = in.string();
			
			comment.erase(0,4);
			comment.erase(comment.size() - 3);
			
			XMLCommentNodePtr comment_ptr = std::make_shared<XMLCommentNode>(comment);
			XMLNodePtr node_ptr = std::static_pointer_cast<XMLNode>(comment_ptr);
			work.stack.top()->children.push_back(node_ptr);
		}
	};
	

	/*******************************************************************************************************************************
	* StringTemplate class
	*
	* Inherits
	*   std::basic_string<T>
	*
	* Description
	*   Modernized wrapper around std::basic_string<T>
	*******************************************************************************************************************************/
	class XML {
		
		private:
			XMLElementNodePtr root;
			AttributesPtr attributes;
		
		public:
			
			
			/***********************************************************************************************************************
			* constructor()
			*
			* Arguments
			*
			* Description
			*   Accepts a std::basic_string<T> value and converts to string
			*
			* Return none
			***********************************************************************************************************************/
			XML() {
				this->root = std::make_shared<XMLElementNode>();
			}
			
			
			/***********************************************************************************************************************
			* constructor(std::basic_string<T> _value)
			*
			* Arguments
			*   _value : Incoming value
			*
			* Description
			*   Accepts a std::basic_string<T> value and converts to string
			*
			* Return none
			***********************************************************************************************************************/
			XML(const String& str, XML_PARSE_MODE parse_mode = XML_PARSE_MODE_LITERAL) {
				this->root = std::make_shared<XMLElementNode>();
				this->attributes = std::make_shared<OrderedObject<String, String>>();
				parse(str, parse_mode, this->root, this->attributes);
			}
			
			XMLElementNodePtr parse(const String& str, XML_PARSE_MODE parse_mode = XML_PARSE_MODE_LITERAL, XMLElementNodePtr _root = NULL, AttributesPtr _attributes = NULL) {
				
				if (_root == NULL)
				{
					//_root = &root;
				}
				
				XMLWorkItem work(_root, _attributes, parse_mode);
	
				if( pegtl::analyze< XMLGrammar >() != 0 )
				{
					throw "Invalid xml grammar";
				}
				
				pegtl::memory_input in(str, "");
				if (pegtl::parse<XMLGrammar, action>(in, work))
				{
					return _root;
				}
				else
				{
					throw "failed to parse xml";
				}
			}
			
			
			String str(int indent = 0) {
				String _str;
				if (this->attributes->size())
				{
					_str += "<?xml";
					for (auto [name, value] : *this->attributes)
					{
						_str += " " + name + "=\"" + value + "\"";
					}
					_str += " ?>";
					if (indent)
					{
						_str += "\n";
					}
				}
				_str += this->root->str(indent);
				
				return _str;
			}
			
			std::vector<XMLNodePtr> children() {
				return root->children;
			}
			
			String name() {
				return root->name;
			}
		
	};

	
}


namespace tao::pegtl
{
	template< typename Name > struct analyze_traits< Name, libjimmy::types::XMLTagNameClose > : analyze_any_traits<> {};
	template< typename Name > struct analyze_traits< Name, libjimmy::types::XMLContent > : analyze_any_traits<> {};

}  // namespace pegtl
