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
			* constructor(std::string _value)
			*
			* Arguments
			*   _value : Incoming value
			*
			* Description
			*   Accepts a std::string value and converts to string
			*
			* Return none
			***********************************************************************************************************************/
			String(const std::string _value) : std::string(_value) { }
			
			
			/***********************************************************************************************************************
			* constructor(const signed long _value)
			*
			* Arguments
			*   _value : Incoming value
			*
			* Description
			*   Accepts a signed long value and converts to string
			*
			* Return none
			***********************************************************************************************************************/
			String(const signed long _value) {
				*this = std::to_string(_value);
			}
			
			
			/***********************************************************************************************************************
			* constructor(unsigned long _value)
			* 
			* Arguments
			*   _value : Incoming value
			*
			* Description
			*   Accepts an unsigned long value and converts to string
			*
			* Return none
			***********************************************************************************************************************/
			String(const unsigned long _value) {
				*this = std::to_string(_value);
			}
			
			
			/***********************************************************************************************************************
			* constructor(signed int _value)
			* 
			* Arguments
			*   _value : Incoming value
			*
			* Description
			*   Accepts a signed int value and converts to string
			*
			* Return none
			*
			***********************************************************************************************************************/
			String(const signed int _value) {
				*this = std::to_string(_value);
			}
			
			
			/***********************************************************************************************************************
			* constructor(unsigned int _value)
			* 
			* Arguments
			*   _value : Incoming value
			*
			* Description
			*   Accepts an unsigned int value and converts to string
			*
			* Return none
			*
			***********************************************************************************************************************/
			String(const unsigned int _value) {
				*this = std::to_string(_value);
			}
			
			
			/***********************************************************************************************************************
			* constructor(signed long long _value)
			* 
			* Arguments
			*   _value : Incoming value
			*
			* Description
			*   Accepts a signed long long value and converts to string
			*
			* Return none
			*
			***********************************************************************************************************************/
			String(const long long _value) {
				*this = std::to_string(_value);
			}
			
			
			/***********************************************************************************************************************
			* constructor(unsigned long long _value)
			* 
			* Arguments
			*   _value : Incoming value
			*
			* Description
			*   Accepts an unsigned long value and converts to string
			*
			* Return none
			*
			***********************************************************************************************************************/
			String(const unsigned long long _value) {
				*this = std::to_string(_value);
			}
			
			
			/***********************************************************************************************************************
			* constructor(double _value)
			* 
			* Arguments
			*   _value : Incoming value
			*
			* Description
			*   Accepts a double value and converts to string
			*
			* Return none
			*
			***********************************************************************************************************************/
			String(const double _value) {
				*this = std::to_string(_value);
				this->minimizeFloatPrecision();
			}
			
			
			/***********************************************************************************************************************
			* constructor(long double _value)
			* 
			* Arguments
			*   _value : Incoming value
			*
			* Description
			*   Accepts a long double value and converts to string
			*
			* Return none
			*
			***********************************************************************************************************************/
			String(const long double _value) {
				*this = std::to_string(_value);
				this->minimizeFloatPrecision();
			}
			
			
			/***********************************************************************************************************************
			* operator=(const std::string& _value)
			*
			* Arguments
			*   _value : Incoming value
			*
			* Description
			*   Assign new std::string value
			*
			* Return String&
			*   Reference to this string
			***********************************************************************************************************************/
			String& operator=(const std::string& _value) {
				*this = std::string(_value);
				return *this;
			}
			
			
			/***********************************************************************************************************************
			* operator=(const signed char _value)
			*
			* Arguments
			*   _value : Incoming value
			*
			* Description
			*   Assign new converted signed char value
			*
			* Return String&
			*   Reference to this string
			***********************************************************************************************************************/
			String& operator=(const signed char _value) {
				*this = std::to_string(_value);
				return *this;
			}
			
			
			/***********************************************************************************************************************
			* operator=(const unsigned char _value)
			*
			* Arguments
			*   _value : Incoming value
			*
			* Description
			*   Assign new converted unsigned char value
			*
			* Return String&
			*   Reference to this string
			***********************************************************************************************************************/
			String& operator=(const unsigned char _value) {
				*this = std::to_string(_value);
				return *this;
			}
			
			
			/***********************************************************************************************************************
			* operator=(const signed short _value)
			*
			* Arguments
			*   _value : Incoming value
			*
			* Description
			*   Assign new converted signed short value
			*
			* Return String&
			*   Reference to this string
			***********************************************************************************************************************/
			String& operator=(const signed short _value) {
				*this = std::to_string(_value);
				return *this;
			}
			
			
			/***********************************************************************************************************************
			* operator=(const unsigned short _value)
			*
			* Arguments
			*   _value : Incoming value
			*
			* Description
			*   Assign new converted unsigned short value
			*
			* Return String&
			*   Reference to this string
			***********************************************************************************************************************/
			String& operator=(const unsigned short _value) {
				*this = std::to_string(_value);
				return *this;
			}
			
			
			/***********************************************************************************************************************
			* operator=(const signed long _value)
			*
			* Arguments
			*   _value : Incoming value
			*
			* Description
			*   Assign new converted signed long value
			*
			* Return String&
			*   Reference to this string
			***********************************************************************************************************************/
			String& operator=(const signed long _value) {
				*this = std::to_string(_value);
				return *this;
			}
			
			
			/***********************************************************************************************************************
			* operator=(const unsigned long _value)
			*
			* Arguments
			*   _value : Incoming value
			*
			* Description
			*   Assign new converted unsigned long value
			*
			* Return String&
			*   Reference to this string
			***********************************************************************************************************************/
			String& operator=(const unsigned long _value) {
				*this = std::to_string(_value);
				return *this;
			}
			
			
			/***********************************************************************************************************************
			* operator=(const signed int _value)
			*
			* Arguments
			*   _value : Incoming value
			*
			* Description
			*   Assign new converted signed int value
			*
			* Return String&
			*   Reference to this string
			***********************************************************************************************************************/
			String& operator=(const signed int _value) {
				*this = std::to_string(_value);
				return *this;
			}
			
			
			/***********************************************************************************************************************
			* operator=(const unsigned int _value)
			*
			* Arguments
			*   _value : Incoming value
			*
			* Description
			*   Assign new converted unsigned int value
			*
			* Return String&
			*   Reference to this string
			***********************************************************************************************************************/
			String& operator=(const unsigned int _value) {
				*this = std::to_string(_value);
				return *this;
			}
			
			
			/***********************************************************************************************************************
			* operator=(const signed long long _value)
			*
			* Arguments
			*   _value : Incoming value
			*
			* Description
			*   Assign new converted signed long long value
			*
			* Return String&
			*   Reference to this string
			***********************************************************************************************************************/
			String& operator=(const signed long long _value) {
				*this = std::to_string(_value);
				return *this;
			}
			
			
			/***********************************************************************************************************************
			* operator=(const unsigned long long _value)
			*
			* Arguments
			*   _value : Incoming value
			*
			* Description
			*   Assign new converted unsigned long long value
			*
			* Return String&
			*   Reference to this string
			***********************************************************************************************************************/
			String& operator=(const unsigned long long _value) {
				*this = std::to_string(_value);
				return *this;
			}
			
			
			/***********************************************************************************************************************
			* operator=(const float _value)
			*
			* Arguments
			*   _value : Incoming value
			*
			* Description
			*   Assign new converted float value
			*
			* Return String&
			*   Reference to this string
			***********************************************************************************************************************/
			String& operator=(const float _value) {
				*this = std::to_string(_value);
				return this->minimizeFloatPrecision();
			}
			
			
			/***********************************************************************************************************************
			* operator=(const double _value)
			*
			* Arguments
			*   _value : Incoming value
			*
			* Description
			*   Assign new converted double value
			*
			* Return String&
			*   Reference to this string
			***********************************************************************************************************************/
			String& operator=(const double _value) {
				*this = std::to_string(_value);
				return this->minimizeFloatPrecision();
			}
			
			
			/***********************************************************************************************************************
			* operator=(const long double _value)
			*
			* Arguments
			*   _value : Incoming value
			*
			* Description
			*   Assign new converted long double value
			*
			* Return String&
			*   Reference to this string
			***********************************************************************************************************************/
			String& operator=(const long double _value) {
				*this = std::to_string(_value);
				return this->minimizeFloatPrecision();
			}
			
			
			/***********************************************************************************************************************
			* operator char()
			*
			* Arguments
			*
			* Description
			*   Implicit cast from String to char
			*
			* Return char
			*   String converted to char
			***********************************************************************************************************************/
			operator char() const {
				return std::stoull(*this);
			}
			
			
			/***********************************************************************************************************************
			* operator signed char()
			*
			* Arguments
			*
			* Description
			*   Implicit cast from String to signed char
			*
			* Return signed char
			*   String converted to signed char
			***********************************************************************************************************************/
			operator signed char() const {
				return std::stoll(*this);
			}
			
			
			/***********************************************************************************************************************
			* operator unsigned char()
			*
			* Arguments
			*
			* Description
			*   Implicit cast from String to unsigned char
			*
			* Return unsigned char
			*   String converted to unsigned char
			***********************************************************************************************************************/
			operator unsigned char() const {
				return std::stoull(*this);
			}
			
			
			/***********************************************************************************************************************
			* operator signed short()
			*
			* Arguments
			*
			* Description
			*   Implicit cast from String to signed short
			*
			* Return signed short
			*   String converted to signed short
			***********************************************************************************************************************/
			operator signed short() const {
				return std::stoll(*this);
			}
			
			
			/***********************************************************************************************************************
			* operator unsigned short()
			*
			* Arguments
			*
			* Description
			*   Implicit cast from String to unsigned short
			*
			* Return unsigned short
			*   String converted to unsigned short
			***********************************************************************************************************************/
			operator unsigned short() const {
				return std::stoull(*this);
			}
			
			
			/***********************************************************************************************************************
			* operator signed long()
			*
			* Arguments
			*
			* Description
			*   Implicit cast from String to signed long
			*
			* Return signed long
			*   String converted to signed long
			***********************************************************************************************************************/
			operator signed long() const {
				return std::stoll(*this);
			}
			
			
			/***********************************************************************************************************************
			* operator unsigned long()
			*
			* Arguments
			*
			* Description
			*   Implicit cast from String to unsigned long
			*
			* Return unsigned long
			*   String converted to unsigned long
			***********************************************************************************************************************/
			operator unsigned long() const {
				return std::stoull(*this);
			}
			
			
			/***********************************************************************************************************************
			* operator signed int()
			*
			* Arguments
			*
			* Description
			*   Implicit cast from String to signed int
			*
			* Return signed int
			*   String converted to signed int
			***********************************************************************************************************************/
			operator signed int() const {
				return std::stoll(*this);
			}
			
			
			/***********************************************************************************************************************
			* operator unsigned int()
			*
			* Arguments
			*
			* Description
			*   Implicit cast from String to unsigned int
			*
			* Return unsigned int
			*   String converted to unsigned int
			***********************************************************************************************************************/
			operator unsigned int() const {
				return std::stoull(*this);
			}
			
			
			/***********************************************************************************************************************
			* operator signed long long()
			*
			* Arguments
			*
			* Description
			*   Implicit cast from String to signed long long
			*
			* Return signed long long
			*   String converted to signed long long
			***********************************************************************************************************************/
			operator signed long long() const {
				return std::stoll(*this);
			}
			
			
			/***********************************************************************************************************************
			* operator unsigned long long()
			*
			* Arguments
			*
			* Description
			*   Implicit cast from String to unsigned long long
			*
			* Return unsigned long long
			*   String converted to unsigned long long
			***********************************************************************************************************************/
			operator unsigned long long() const {
				return std::stoull(*this);
			}
			
			
			/***********************************************************************************************************************
			* operator float()
			*
			* Arguments
			*
			* Description
			*   Implicit cast from String to double
			*
			* Return double
			*   String converted to float
			***********************************************************************************************************************/
			operator float() const {
				return std::stod(*this);
			}
			
			
			/***********************************************************************************************************************
			* operator double()
			*
			* Arguments
			*
			* Description
			*   Implicit cast from String to double
			*
			* Return double
			*   String converted to double
			***********************************************************************************************************************/
			operator double() const {
				return std::stod(*this);
			}
			
			
			/***********************************************************************************************************************
			* operator long double()
			*
			* Arguments
			*
			* Description
			*   Implicit cast from String to long double
			*
			* Return double
			*   String converted to long double
			***********************************************************************************************************************/
			operator long double() const {
				return std::stold(*this);
			}
			
			
			/***********************************************************************************************************************
			* minimizeFloatPrecision()
			*
			* Arguments
			*
			* Description
			*   Remove zero digits to minimize floating point string
			*
			* Return &
			***********************************************************************************************************************/
			String& minimizeFloatPrecision() {
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
				return *this;
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
			*   chr : Character to search for
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
	
	
	
	/*******************************************************************************************************************************
	* operator<(const String& lhs, const String& rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a LT string comparison
	*
	* Return bool
	*   true if the string representation of lhs < the string representation of rhs
	*******************************************************************************************************************************/
	bool operator<(const String& lhs, const String& rhs) {
		return lhs.compare(rhs) < 0;
	}
	
	
	/*******************************************************************************************************************************
	* operator<(const String& lhs, const signed char rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a LT signed char comparison
	*
	* Return bool
	*   true if the signed char representation of lhs < the signed char rhs
	*******************************************************************************************************************************/
	bool operator<(const String& lhs, const signed char rhs) {
		return (signed char)lhs < rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator<(const signed char lhs, const String& rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a LT signed char comparison
	*
	* Return bool
	*   true if the signed char lhs < the signed char representation of rhs
	*******************************************************************************************************************************/
	bool operator<(const signed char lhs, const String& rhs) {
		return lhs < (signed char)rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator<(const String& lhs, const unsigned char rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a LT unsigned char comparison
	*
	* Return bool
	*   true if the unsigned char representation of lhs < the unsigned char rhs
	*******************************************************************************************************************************/
	bool operator<(const String& lhs, const unsigned char rhs) {
		return (unsigned char)lhs < rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator<(const unsigned char lhs, const String& rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a LT unsigned char comparison
	*
	* Return bool
	*   true if the unsigned char lhs < the unsigned char representation of rhs
	*******************************************************************************************************************************/
	bool operator<(const unsigned char lhs, const String& rhs) {
		return lhs < (unsigned char)rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator<(const String& lhs, const signed short rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a LT signed short comparison
	*
	* Return bool
	*   true if the signed short representation of lhs < the signed short rhs
	*******************************************************************************************************************************/
	bool operator<(const String& lhs, const signed short rhs) {
		return (signed short)lhs < rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator<(const signed short lhs, const String& rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a LT signed short comparison
	*
	* Return bool
	*   true if the signed short lhs < the signed short representation of rhs
	*******************************************************************************************************************************/
	bool operator<(const signed short lhs, const String& rhs) {
		return lhs < (signed short)rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator<(const String& lhs, const unsigned short rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a LT unsigned short comparison
	*
	* Return bool
	*   true if the unsigned short representation of lhs < the unsigned short rhs
	*******************************************************************************************************************************/
	bool operator<(const String& lhs, const unsigned short rhs) {
		return (unsigned short)lhs < rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator<(const unsigned short lhs, const String& rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a LT unsigned short comparison
	*
	* Return bool
	*   true if the unsigned short lhs < the unsigned short representation of rhs
	*******************************************************************************************************************************/
	bool operator<(const unsigned short lhs, const String& rhs) {
		return lhs < (unsigned short)rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator<(const String& lhs, const signed long rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a LT signed long comparison
	*
	* Return bool
	*   true if the signed long representation of lhs < the signed long rhs
	*******************************************************************************************************************************/
	bool operator<(const String& lhs, const signed long rhs) {
		return (signed long)lhs < rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator<(const signed long lhs, const String& rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a LT signed long comparison
	*
	* Return bool
	*   true if the signed long lhs < the signed long representation of rhs
	*******************************************************************************************************************************/
	bool operator<(const signed long lhs, const String& rhs) {
		return lhs < (signed long)rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator<(const String& lhs, const unsigned long rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a LT unsigned long comparison
	*
	* Return bool
	*   true if the unsigned long representation of lhs < the unsigned long rhs
	*******************************************************************************************************************************/
	bool operator<(const String& lhs, const unsigned long rhs) {
		return (unsigned long)lhs < rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator<(const unsigned long lhs, const String& rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a LT unsigned long comparison
	*
	* Return bool
	*   true if the unsigned long lhs < the unsigned long representation of rhs
	*******************************************************************************************************************************/
	bool operator<(const unsigned long lhs, const String& rhs) {
		return lhs < (unsigned long)rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator<(const String& lhs, const signed int rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a LT signed int comparison
	*
	* Return bool
	*   true if the signed int representation of lhs < the signed int rhs
	*******************************************************************************************************************************/
	bool operator<(const String& lhs, const signed int rhs) {
		return (signed int)lhs < rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator<(const signed int lhs, const String& rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a LT signed int comparison
	*
	* Return bool
	*   true if the signed int lhs < the signed int representation of rhs
	*******************************************************************************************************************************/
	bool operator<(const signed int lhs, const String& rhs) {
		return lhs < (signed int)rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator<(const String& lhs, const unsigned int rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a LT unsigned int comparison
	*
	* Return bool
	*   true if the unsigned int representation of lhs < the unsigned int rhs
	*******************************************************************************************************************************/
	bool operator<(const String& lhs, const unsigned int rhs) {
		return (unsigned int)lhs < rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator<(const unsigned int lhs, const String& rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a LT unsigned int comparison
	*
	* Return bool
	*   true if the unsigned int lhs < the unsigned int representation of rhs
	*******************************************************************************************************************************/
	bool operator<(const unsigned int lhs, const String& rhs) {
		return lhs < (unsigned int)rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator<(const String& lhs, const signed long long rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a LT signed long long comparison
	*
	* Return bool
	*   true if the signed long long representation of lhs < the signed long long rhs
	*******************************************************************************************************************************/
	bool operator<(const String& lhs, const signed long long rhs) {
		return (signed long long)lhs < rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator<(const signed long long lhs, const String& rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a LT signed long long comparison
	*
	* Return bool
	*   true if the signed long long lhs < the signed long long representation of rhs
	*******************************************************************************************************************************/
	bool operator<(const signed long long lhs, const String& rhs) {
		return lhs < (signed long long)rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator<(const String& lhs, const unsigned long long rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a LT unsigned long long comparison
	*
	* Return bool
	*   true if the unsigned long long representation of lhs < the unsigned long long rhs
	*******************************************************************************************************************************/
	bool operator<(const String& lhs, const unsigned long long rhs) {
		return (unsigned long long)lhs < rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator<(const unsigned long long lhs, const String& rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a LT unsigned long long comparison
	*
	* Return bool
	*   true if the unsigned long long lhs < the unsigned long long representation of rhs
	*******************************************************************************************************************************/
	bool operator<(const unsigned long long lhs, const String& rhs) {
		return lhs < (unsigned long long)rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator<(const String& lhs, const float rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a LT float comparison
	*
	* Return bool
	*   true if the float representation of lhs < the float rhs
	*******************************************************************************************************************************/
	bool operator<(const String& lhs, const float rhs) {
		return (float)lhs < rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator<(const float lhs, const String& rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a LT float comparison
	*
	* Return bool
	*   true if the float lhs < the float representation of rhs
	*******************************************************************************************************************************/
	bool operator<(const float lhs, const String& rhs) {
		return lhs < (float)rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator<(const String& lhs, const double rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a LT double comparison
	*
	* Return bool
	*   true if the double representation of lhs < the double rhs
	*******************************************************************************************************************************/
	bool operator<(const String& lhs, const double rhs) {
		return (double)lhs < rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator<(const double lhs, const String& rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a LT double comparison
	*
	* Return bool
	*   true if the double lhs < the double representation of rhs
	*******************************************************************************************************************************/
	bool operator<(const double lhs, const String& rhs) {
		return lhs < (double)rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator<(const String& lhs, const long double rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a LT long double comparison
	*
	* Return bool
	*   true if the long double representation of lhs < the long double rhs
	*******************************************************************************************************************************/
	bool operator<(const String& lhs, const long double rhs) {
		return (long double)lhs < rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator<(const long double lhs, const String& rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a LT long double comparison
	*
	* Return bool
	*   true if the long double lhs < the long double representation of rhs
	*******************************************************************************************************************************/
	bool operator<(const long double lhs, const String& rhs) {
		return lhs < (long double)rhs;
	}
	
	
	
	/*******************************************************************************************************************************
	* operator<=(const String& lhs, const String& rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a LTE string comparison
	*
	* Return bool
	*   true if the string representation of lhs <= the string representation of rhs
	*******************************************************************************************************************************/
	bool operator<=(const String& lhs, const String& rhs) {
		return lhs.compare(rhs) <= 0;
	}
	
	
	/*******************************************************************************************************************************
	* operator<=(const String& lhs, const signed char rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a LTE signed char comparison
	*
	* Return bool
	*   true if the signed char representation of lhs <= the signed char rhs
	*******************************************************************************************************************************/
	bool operator<=(const String& lhs, const signed char rhs) {
		return (signed char)lhs <= rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator<=(const signed char lhs, const String& rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a LTE signed char comparison
	*
	* Return bool
	*   true if the signed char lhs <= the signed char representation of rhs
	*******************************************************************************************************************************/
	bool operator<=(const signed char lhs, const String& rhs) {
		return lhs <= (signed char)rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator<=(const String& lhs, const unsigned char rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a LTE unsigned char comparison
	*
	* Return bool
	*   true if the unsigned char representation of lhs <= the unsigned char rhs
	*******************************************************************************************************************************/
	bool operator<=(const String& lhs, const unsigned char rhs) {
		return (unsigned char)lhs <= rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator<=(const unsigned char lhs, const String& rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a LTE unsigned char comparison
	*
	* Return bool
	*   true if the unsigned char lhs <= the unsigned char representation of rhs
	*******************************************************************************************************************************/
	bool operator<=(const unsigned char lhs, const String& rhs) {
		return lhs <= (unsigned char)rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator<=(const String& lhs, const signed short rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a LTE signed short comparison
	*
	* Return bool
	*   true if the signed short representation of lhs <= the signed short rhs
	*******************************************************************************************************************************/
	bool operator<=(const String& lhs, const signed short rhs) {
		return (signed short)lhs <= rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator<=(const signed short lhs, const String& rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a LTE signed short comparison
	*
	* Return bool
	*   true if the signed short lhs <= the signed short representation of rhs
	*******************************************************************************************************************************/
	bool operator<=(const signed short lhs, const String& rhs) {
		return lhs <= (signed short)rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator<=(const String& lhs, const unsigned short rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a LTE unsigned short comparison
	*
	* Return bool
	*   true if the unsigned short representation of lhs <= the unsigned short rhs
	*******************************************************************************************************************************/
	bool operator<=(const String& lhs, const unsigned short rhs) {
		return (unsigned short)lhs <= rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator<=(const unsigned short lhs, const String& rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a LTE unsigned short comparison
	*
	* Return bool
	*   true if the unsigned short lhs <= the unsigned short representation of rhs
	*******************************************************************************************************************************/
	bool operator<=(const unsigned short lhs, const String& rhs) {
		return lhs <= (unsigned short)rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator<=(const String& lhs, const signed long rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a LTE signed long comparison
	*
	* Return bool
	*   true if the signed long representation of lhs <= the signed long rhs
	*******************************************************************************************************************************/
	bool operator<=(const String& lhs, const signed long rhs) {
		return (signed long)lhs <= rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator<=(const signed long lhs, const String& rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a LTE signed long comparison
	*
	* Return bool
	*   true if the signed long lhs <= the signed long representation of rhs
	*******************************************************************************************************************************/
	bool operator<=(const signed long lhs, const String& rhs) {
		return lhs <= (signed long)rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator<=(const String& lhs, const unsigned long rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a LTE unsigned long comparison
	*
	* Return bool
	*   true if the unsigned long representation of lhs <= the unsigned long rhs
	*******************************************************************************************************************************/
	bool operator<=(const String& lhs, const unsigned long rhs) {
		return (unsigned long)lhs <= rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator<=(const unsigned long lhs, const String& rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a LTE unsigned long comparison
	*
	* Return bool
	*   true if the unsigned long lhs <= the unsigned long representation of rhs
	*******************************************************************************************************************************/
	bool operator<=(const unsigned long lhs, const String& rhs) {
		return lhs <= (unsigned long)rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator<=(const String& lhs, const signed int rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a LTE signed int comparison
	*
	* Return bool
	*   true if the signed int representation of lhs <= the signed int rhs
	*******************************************************************************************************************************/
	bool operator<=(const String& lhs, const signed int rhs) {
		return (signed int)lhs <= rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator<=(const signed int lhs, const String& rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a LTE signed int comparison
	*
	* Return bool
	*   true if the signed int lhs <= the signed int representation of rhs
	*******************************************************************************************************************************/
	bool operator<=(const signed int lhs, const String& rhs) {
		return lhs <= (signed int)rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator<=(const String& lhs, const unsigned int rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a LTE unsigned int comparison
	*
	* Return bool
	*   true if the unsigned int representation of lhs <= the unsigned int rhs
	*******************************************************************************************************************************/
	bool operator<=(const String& lhs, const unsigned int rhs) {
		return (unsigned int)lhs <= rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator<=(const unsigned int lhs, const String& rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a LTE unsigned int comparison
	*
	* Return bool
	*   true if the unsigned int lhs <= the unsigned int representation of rhs
	*******************************************************************************************************************************/
	bool operator<=(const unsigned int lhs, const String& rhs) {
		return lhs <= (unsigned int)rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator<=(const String& lhs, const signed long long rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a LTE signed long long comparison
	*
	* Return bool
	*   true if the signed long long representation of lhs <= the signed long long rhs
	*******************************************************************************************************************************/
	bool operator<=(const String& lhs, const signed long long rhs) {
		return (signed long long)lhs <= rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator<=(const signed long long lhs, const String& rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a LTE signed long long comparison
	*
	* Return bool
	*   true if the signed long long lhs <= the signed long long representation of rhs
	*******************************************************************************************************************************/
	bool operator<=(const signed long long lhs, const String& rhs) {
		return lhs <= (signed long long)rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator<=(const String& lhs, const unsigned long long rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a LTE unsigned long long comparison
	*
	* Return bool
	*   true if the unsigned long long representation of lhs <= the unsigned long long rhs
	*******************************************************************************************************************************/
	bool operator<=(const String& lhs, const unsigned long long rhs) {
		return (unsigned long long)lhs <= rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator<=(const unsigned long long lhs, const String& rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a LTE unsigned long long comparison
	*
	* Return bool
	*   true if the unsigned long long lhs <= the unsigned long long representation of rhs
	*******************************************************************************************************************************/
	bool operator<=(const unsigned long long lhs, const String& rhs) {
		return lhs <= (unsigned long long)rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator<=(const String& lhs, const float rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a LTE float comparison
	*
	* Return bool
	*   true if the float representation of lhs <= the float rhs
	*******************************************************************************************************************************/
	bool operator<=(const String& lhs, const float rhs) {
		return (float)lhs <= rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator<=(const float lhs, const String& rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a LTE float comparison
	*
	* Return bool
	*   true if the float lhs <= the float representation of rhs
	*******************************************************************************************************************************/
	bool operator<=(const float lhs, const String& rhs) {
		return lhs <= (float)rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator<=(const String& lhs, const double rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a LTE double comparison
	*
	* Return bool
	*   true if the double representation of lhs <= the double rhs
	*******************************************************************************************************************************/
	bool operator<=(const String& lhs, const double rhs) {
		return (double)lhs <= rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator<=(const double lhs, const String& rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a LTE double comparison
	*
	* Return bool
	*   true if the double lhs < the double representation of rhs
	*******************************************************************************************************************************/
	bool operator<=(const double lhs, const String& rhs) {
		return lhs <= (double)rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator<=(const String& lhs, const long double rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a LTE long double comparison
	*
	* Return bool
	*   true if the long double representation of lhs < the long double rhs
	*******************************************************************************************************************************/
	bool operator<=(const String& lhs, const long double rhs) {
		return (long double)lhs <= rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator<=(const long double lhs, const String& rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a LTE long double comparison
	*
	* Return bool
	*   true if the long double lhs < the long double representation of rhs
	*******************************************************************************************************************************/
	bool operator<=(const long double lhs, const String& rhs) {
		return lhs <= (long double)rhs;
	}
	
	
	
	/*******************************************************************************************************************************
	* operator>(const String& lhs, const String& rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a GT string comparison
	*
	* Return bool
	*   true if the string representation of lhs > the string representation of rhs
	*******************************************************************************************************************************/
	bool operator>(const String& lhs, const String& rhs) {
		return lhs.compare(rhs) > 0;
	}
	
	
	/*******************************************************************************************************************************
	* operator>(const String& lhs, const signed char rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a GT signed char comparison
	*
	* Return bool
	*   true if the signed char representation of lhs > the signed char rhs
	*******************************************************************************************************************************/
	bool operator>(const String& lhs, const signed char rhs) {
		return (signed char)lhs > rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator>(const signed char lhs, const String& rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a GT signed char comparison
	*
	* Return bool
	*   true if the signed char lhs > the signed char representation of rhs
	*******************************************************************************************************************************/
	bool operator>(const signed char lhs, const String& rhs) {
		return lhs > (signed char)rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator>(const String& lhs, const unsigned char rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a GT unsigned char comparison
	*
	* Return bool
	*   true if the unsigned char representation of lhs > the unsigned char rhs
	*******************************************************************************************************************************/
	bool operator>(const String& lhs, const unsigned char rhs) {
		return (unsigned char)lhs > rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator>(const unsigned char lhs, const String& rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a GT unsigned char comparison
	*
	* Return bool
	*   true if the unsigned char lhs > the unsigned char representation of rhs
	*******************************************************************************************************************************/
	bool operator>(const unsigned char lhs, const String& rhs) {
		return lhs > (unsigned char)rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator>(const String& lhs, const signed short rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a GT signed short comparison
	*
	* Return bool
	*   true if the signed short representation of lhs > the signed short rhs
	*******************************************************************************************************************************/
	bool operator>(const String& lhs, const signed short rhs) {
		return (signed short)lhs > rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator>(const signed short lhs, const String& rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a GT signed short comparison
	*
	* Return bool
	*   true if the signed short lhs > the signed short representation of rhs
	*******************************************************************************************************************************/
	bool operator>(const signed short lhs, const String& rhs) {
		return lhs > (signed short)rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator>(const String& lhs, const unsigned short rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a GT unsigned short comparison
	*
	* Return bool
	*   true if the unsigned short representation of lhs > the unsigned short rhs
	*******************************************************************************************************************************/
	bool operator>(const String& lhs, const unsigned short rhs) {
		return (unsigned short)lhs > rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator>(const unsigned short lhs, const String& rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a GT unsigned short comparison
	*
	* Return bool
	*   true if the unsigned short lhs > the unsigned short representation of rhs
	*******************************************************************************************************************************/
	bool operator>(const unsigned short lhs, const String& rhs) {
		return lhs > (unsigned short)rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator>(const String& lhs, const signed long rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a GT signed long comparison
	*
	* Return bool
	*   true if the signed long representation of lhs > the signed long rhs
	*******************************************************************************************************************************/
	bool operator>(const String& lhs, const signed long rhs) {
		return (signed long)lhs > rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator>(const signed long lhs, const String& rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a GT signed long comparison
	*
	* Return bool
	*   true if the signed long lhs > the signed long representation of rhs
	*******************************************************************************************************************************/
	bool operator>(const signed long lhs, const String& rhs) {
		return lhs > (signed long)rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator>(const String& lhs, const unsigned long rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a GT unsigned long comparison
	*
	* Return bool
	*   true if the unsigned long representation of lhs > the unsigned long rhs
	*******************************************************************************************************************************/
	bool operator>(const String& lhs, const unsigned long rhs) {
		return (unsigned long)lhs > rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator>(const unsigned long lhs, const String& rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a GT unsigned long comparison
	*
	* Return bool
	*   true if the unsigned long lhs > the unsigned long representation of rhs
	*******************************************************************************************************************************/
	bool operator>(const unsigned long lhs, const String& rhs) {
		return lhs > (unsigned long)rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator>(const String& lhs, const signed int rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a GT signed int comparison
	*
	* Return bool
	*   true if the signed int representation of lhs > the signed int rhs
	*******************************************************************************************************************************/
	bool operator>(const String& lhs, const signed int rhs) {
		return (signed int)lhs > rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator>(const signed int lhs, const String& rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a GT signed int comparison
	*
	* Return bool
	*   true if the signed int lhs > the signed int representation of rhs
	*******************************************************************************************************************************/
	bool operator>(const signed int lhs, const String& rhs) {
		return lhs > (signed int)rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator>(const String& lhs, const unsigned int rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a GT unsigned int comparison
	*
	* Return bool
	*   true if the unsigned int representation of lhs > the unsigned int rhs
	*******************************************************************************************************************************/
	bool operator>(const String& lhs, const unsigned int rhs) {
		return (unsigned int)lhs > rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator>(const unsigned int lhs, const String& rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a GT unsigned int comparison
	*
	* Return bool
	*   true if the unsigned int lhs > the unsigned int representation of rhs
	*******************************************************************************************************************************/
	bool operator>(const unsigned int lhs, const String& rhs) {
		return lhs > (unsigned int)rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator>(const String& lhs, const signed long long rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a GT signed long long comparison
	*
	* Return bool
	*   true if the signed long long representation of lhs > the signed long long rhs
	*******************************************************************************************************************************/
	bool operator>(const String& lhs, const signed long long rhs) {
		return (signed long long)lhs > rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator>(const signed long long lhs, const String& rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a GT signed long long comparison
	*
	* Return bool
	*   true if the signed long long lhs > the signed long long representation of rhs
	*******************************************************************************************************************************/
	bool operator>(const signed long long lhs, const String& rhs) {
		return lhs > (signed long long)rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator>(const String& lhs, const unsigned long long rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a GT unsigned long long comparison
	*
	* Return bool
	*   true if the unsigned long long representation of lhs > the unsigned long long rhs
	*******************************************************************************************************************************/
	bool operator>(const String& lhs, const unsigned long long rhs) {
		return (unsigned long long)lhs > rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator>(const unsigned long long lhs, const String& rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a GT unsigned long long comparison
	*
	* Return bool
	*   true if the unsigned long long lhs > the unsigned long long representation of rhs
	*******************************************************************************************************************************/
	bool operator>(const unsigned long long lhs, const String& rhs) {
		return lhs > (unsigned long long)rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator>(const String& lhs, const float rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a GT float comparison
	*
	* Return bool
	*   true if the float representation of lhs > the float rhs
	*******************************************************************************************************************************/
	bool operator>(const String& lhs, const float rhs) {
		return (float)lhs > rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator>(const float lhs, const String& rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a GT float comparison
	*
	* Return bool
	*   true if the float lhs > the float representation of rhs
	*******************************************************************************************************************************/
	bool operator>(const float lhs, const String& rhs) {
		return lhs > (float)rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator>(const String& lhs, const double rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a GT double comparison
	*
	* Return bool
	*   true if the double representation of lhs > the double rhs
	*******************************************************************************************************************************/
	bool operator>(const String& lhs, const double rhs) {
		return (double)lhs > rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator>(const double lhs, const String& rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a GT double comparison
	*
	* Return bool
	*   true if the double lhs > the double representation of rhs
	*******************************************************************************************************************************/
	bool operator>(const double lhs, const String& rhs) {
		return lhs > (double)rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator>(const String& lhs, const long double rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a GT long double comparison
	*
	* Return bool
	*   true if the long double representation of lhs > the long double rhs
	*******************************************************************************************************************************/
	bool operator>(const String& lhs, const long double rhs) {
		return (long double)lhs > rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator>(const long double lhs, const String& rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a GT long double comparison
	*
	* Return bool
	*   true if the long double lhs > the long double representation of rhs
	*******************************************************************************************************************************/
	bool operator>(const long double lhs, const String& rhs) {
		return lhs > (long double)rhs;
	}
	
	
	
	/*******************************************************************************************************************************
	* operator>=(const String& lhs, const String& rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a GTE string comparison
	*
	* Return bool
	*   true if the string representation of lhs >= the string representation of rhs
	*******************************************************************************************************************************/
	bool operator>=(const String& lhs, const String& rhs) {
		return lhs.compare(rhs) >= 0;
	}
	
	
	/*******************************************************************************************************************************
	* operator>=(const String& lhs, const signed char rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a GTE signed char comparison
	*
	* Return bool
	*   true if the signed char representation of lhs >= the signed char rhs
	*******************************************************************************************************************************/
	bool operator>=(const String& lhs, const signed char rhs) {
		return (signed char)lhs >= rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator>=(const signed char lhs, const String& rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a GTE signed char comparison
	*
	* Return bool
	*   true if the signed char lhs >= the signed char representation of rhs
	*******************************************************************************************************************************/
	bool operator>=(const signed char lhs, const String& rhs) {
		return lhs >= (signed char)rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator>=(const String& lhs, const unsigned char rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a GTE unsigned char comparison
	*
	* Return bool
	*   true if the unsigned char representation of lhs >= the unsigned char rhs
	*******************************************************************************************************************************/
	bool operator>=(const String& lhs, const unsigned char rhs) {
		return (unsigned char)lhs >= rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator>=(const unsigned char lhs, const String& rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a GTE unsigned char comparison
	*
	* Return bool
	*   true if the unsigned char lhs >= the unsigned char representation of rhs
	*******************************************************************************************************************************/
	bool operator>=(const unsigned char lhs, const String& rhs) {
		return lhs >= (unsigned char)rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator>=(const String& lhs, const signed short rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a GTE signed short comparison
	*
	* Return bool
	*   true if the signed short representation of lhs >= the signed short rhs
	*******************************************************************************************************************************/
	bool operator>=(const String& lhs, const signed short rhs) {
		return (signed short)lhs >= rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator>=(const signed short lhs, const String& rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a GTE signed short comparison
	*
	* Return bool
	*   true if the signed short lhs >= the signed short representation of rhs
	*******************************************************************************************************************************/
	bool operator>=(const signed short lhs, const String& rhs) {
		return lhs >= (signed short)rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator>=(const String& lhs, const unsigned short rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a GTE unsigned short comparison
	*
	* Return bool
	*   true if the unsigned short representation of lhs >= the unsigned short rhs
	*******************************************************************************************************************************/
	bool operator>=(const String& lhs, const unsigned short rhs) {
		return (unsigned short)lhs >= rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator>=(const unsigned short lhs, const String& rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a GTE unsigned short comparison
	*
	* Return bool
	*   true if the unsigned short lhs >= the unsigned short representation of rhs
	*******************************************************************************************************************************/
	bool operator>=(const unsigned short lhs, const String& rhs) {
		return lhs >= (unsigned short)rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator>=(const String& lhs, const signed long rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a GTE signed long comparison
	*
	* Return bool
	*   true if the signed long representation of lhs >= the signed long rhs
	*******************************************************************************************************************************/
	bool operator>=(const String& lhs, const signed long rhs) {
		return (signed long)lhs >= rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator>=(const signed long lhs, const String& rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a GTE signed long comparison
	*
	* Return bool
	*   true if the signed long lhs >= the signed long representation of rhs
	*******************************************************************************************************************************/
	bool operator>=(const signed long lhs, const String& rhs) {
		return lhs >= (signed long)rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator>=(const String& lhs, const unsigned long rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a GTE unsigned long comparison
	*
	* Return bool
	*   true if the unsigned long representation of lhs >= the unsigned long rhs
	*******************************************************************************************************************************/
	bool operator>=(const String& lhs, const unsigned long rhs) {
		return (unsigned long)lhs >= rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator>=(const unsigned long lhs, const String& rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a GTE unsigned long comparison
	*
	* Return bool
	*   true if the unsigned long lhs >= the unsigned long representation of rhs
	*******************************************************************************************************************************/
	bool operator>=(const unsigned long lhs, const String& rhs) {
		return lhs >= (unsigned long)rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator>=(const String& lhs, const signed int rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a GTE signed int comparison
	*
	* Return bool
	*   true if the signed int representation of lhs >= the signed int rhs
	*******************************************************************************************************************************/
	bool operator>=(const String& lhs, const signed int rhs) {
		return (signed int)lhs >= rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator>=(const signed int lhs, const String& rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a GTE signed int comparison
	*
	* Return bool
	*   true if the signed int lhs >= the signed int representation of rhs
	*******************************************************************************************************************************/
	bool operator>=(const signed int lhs, const String& rhs) {
		return lhs >= (signed int)rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator>=(const String& lhs, const unsigned int rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a GTE unsigned int comparison
	*
	* Return bool
	*   true if the unsigned int representation of lhs >= the unsigned int rhs
	*******************************************************************************************************************************/
	bool operator>=(const String& lhs, const unsigned int rhs) {
		return (unsigned int)lhs >= rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator>=(const unsigned int lhs, const String& rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a GTE unsigned int comparison
	*
	* Return bool
	*   true if the unsigned int lhs >= the unsigned int representation of rhs
	*******************************************************************************************************************************/
	bool operator>=(const unsigned int lhs, const String& rhs) {
		return lhs >= (unsigned int)rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator>=(const String& lhs, const signed long long rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a GTE signed long long comparison
	*
	* Return bool
	*   true if the signed long long representation of lhs >= the signed long long rhs
	*******************************************************************************************************************************/
	bool operator>=(const String& lhs, const signed long long rhs) {
		return (signed long long)lhs >= rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator>=(const signed long long lhs, const String& rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a GTE signed long long comparison
	*
	* Return bool
	*   true if the signed long long lhs >= the signed long long representation of rhs
	*******************************************************************************************************************************/
	bool operator>=(const signed long long lhs, const String& rhs) {
		return lhs >= (signed long long)rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator>=(const String& lhs, const unsigned long long rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a GTE unsigned long long comparison
	*
	* Return bool
	*   true if the unsigned long long representation of lhs >= the unsigned long long rhs
	*******************************************************************************************************************************/
	bool operator>=(const String& lhs, const unsigned long long rhs) {
		return (unsigned long long)lhs >= rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator>=(const unsigned long long lhs, const String& rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a GTE unsigned long long comparison
	*
	* Return bool
	*   true if the unsigned long long lhs >= the unsigned long long representation of rhs
	*******************************************************************************************************************************/
	bool operator>=(const unsigned long long lhs, const String& rhs) {
		return lhs >= (unsigned long long)rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator>=(const String& lhs, const float rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a GTE float comparison
	*
	* Return bool
	*   true if the float representation of lhs >= the float rhs
	*******************************************************************************************************************************/
	bool operator>=(const String& lhs, const float rhs) {
		return (float)lhs >= rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator>=(const float lhs, const String& rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a GTE float comparison
	*
	* Return bool
	*   true if the float lhs >= the float representation of rhs
	*******************************************************************************************************************************/
	bool operator>=(const float lhs, const String& rhs) {
		return lhs >= (float)rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator>=(const String& lhs, const double rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a GTE double comparison
	*
	* Return bool
	*   true if the double representation of lhs >= the double rhs
	*******************************************************************************************************************************/
	bool operator>=(const String& lhs, const double rhs) {
		return (double)lhs >= rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator>=(const double lhs, const String& rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a GTE double comparison
	*
	* Return bool
	*   true if the double lhs >= the double representation of rhs
	*******************************************************************************************************************************/
	bool operator>=(const double lhs, const String& rhs) {
		return lhs >= (double)rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator>=(const String& lhs, const long double rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a GTE long double comparison
	*
	* Return bool
	*   true if the long double representation of lhs >= the long double rhs
	*******************************************************************************************************************************/
	bool operator>=(const String& lhs, const long double rhs) {
		return (long double)lhs >= rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator>=(const long double lhs, const String& rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a GTE long double comparison
	*
	* Return bool
	*   true if the long double lhs >= the long double representation of rhs
	*******************************************************************************************************************************/
	bool operator>=(const long double lhs, const String& rhs) {
		return lhs >= (long double)rhs;
	}
	
	
	
	/*******************************************************************************************************************************
	* operator==(const String& lhs, const String& rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a EQ string comparison
	*
	* Return bool
	*   true if the string representation of lhs == the string representation of rhs
	*******************************************************************************************************************************/
	bool operator==(const String& lhs, const String& rhs) {
		return lhs.compare(rhs) == 0;
	}
	
	
	/*******************************************************************************************************************************
	* operator==(const String& lhs, const signed char rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a EQ signed char comparison
	*
	* Return bool
	*   true if the signed char representation of lhs == the signed char rhs
	*******************************************************************************************************************************/
	bool operator==(const String& lhs, const signed char rhs) {
		return (signed char)lhs == rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator==(const signed char lhs, const String& rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a EQ signed char comparison
	*
	* Return bool
	*   true if the signed char lhs == the signed char representation of rhs
	*******************************************************************************************************************************/
	bool operator==(const signed char lhs, const String& rhs) {
		return lhs == (signed char)rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator==(const String& lhs, const unsigned char rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a EQ unsigned char comparison
	*
	* Return bool
	*   true if the unsigned char representation of lhs == the unsigned char rhs
	*******************************************************************************************************************************/
	bool operator==(const String& lhs, const unsigned char rhs) {
		return (unsigned char)lhs == rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator==(const unsigned char lhs, const String& rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a EQ unsigned char comparison
	*
	* Return bool
	*   true if the unsigned char lhs == the unsigned char representation of rhs
	*******************************************************************************************************************************/
	bool operator==(const unsigned char lhs, const String& rhs) {
		return lhs == (unsigned char)rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator==(const String& lhs, const signed short rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a EQ signed short comparison
	*
	* Return bool
	*   true if the signed short representation of lhs == the signed short rhs
	*******************************************************************************************************************************/
	bool operator==(const String& lhs, const signed short rhs) {
		return (signed short)lhs == rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator==(const signed short lhs, const String& rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a EQ signed short comparison
	*
	* Return bool
	*   true if the signed short lhs == the signed short representation of rhs
	*******************************************************************************************************************************/
	bool operator==(const signed short lhs, const String& rhs) {
		return lhs == (signed short)rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator==(const String& lhs, const unsigned short rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a EQ unsigned short comparison
	*
	* Return bool
	*   true if the unsigned short representation of lhs == the unsigned short rhs
	*******************************************************************************************************************************/
	bool operator==(const String& lhs, const unsigned short rhs) {
		return (unsigned short)lhs == rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator==(const unsigned short lhs, const String& rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a EQ unsigned short comparison
	*
	* Return bool
	*   true if the unsigned short lhs == the unsigned short representation of rhs
	*******************************************************************************************************************************/
	bool operator==(const unsigned short lhs, const String& rhs) {
		return lhs == (unsigned short)rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator==(const String& lhs, const signed long rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a EQ signed long comparison
	*
	* Return bool
	*   true if the signed long representation of lhs == the signed long rhs
	*******************************************************************************************************************************/
	bool operator==(const String& lhs, const signed long rhs) {
		return (signed long)lhs == rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator==(const signed long lhs, const String& rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a EQ signed long comparison
	*
	* Return bool
	*   true if the signed long lhs == the signed long representation of rhs
	*******************************************************************************************************************************/
	bool operator==(const signed long lhs, const String& rhs) {
		return lhs == (signed long)rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator==(const String& lhs, const unsigned long rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a EQ unsigned long comparison
	*
	* Return bool
	*   true if the unsigned long representation of lhs == the unsigned long rhs
	*******************************************************************************************************************************/
	bool operator==(const String& lhs, const unsigned long rhs) {
		return (unsigned long)lhs == rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator==(const unsigned long lhs, const String& rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a EQ unsigned long comparison
	*
	* Return bool
	*   true if the unsigned long lhs == the unsigned long representation of rhs
	*******************************************************************************************************************************/
	bool operator==(const unsigned long lhs, const String& rhs) {
		return lhs == (unsigned long)rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator==(const String& lhs, const signed int rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a EQ signed int comparison
	*
	* Return bool
	*   true if the signed int representation of lhs == the signed int rhs
	*******************************************************************************************************************************/
	bool operator==(const String& lhs, const signed int rhs) {
		return (signed int)lhs == rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator==(const signed int lhs, const String& rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a EQ signed int comparison
	*
	* Return bool
	*   true if the signed int lhs == the signed int representation of rhs
	*******************************************************************************************************************************/
	bool operator==(const signed int lhs, const String& rhs) {
		return lhs == (signed int)rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator==(const String& lhs, const unsigned int rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a EQ unsigned int comparison
	*
	* Return bool
	*   true if the unsigned int representation of lhs == the unsigned int rhs
	*******************************************************************************************************************************/
	bool operator==(const String& lhs, const unsigned int rhs) {
		return (unsigned int)lhs == rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator==(const unsigned int lhs, const String& rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a EQ unsigned int comparison
	*
	* Return bool
	*   true if the unsigned int lhs == the unsigned int representation of rhs
	*******************************************************************************************************************************/
	bool operator==(const unsigned int lhs, const String& rhs) {
		return lhs == (unsigned int)rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator==(const String& lhs, const signed long long rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a EQ signed long long comparison
	*
	* Return bool
	*   true if the signed long long representation of lhs == the signed long long rhs
	*******************************************************************************************************************************/
	bool operator==(const String& lhs, const signed long long rhs) {
		return (signed long long)lhs == rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator==(const signed long long lhs, const String& rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a EQ signed long long comparison
	*
	* Return bool
	*   true if the signed long long lhs == the signed long long representation of rhs
	*******************************************************************************************************************************/
	bool operator==(const signed long long lhs, const String& rhs) {
		return lhs == (signed long long)rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator==(const String& lhs, const unsigned long long rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a EQ unsigned long long comparison
	*
	* Return bool
	*   true if the unsigned long long representation of lhs == the unsigned long long rhs
	*******************************************************************************************************************************/
	bool operator==(const String& lhs, const unsigned long long rhs) {
		return (unsigned long long)lhs == rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator==(const unsigned long long lhs, const String& rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a EQ unsigned long long comparison
	*
	* Return bool
	*   true if the unsigned long long lhs == the unsigned long long representation of rhs
	*******************************************************************************************************************************/
	bool operator==(const unsigned long long lhs, const String& rhs) {
		return lhs == (unsigned long long)rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator==(const String& lhs, const float rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a EQ float comparison
	*
	* Return bool
	*   true if the float representation of lhs == the float rhs
	*******************************************************************************************************************************/
	bool operator==(const String& lhs, const float rhs) {
		return (float)lhs == rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator==(const float lhs, const String& rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a EQ float comparison
	*
	* Return bool
	*   true if the float lhs == the float representation of rhs
	*******************************************************************************************************************************/
	bool operator==(const float lhs, const String& rhs) {
		return lhs == (float)rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator==(const String& lhs, const double rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a EQ double comparison
	*
	* Return bool
	*   true if the double representation of lhs == the double rhs
	*******************************************************************************************************************************/
	bool operator==(const String& lhs, const double rhs) {
		return (double)lhs == rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator==(const double lhs, const String& rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a EQ double comparison
	*
	* Return bool
	*   true if the double lhs == the double representation of rhs
	*******************************************************************************************************************************/
	bool operator==(const double lhs, const String& rhs) {
		return lhs == (double)rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator==(const String& lhs, const long double rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a EQ long double comparison
	*
	* Return bool
	*   true if the long double representation of lhs == the long double rhs
	*******************************************************************************************************************************/
	bool operator==(const String& lhs, const long double rhs) {
		return (long double)lhs == rhs;
	}
	
	
	/*******************************************************************************************************************************
	* operator==(const long double lhs, const String& rhs)
	*
	* Arguments
	*   lhs : Left side of the comparison
	*   rhs : Right side of the comparison
	*
	* Description
	*   Performs a EQ long double comparison
	*
	* Return bool
	*   true if the long double lhs == the long double representation of rhs
	*******************************************************************************************************************************/
	bool operator==(const long double lhs, const String& rhs) {
		return lhs == (long double)rhs;
	}
	
	

}


