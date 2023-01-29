#pragma once



#include <algorithm>
#include <string>



/***********************************************************************************************************************************
* libjimmy::types namespace
***********************************************************************************************************************************/
namespace libjimmy::types {

		
		
	/*******************************************************************************************************************************
	* String class
	*
	* Inherits
	*   std::string
	*
	* Description
	*   Modernized wrapper around std::string
	*******************************************************************************************************************************/
	class String : public std::string {
		public:
			
			
			/***********************************************************************************************************************
			* Pull in constructors and operator= from std::string
			***********************************************************************************************************************/
			using std::string::string;
			using std::string::operator=;
			
			
			/***********************************************************************************************************************
			* constructor(signed long _value)
			*
			* Arguments
			*   signed long _value : Incoming value
			*
			* Description
			*   Accepts a signed long value and converts to string
			*
			* Return none
			***********************************************************************************************************************/
			String(signed long _value) {
				*this = std::to_string(_value);
			}
			
			
			/***********************************************************************************************************************
			* constructor(unsigned long _value)
			* 
			* Arguments
			*   unsigned long _value : Incoming value
			*
			* Description
			*   Accepts an unsigned long value and converts to string
			*
			* Return none
			***********************************************************************************************************************/
			String(unsigned long _value) {
				*this = std::to_string(_value);
			}
			
			
			/***********************************************************************************************************************
			* constructor(signed int _value)
			* 
			* Arguments
			*   signed int _value : Incoming value
			*
			* Description
			*   Accepts a signed int value and converts to string
			*
			* Return none
			*
			***********************************************************************************************************************/
			String(signed int _value) {
				*this = std::to_string(_value);
			}
			
			
			/***********************************************************************************************************************
			* constructor(unsigned int _value)
			* 
			* Arguments
			*   unsigned int _value : Incoming value
			*
			* Description
			*   Accepts an unsigned int value and converts to string
			*
			* Return none
			*
			***********************************************************************************************************************/
			String(unsigned int _value) {
				*this = std::to_string(_value);
			}
			
			
			/***********************************************************************************************************************
			* constructor(signed long long _value)
			* 
			* Arguments
			*   signed long long _value : Incoming value
			*
			* Description
			*   Accepts a signed long long value and converts to string
			*
			* Return none
			*
			***********************************************************************************************************************/
			String(long long _value) {
				*this = std::to_string(_value);
			}
			
			
			/***********************************************************************************************************************
			* constructor(unsigned long long _value)
			* 
			* Arguments
			*   unsigned long _value : Incoming value
			*
			* Description
			*   Accepts an unsigned long value and converts to string
			*
			* Return none
			*
			***********************************************************************************************************************/
			String(unsigned long long _value) {
				*this = std::to_string(_value);
			}
			
			
			/***********************************************************************************************************************
			* constructor(double _value)
			* 
			* Arguments
			*   double _value : Incoming value
			*
			* Description
			*   Accepts a double value and converts to string
			*
			* Return none
			*
			***********************************************************************************************************************/
			String(double _value) {
				*this = std::to_string(_value);
				
				/* Minimum floating point precision */
				if (this->has("."))
				{
					int i;
					for (i = this->length() - 1; i > 1; i--)
					{
						if ((*this)[i] != '0' || (*this)[i - 2] == '.')
						{
							break;
						}
					}
					if (i > 1 && i != this->length() - 1)
					{
						this->erase(i, this->length() - 1);
					}
				}
			}
			
			
			/***********************************************************************************************************************
			* operator cast()
			*
			* Arguments
			*
			* Description
			*   Implicit cast from Strint to unsigned long long
			*
			* Return unsigned long long
			*   unsigned long long converted from this String
			***********************************************************************************************************************/
			operator unsigned long long() const {
				return std::stoull(*this);
			}
			
			
			/***********************************************************************************************************************
			* lower()
			*
			* Arguments
			*
			* Description
			*   Lowercases all uppercase letters in this string
			*
			* Return &
			***********************************************************************************************************************/
			String& lower() {
				for(auto& c : *this)
				{
					c = tolower(c);
				}
				return *this;
			}
			
			
			/***********************************************************************************************************************
			* upper()
			*
			* Arguments
			*
			* Description
			*   Uppercases all lowercase letters in this string
			*
			* Return &
			***********************************************************************************************************************/
			String& upper() {
				for(auto& c : *this)
				{
					c = toupper(c);
				}
				return *this;
			}
			
			
			/***********************************************************************************************************************
			* has(String substr)
			*
			* Arguments
			*   String substr : Substring to search for
			*
			* Description
			*   Determine if this String contains the given substring
			*  
			* Return bool
			*   true if the substring is present in this string, false otherwise
			***********************************************************************************************************************/
			bool has(const String& substr) {
				return (this->find(substr) != std::string::npos);
			}
			
			
			/***********************************************************************************************************************
			* has(char chr)
			*
			* Arguments
			*   char chr : Character to search for
			*
			* Description
			*   Determine if this String contains the given character
			*  
			* Return bool
			*   true if the character is present in this string, false otherwise
			***********************************************************************************************************************/
			bool has(char chr) {
				return (this->find(chr) != std::string::npos);
			}
			
			
			/***********************************************************************************************************************
			* ltrim()
			*
			* Arguments
			*
			* Description
			*   Remove all white space from the beginning of the string
			*
			* Return &
			***********************************************************************************************************************/
			String& ltrim() {
				this->erase(this->begin(), std::find_if(this->begin(), this->end(), std::not1(std::ptr_fun<int, int>(std::isspace))));
				return *this;
			}
			
			
			/***********************************************************************************************************************
			* rtrim()
			*
			* Arguments
			*
			* Description
			*   Remove all white space from the end of the string
			*
			* Return &
			***********************************************************************************************************************/
			String& rtrim() {
				this->erase(std::find_if(this->rbegin(), this->rend(), std::not1(std::ptr_fun<int, int>(std::isspace))).base(), this->end());
				return *this;
			}
			
			
			/***********************************************************************************************************************
			* trim()
			*
			* Arguments
			*
			* Description
			*   Remove all white space from both the beginning and end of the string
			*
			* Return &
			***********************************************************************************************************************/
			String& trim() {
				return this->ltrim().rtrim();
			}
			
			
			/***********************************************************************************************************************
			* isdecimal()
			*
			* Arguments
			*
			* Description
			*   Determine if this String can be successfully converted to a base 10 long long value
			*  
			* Return bool
			*   true if the String can be converted to a base 10 long long, false otherwise
			***********************************************************************************************************************/
			bool isdecimal() {
				char *p = nullptr;
				
				if (this->trim() == "")
				{
					return false;
				}
				
				auto i = std::strtoll(this->data(), &p, 10);
				if (p == this->data() + this->size())
				{
					return true;
				}
				
				return false;
			}
			
			
			/***********************************************************************************************************************
			* isfloat()
			*
			* Arguments
			*
			* Description
			*   Determine if this String can be successfully converted to a floating point value
			*  
			* Return bool
			*   true if the String can be converted to a floating point value, false otherwise
			***********************************************************************************************************************/
			bool isfloat() {
				char *p = nullptr;
				
				if (this->trim() == "")
				{
					return false;
				}
				
				auto f = std::strtof(this->data(), &p);
				if (p == this->data() + this->size())
				{
					return true;
				}
				
				return false;
			}
			
			
			/***********************************************************************************************************************
			* isnumeric()
			*
			* Arguments
			*
			* Description
			*   Determine whether this String qualifies as numeric:
			*     - Decimal value
			*     - Float value
			*
			* Return bool
			*   true if this String is a numeric type, false otherwise
			***********************************************************************************************************************/
			bool isnumeric() {
				return this->isdecimal() || this->isfloat();
			}
			
			
	};
		
		

}

