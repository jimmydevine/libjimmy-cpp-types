#pragma once



#include <algorithm>
#include <string>



/***********************************************************************************************************************************
* libjimmy::types namespace
***********************************************************************************************************************************/
namespace libjimmy::types {

		
		
	/*******************************************************************************************************************************
	* StringTemplate class
	*
	* Inherits
	*   std::basic_string<T>
	*
	* Description
	*   Modernized wrapper around std::basic_string<T>
	*******************************************************************************************************************************/
	template <class T>
	class StringTemplate : public std::basic_string<T> {
		public:
			
			
			/***********************************************************************************************************************
			* Pull in constructors and operator= from std::basic_string<T>
			***********************************************************************************************************************/
			using std::basic_string<T>::basic_string;
			using std::basic_string<T>::operator=;
			
			
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
			StringTemplate(const std::basic_string<T> _value) : std::basic_string<T>(_value) { }
			
			
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
			StringTemplate(const signed long _value) {
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
			StringTemplate(const unsigned long _value) {
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
			StringTemplate(const signed int _value) {
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
			StringTemplate(const unsigned int _value) {
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
			StringTemplate(const long long _value) {
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
			StringTemplate(const unsigned long long _value) {
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
			StringTemplate(const double _value) {
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
			StringTemplate(const long double _value) {
				*this = std::to_string(_value);
				this->minimizeFloatPrecision();
			}
			
			
			/***********************************************************************************************************************
			* operator*()
			*
			* Arguments
			*
			* Description
			*   Return a copy of the string
			*
			* Return
			*   Return a copy of the string
			***********************************************************************************************************************/
			StringTemplate operator*() {
				return this->copy();
			}
			
			
			/***********************************************************************************************************************
			* operator(int start, int end)
			*
			* Arguments
			*   start : start offset
			*   end   : end offset
			*
			* Description
			*   Returns a substring given start and end positions.  Negative end position is from the end of the string
			*
			* Return
			*   Return a new instance representing the substring
			***********************************************************************************************************************/
			StringTemplate operator()(int start, int end) {
				if (end < 0)
				{
					end = this->size() + end - 1;
				}
				size_t size = end - start + 1;
				return StringTemplate(this->substr(start, size));
			}
			
			
			/***********************************************************************************************************************
			* operator(int start)
			*
			* Arguments
			*   start : start offset
			*
			* Description
			*   Returns a substring given start and position, copied to the end of the string
			*
			* Return
			*   Return a new instance representing the substring
			***********************************************************************************************************************/
			StringTemplate operator()(int start) {
				size_t size = this->size() - start;
				return StringTemplate(this->substr(start, size));
			}
			
			
			/***********************************************************************************************************************
			* operator=(const std::basic_string<T>& _value)
			*
			* Arguments
			*   _value : Incoming value
			*
			* Description
			*   Assign new std::basic_string<T> value
			*
			* Return StringTemplate&
			*   Reference to this string
			***********************************************************************************************************************/
			StringTemplate& operator=(const std::basic_string<T>& _value) {
				*this = std::basic_string<T>(_value);
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
			* Return StringTemplate&
			*   Reference to this string
			***********************************************************************************************************************/
			StringTemplate& operator=(const signed char _value) {
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
			* Return StringTemplate&
			*   Reference to this string
			***********************************************************************************************************************/
			StringTemplate& operator=(const unsigned char _value) {
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
			* Return StringTemplate&
			*   Reference to this string
			***********************************************************************************************************************/
			StringTemplate& operator=(const signed short _value) {
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
			* Return StringTemplate&
			*   Reference to this string
			***********************************************************************************************************************/
			StringTemplate& operator=(const unsigned short _value) {
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
			* Return StringTemplate&
			*   Reference to this string
			***********************************************************************************************************************/
			StringTemplate& operator=(const signed long _value) {
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
			* Return StringTemplate&
			*   Reference to this string
			***********************************************************************************************************************/
			StringTemplate& operator=(const unsigned long _value) {
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
			* Return StringTemplate&
			*   Reference to this string
			***********************************************************************************************************************/
			StringTemplate& operator=(const signed int _value) {
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
			* Return StringTemplate&
			*   Reference to this string
			***********************************************************************************************************************/
			StringTemplate& operator=(const unsigned int _value) {
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
			* Return StringTemplate&
			*   Reference to this string
			***********************************************************************************************************************/
			StringTemplate& operator=(const signed long long _value) {
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
			* Return StringTemplate&
			*   Reference to this string
			***********************************************************************************************************************/
			StringTemplate& operator=(const unsigned long long _value) {
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
			* Return StringTemplate&
			*   Reference to this string
			***********************************************************************************************************************/
			StringTemplate& operator=(const float _value) {
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
			* Return StringTemplate&
			*   Reference to this string
			***********************************************************************************************************************/
			StringTemplate& operator=(const double _value) {
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
			* Return StringTemplate&
			*   Reference to this string
			***********************************************************************************************************************/
			StringTemplate& operator=(const long double _value) {
				*this = std::to_string(_value);
				return this->minimizeFloatPrecision();
			}
			
			
			/***********************************************************************************************************************
			* operator char()
			*
			* Arguments
			*
			* Description
			*   Implicit cast from StringTemplate to char
			*
			* Return char
			*   StringTemplate converted to char
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
			*   Implicit cast from StringTemplate to signed char
			*
			* Return signed char
			*   StringTemplate converted to signed char
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
			*   Implicit cast from StringTemplate to unsigned char
			*
			* Return unsigned char
			*   StringTemplate converted to unsigned char
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
			*   Implicit cast from StringTemplate to signed short
			*
			* Return signed short
			*   StringTemplate converted to signed short
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
			*   Implicit cast from StringTemplate to unsigned short
			*
			* Return unsigned short
			*   StringTemplate converted to unsigned short
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
			*   Implicit cast from StringTemplate to signed long
			*
			* Return signed long
			*   StringTemplate converted to signed long
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
			*   Implicit cast from StringTemplate to unsigned long
			*
			* Return unsigned long
			*   StringTemplate converted to unsigned long
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
			*   Implicit cast from StringTemplate to signed int
			*
			* Return signed int
			*   StringTemplate converted to signed int
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
			*   Implicit cast from StringTemplate to unsigned int
			*
			* Return unsigned int
			*   StringTemplate converted to unsigned int
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
			*   Implicit cast from StringTemplate to signed long long
			*
			* Return signed long long
			*   StringTemplate converted to signed long long
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
			*   Implicit cast from StringTemplate to unsigned long long
			*
			* Return unsigned long long
			*   StringTemplate converted to unsigned long long
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
			*   Implicit cast from StringTemplate to double
			*
			* Return double
			*   StringTemplate converted to float
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
			*   Implicit cast from StringTemplate to double
			*
			* Return double
			*   StringTemplate converted to double
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
			*   Implicit cast from StringTemplate to long double
			*
			* Return double
			*   StringTemplate converted to long double
			***********************************************************************************************************************/
			operator long double() const {
				return std::stold(*this);
			}
			
			
			/***********************************************************************************************************************
			* operator<(const StringTemplate& lhs, const StringTemplate& rhs)
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
			***********************************************************************************************************************/
			friend bool operator<(const StringTemplate& lhs, const StringTemplate& rhs) {
				return lhs.compare(rhs) < 0;
			}
			
			
			/***********************************************************************************************************************
			* operator<(const StringTemplate& lhs, const signed char rhs)
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
			***********************************************************************************************************************/
			friend bool operator<(const StringTemplate& lhs, const signed char rhs) {
				return (signed char)lhs < rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator<(const signed char lhs, const StringTemplate& rhs)
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
			***********************************************************************************************************************/
			friend bool operator<(const signed char lhs, const StringTemplate& rhs) {
				return lhs < (signed char)rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator<(const StringTemplate& lhs, const unsigned char rhs)
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
			***********************************************************************************************************************/
			friend bool operator<(const StringTemplate& lhs, const unsigned char rhs) {
				return (unsigned char)lhs < rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator<(const unsigned char lhs, const StringTemplate& rhs)
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
			***********************************************************************************************************************/
			friend bool operator<(const unsigned char lhs, const StringTemplate& rhs) {
				return lhs < (unsigned char)rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator<(const StringTemplate& lhs, const signed short rhs)
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
			***********************************************************************************************************************/
			friend bool operator<(const StringTemplate& lhs, const signed short rhs) {
				return (signed short)lhs < rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator<(const signed short lhs, const StringTemplate& rhs)
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
			***********************************************************************************************************************/
			friend bool operator<(const signed short lhs, const StringTemplate& rhs) {
				return lhs < (signed short)rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator<(const StringTemplate& lhs, const unsigned short rhs)
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
			***********************************************************************************************************************/
			friend bool operator<(const StringTemplate& lhs, const unsigned short rhs) {
				return (unsigned short)lhs < rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator<(const unsigned short lhs, const StringTemplate& rhs)
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
			***********************************************************************************************************************/
			friend bool operator<(const unsigned short lhs, const StringTemplate& rhs) {
				return lhs < (unsigned short)rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator<(const StringTemplate& lhs, const signed long rhs)
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
			***********************************************************************************************************************/
			friend bool operator<(const StringTemplate& lhs, const signed long rhs) {
				return (signed long)lhs < rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator<(const signed long lhs, const StringTemplate& rhs)
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
			***********************************************************************************************************************/
			friend bool operator<(const signed long lhs, const StringTemplate& rhs) {
				return lhs < (signed long)rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator<(const StringTemplate& lhs, const unsigned long rhs)
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
			***********************************************************************************************************************/
			friend bool operator<(const StringTemplate& lhs, const unsigned long rhs) {
				return (unsigned long)lhs < rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator<(const unsigned long lhs, const StringTemplate& rhs)
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
			***********************************************************************************************************************/
			friend bool operator<(const unsigned long lhs, const StringTemplate& rhs) {
				return lhs < (unsigned long)rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator<(const StringTemplate& lhs, const signed int rhs)
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
			***********************************************************************************************************************/
			friend bool operator<(const StringTemplate& lhs, const signed int rhs) {
				return (signed int)lhs < rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator<(const signed int lhs, const StringTemplate& rhs)
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
			***********************************************************************************************************************/
			friend bool operator<(const signed int lhs, const StringTemplate& rhs) {
				return lhs < (signed int)rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator<(const StringTemplate& lhs, const unsigned int rhs)
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
			***********************************************************************************************************************/
			friend bool operator<(const StringTemplate& lhs, const unsigned int rhs) {
				return (unsigned int)lhs < rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator<(const unsigned int lhs, const StringTemplate& rhs)
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
			***********************************************************************************************************************/
			friend bool operator<(const unsigned int lhs, const StringTemplate& rhs) {
				return lhs < (unsigned int)rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator<(const StringTemplate& lhs, const signed long long rhs)
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
			***********************************************************************************************************************/
			friend bool operator<(const StringTemplate& lhs, const signed long long rhs) {
				return (signed long long)lhs < rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator<(const signed long long lhs, const StringTemplate& rhs)
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
			***********************************************************************************************************************/
			friend bool operator<(const signed long long lhs, const StringTemplate& rhs) {
				return lhs < (signed long long)rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator<(const StringTemplate& lhs, const unsigned long long rhs)
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
			***********************************************************************************************************************/
			friend bool operator<(const StringTemplate& lhs, const unsigned long long rhs) {
				return (unsigned long long)lhs < rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator<(const unsigned long long lhs, const StringTemplate& rhs)
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
			***********************************************************************************************************************/
			friend bool operator<(const unsigned long long lhs, const StringTemplate& rhs) {
				return lhs < (unsigned long long)rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator<(const StringTemplate& lhs, const float rhs)
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
			***********************************************************************************************************************/
			friend bool operator<(const StringTemplate& lhs, const float rhs) {
				return (float)lhs < rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator<(const float lhs, const StringTemplate& rhs)
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
			***********************************************************************************************************************/
			friend bool operator<(const float lhs, const StringTemplate& rhs) {
				return lhs < (float)rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator<(const StringTemplate& lhs, const double rhs)
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
			***********************************************************************************************************************/
			friend bool operator<(const StringTemplate& lhs, const double rhs) {
				return (double)lhs < rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator<(const double lhs, const StringTemplate& rhs)
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
			***********************************************************************************************************************/
			friend bool operator<(const double lhs, const StringTemplate& rhs) {
				return lhs < (double)rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator<(const StringTemplate& lhs, const long double rhs)
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
			***********************************************************************************************************************/
			friend bool operator<(const StringTemplate& lhs, const long double rhs) {
				return (long double)lhs < rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator<(const long double lhs, const StringTemplate& rhs)
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
			***********************************************************************************************************************/
			friend bool operator<(const long double lhs, const StringTemplate& rhs) {
				return lhs < (long double)rhs;
			}
			
			
			
			/***********************************************************************************************************************
			* operator<=(const StringTemplate& lhs, const StringTemplate& rhs)
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
			***********************************************************************************************************************/
			friend bool operator<=(const StringTemplate& lhs, const StringTemplate& rhs) {
				return lhs.compare(rhs) <= 0;
			}
			
			
			/***********************************************************************************************************************
			* operator<=(const StringTemplate& lhs, const signed char rhs)
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
			***********************************************************************************************************************/
			friend bool operator<=(const StringTemplate& lhs, const signed char rhs) {
				return (signed char)lhs <= rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator<=(const signed char lhs, const StringTemplate& rhs)
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
			***********************************************************************************************************************/
			friend bool operator<=(const signed char lhs, const StringTemplate& rhs) {
				return lhs <= (signed char)rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator<=(const StringTemplate& lhs, const unsigned char rhs)
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
			***********************************************************************************************************************/
			friend bool operator<=(const StringTemplate& lhs, const unsigned char rhs) {
				return (unsigned char)lhs <= rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator<=(const unsigned char lhs, const StringTemplate& rhs)
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
			***********************************************************************************************************************/
			friend bool operator<=(const unsigned char lhs, const StringTemplate& rhs) {
				return lhs <= (unsigned char)rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator<=(const StringTemplate& lhs, const signed short rhs)
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
			***********************************************************************************************************************/
			friend bool operator<=(const StringTemplate& lhs, const signed short rhs) {
				return (signed short)lhs <= rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator<=(const signed short lhs, const StringTemplate& rhs)
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
			***********************************************************************************************************************/
			friend bool operator<=(const signed short lhs, const StringTemplate& rhs) {
				return lhs <= (signed short)rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator<=(const StringTemplate& lhs, const unsigned short rhs)
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
			***********************************************************************************************************************/
			friend bool operator<=(const StringTemplate& lhs, const unsigned short rhs) {
				return (unsigned short)lhs <= rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator<=(const unsigned short lhs, const StringTemplate& rhs)
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
			***********************************************************************************************************************/
			friend bool operator<=(const unsigned short lhs, const StringTemplate& rhs) {
				return lhs <= (unsigned short)rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator<=(const StringTemplate& lhs, const signed long rhs)
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
			***********************************************************************************************************************/
			friend bool operator<=(const StringTemplate& lhs, const signed long rhs) {
				return (signed long)lhs <= rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator<=(const signed long lhs, const StringTemplate& rhs)
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
			***********************************************************************************************************************/
			friend bool operator<=(const signed long lhs, const StringTemplate& rhs) {
				return lhs <= (signed long)rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator<=(const StringTemplate& lhs, const unsigned long rhs)
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
			***********************************************************************************************************************/
			friend bool operator<=(const StringTemplate& lhs, const unsigned long rhs) {
				return (unsigned long)lhs <= rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator<=(const unsigned long lhs, const StringTemplate& rhs)
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
			***********************************************************************************************************************/
			friend bool operator<=(const unsigned long lhs, const StringTemplate& rhs) {
				return lhs <= (unsigned long)rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator<=(const StringTemplate& lhs, const signed int rhs)
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
			***********************************************************************************************************************/
			friend bool operator<=(const StringTemplate& lhs, const signed int rhs) {
				return (signed int)lhs <= rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator<=(const signed int lhs, const StringTemplate& rhs)
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
			***********************************************************************************************************************/
			friend bool operator<=(const signed int lhs, const StringTemplate& rhs) {
				return lhs <= (signed int)rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator<=(const StringTemplate& lhs, const unsigned int rhs)
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
			***********************************************************************************************************************/
			friend bool operator<=(const StringTemplate& lhs, const unsigned int rhs) {
				return (unsigned int)lhs <= rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator<=(const unsigned int lhs, const StringTemplate& rhs)
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
			***********************************************************************************************************************/
			friend bool operator<=(const unsigned int lhs, const StringTemplate& rhs) {
				return lhs <= (unsigned int)rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator<=(const StringTemplate& lhs, const signed long long rhs)
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
			***********************************************************************************************************************/
			friend bool operator<=(const StringTemplate& lhs, const signed long long rhs) {
				return (signed long long)lhs <= rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator<=(const signed long long lhs, const StringTemplate& rhs)
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
			***********************************************************************************************************************/
			friend bool operator<=(const signed long long lhs, const StringTemplate& rhs) {
				return lhs <= (signed long long)rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator<=(const StringTemplate& lhs, const unsigned long long rhs)
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
			***********************************************************************************************************************/
			friend bool operator<=(const StringTemplate& lhs, const unsigned long long rhs) {
				return (unsigned long long)lhs <= rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator<=(const unsigned long long lhs, const StringTemplate& rhs)
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
			***********************************************************************************************************************/
			friend bool operator<=(const unsigned long long lhs, const StringTemplate& rhs) {
				return lhs <= (unsigned long long)rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator<=(const StringTemplate& lhs, const float rhs)
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
			***********************************************************************************************************************/
			friend bool operator<=(const StringTemplate& lhs, const float rhs) {
				return (float)lhs <= rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator<=(const float lhs, const StringTemplate& rhs)
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
			***********************************************************************************************************************/
			friend bool operator<=(const float lhs, const StringTemplate& rhs) {
				return lhs <= (float)rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator<=(const StringTemplate& lhs, const double rhs)
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
			***********************************************************************************************************************/
			friend bool operator<=(const StringTemplate& lhs, const double rhs) {
				return (double)lhs <= rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator<=(const double lhs, const StringTemplate& rhs)
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
			***********************************************************************************************************************/
			friend bool operator<=(const double lhs, const StringTemplate& rhs) {
				return lhs <= (double)rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator<=(const StringTemplate& lhs, const long double rhs)
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
			***********************************************************************************************************************/
			friend bool operator<=(const StringTemplate& lhs, const long double rhs) {
				return (long double)lhs <= rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator<=(const long double lhs, const StringTemplate& rhs)
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
			***********************************************************************************************************************/
			friend bool operator<=(const long double lhs, const StringTemplate& rhs) {
				return lhs <= (long double)rhs;
			}
			
			
			
			/***********************************************************************************************************************
			* operator>(const StringTemplate& lhs, const StringTemplate& rhs)
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
			***********************************************************************************************************************/
			friend bool operator>(const StringTemplate& lhs, const StringTemplate& rhs) {
				return lhs.compare(rhs) > 0;
			}
			
			
			/***********************************************************************************************************************
			* operator>(const StringTemplate& lhs, const signed char rhs)
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
			***********************************************************************************************************************/
			friend bool operator>(const StringTemplate& lhs, const signed char rhs) {
				return (signed char)lhs > rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator>(const signed char lhs, const StringTemplate& rhs)
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
			***********************************************************************************************************************/
			friend bool operator>(const signed char lhs, const StringTemplate& rhs) {
				return lhs > (signed char)rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator>(const StringTemplate& lhs, const unsigned char rhs)
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
			***********************************************************************************************************************/
			friend bool operator>(const StringTemplate& lhs, const unsigned char rhs) {
				return (unsigned char)lhs > rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator>(const unsigned char lhs, const StringTemplate& rhs)
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
			***********************************************************************************************************************/
			friend bool operator>(const unsigned char lhs, const StringTemplate& rhs) {
				return lhs > (unsigned char)rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator>(const StringTemplate& lhs, const signed short rhs)
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
			***********************************************************************************************************************/
			friend bool operator>(const StringTemplate& lhs, const signed short rhs) {
				return (signed short)lhs > rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator>(const signed short lhs, const StringTemplate& rhs)
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
			***********************************************************************************************************************/
			friend bool operator>(const signed short lhs, const StringTemplate& rhs) {
				return lhs > (signed short)rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator>(const StringTemplate& lhs, const unsigned short rhs)
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
			***********************************************************************************************************************/
			friend bool operator>(const StringTemplate& lhs, const unsigned short rhs) {
				return (unsigned short)lhs > rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator>(const unsigned short lhs, const StringTemplate& rhs)
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
			***********************************************************************************************************************/
			friend bool operator>(const unsigned short lhs, const StringTemplate& rhs) {
				return lhs > (unsigned short)rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator>(const StringTemplate& lhs, const signed long rhs)
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
			***********************************************************************************************************************/
			friend bool operator>(const StringTemplate& lhs, const signed long rhs) {
				return (signed long)lhs > rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator>(const signed long lhs, const StringTemplate& rhs)
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
			***********************************************************************************************************************/
			friend bool operator>(const signed long lhs, const StringTemplate& rhs) {
				return lhs > (signed long)rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator>(const StringTemplate& lhs, const unsigned long rhs)
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
			***********************************************************************************************************************/
			friend bool operator>(const StringTemplate& lhs, const unsigned long rhs) {
				return (unsigned long)lhs > rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator>(const unsigned long lhs, const StringTemplate& rhs)
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
			***********************************************************************************************************************/
			friend bool operator>(const unsigned long lhs, const StringTemplate& rhs) {
				return lhs > (unsigned long)rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator>(const StringTemplate& lhs, const signed int rhs)
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
			***********************************************************************************************************************/
			friend bool operator>(const StringTemplate& lhs, const signed int rhs) {
				return (signed int)lhs > rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator>(const signed int lhs, const StringTemplate& rhs)
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
			***********************************************************************************************************************/
			friend bool operator>(const signed int lhs, const StringTemplate& rhs) {
				return lhs > (signed int)rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator>(const StringTemplate& lhs, const unsigned int rhs)
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
			***********************************************************************************************************************/
			friend bool operator>(const StringTemplate& lhs, const unsigned int rhs) {
				return (unsigned int)lhs > rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator>(const unsigned int lhs, const StringTemplate& rhs)
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
			***********************************************************************************************************************/
			friend bool operator>(const unsigned int lhs, const StringTemplate& rhs) {
				return lhs > (unsigned int)rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator>(const StringTemplate& lhs, const signed long long rhs)
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
			***********************************************************************************************************************/
			friend bool operator>(const StringTemplate& lhs, const signed long long rhs) {
				return (signed long long)lhs > rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator>(const signed long long lhs, const StringTemplate& rhs)
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
			***********************************************************************************************************************/
			friend bool operator>(const signed long long lhs, const StringTemplate& rhs) {
				return lhs > (signed long long)rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator>(const StringTemplate& lhs, const unsigned long long rhs)
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
			***********************************************************************************************************************/
			friend bool operator>(const StringTemplate& lhs, const unsigned long long rhs) {
				return (unsigned long long)lhs > rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator>(const unsigned long long lhs, const StringTemplate& rhs)
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
			***********************************************************************************************************************/
			friend bool operator>(const unsigned long long lhs, const StringTemplate& rhs) {
				return lhs > (unsigned long long)rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator>(const StringTemplate& lhs, const float rhs)
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
			***********************************************************************************************************************/
			friend bool operator>(const StringTemplate& lhs, const float rhs) {
				return (float)lhs > rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator>(const float lhs, const StringTemplate& rhs)
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
			***********************************************************************************************************************/
			friend bool operator>(const float lhs, const StringTemplate& rhs) {
				return lhs > (float)rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator>(const StringTemplate& lhs, const double rhs)
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
			***********************************************************************************************************************/
			friend bool operator>(const StringTemplate& lhs, const double rhs) {
				return (double)lhs > rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator>(const double lhs, const StringTemplate& rhs)
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
			***********************************************************************************************************************/
			friend bool operator>(const double lhs, const StringTemplate& rhs) {
				return lhs > (double)rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator>(const StringTemplate& lhs, const long double rhs)
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
			***********************************************************************************************************************/
			friend bool operator>(const StringTemplate& lhs, const long double rhs) {
				return (long double)lhs > rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator>(const long double lhs, const StringTemplate& rhs)
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
			***********************************************************************************************************************/
			friend bool operator>(const long double lhs, const StringTemplate& rhs) {
				return lhs > (long double)rhs;
			}
			
			
			
			/***********************************************************************************************************************
			* operator>=(const StringTemplate& lhs, const StringTemplate& rhs)
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
			***********************************************************************************************************************/
			friend bool operator>=(const StringTemplate& lhs, const StringTemplate& rhs) {
				return lhs.compare(rhs) >= 0;
			}
			
			
			/***********************************************************************************************************************
			* operator>=(const StringTemplate& lhs, const signed char rhs)
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
			***********************************************************************************************************************/
			friend bool operator>=(const StringTemplate& lhs, const signed char rhs) {
				return (signed char)lhs >= rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator>=(const signed char lhs, const StringTemplate& rhs)
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
			***********************************************************************************************************************/
			friend bool operator>=(const signed char lhs, const StringTemplate& rhs) {
				return lhs >= (signed char)rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator>=(const StringTemplate& lhs, const unsigned char rhs)
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
			***********************************************************************************************************************/
			friend bool operator>=(const StringTemplate& lhs, const unsigned char rhs) {
				return (unsigned char)lhs >= rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator>=(const unsigned char lhs, const StringTemplate& rhs)
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
			***********************************************************************************************************************/
			friend bool operator>=(const unsigned char lhs, const StringTemplate& rhs) {
				return lhs >= (unsigned char)rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator>=(const StringTemplate& lhs, const signed short rhs)
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
			***********************************************************************************************************************/
			friend bool operator>=(const StringTemplate& lhs, const signed short rhs) {
				return (signed short)lhs >= rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator>=(const signed short lhs, const StringTemplate& rhs)
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
			***********************************************************************************************************************/
			friend bool operator>=(const signed short lhs, const StringTemplate& rhs) {
				return lhs >= (signed short)rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator>=(const StringTemplate& lhs, const unsigned short rhs)
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
			***********************************************************************************************************************/
			friend bool operator>=(const StringTemplate& lhs, const unsigned short rhs) {
				return (unsigned short)lhs >= rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator>=(const unsigned short lhs, const StringTemplate& rhs)
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
			***********************************************************************************************************************/
			friend bool operator>=(const unsigned short lhs, const StringTemplate& rhs) {
				return lhs >= (unsigned short)rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator>=(const StringTemplate& lhs, const signed long rhs)
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
			***********************************************************************************************************************/
			friend bool operator>=(const StringTemplate& lhs, const signed long rhs) {
				return (signed long)lhs >= rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator>=(const signed long lhs, const StringTemplate& rhs)
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
			***********************************************************************************************************************/
			friend bool operator>=(const signed long lhs, const StringTemplate& rhs) {
				return lhs >= (signed long)rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator>=(const StringTemplate& lhs, const unsigned long rhs)
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
			***********************************************************************************************************************/
			friend bool operator>=(const StringTemplate& lhs, const unsigned long rhs) {
				return (unsigned long)lhs >= rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator>=(const unsigned long lhs, const StringTemplate& rhs)
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
			***********************************************************************************************************************/
			friend bool operator>=(const unsigned long lhs, const StringTemplate& rhs) {
				return lhs >= (unsigned long)rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator>=(const StringTemplate& lhs, const signed int rhs)
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
			***********************************************************************************************************************/
			friend bool operator>=(const StringTemplate& lhs, const signed int rhs) {
				return (signed int)lhs >= rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator>=(const signed int lhs, const StringTemplate& rhs)
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
			***********************************************************************************************************************/
			friend bool operator>=(const signed int lhs, const StringTemplate& rhs) {
				return lhs >= (signed int)rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator>=(const StringTemplate& lhs, const unsigned int rhs)
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
			***********************************************************************************************************************/
			friend bool operator>=(const StringTemplate& lhs, const unsigned int rhs) {
				return (unsigned int)lhs >= rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator>=(const unsigned int lhs, const StringTemplate& rhs)
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
			***********************************************************************************************************************/
			friend bool operator>=(const unsigned int lhs, const StringTemplate& rhs) {
				return lhs >= (unsigned int)rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator>=(const StringTemplate& lhs, const signed long long rhs)
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
			***********************************************************************************************************************/
			friend bool operator>=(const StringTemplate& lhs, const signed long long rhs) {
				return (signed long long)lhs >= rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator>=(const signed long long lhs, const StringTemplate& rhs)
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
			***********************************************************************************************************************/
			friend bool operator>=(const signed long long lhs, const StringTemplate& rhs) {
				return lhs >= (signed long long)rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator>=(const StringTemplate& lhs, const unsigned long long rhs)
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
			***********************************************************************************************************************/
			friend bool operator>=(const StringTemplate& lhs, const unsigned long long rhs) {
				return (unsigned long long)lhs >= rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator>=(const unsigned long long lhs, const StringTemplate& rhs)
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
			***********************************************************************************************************************/
			friend bool operator>=(const unsigned long long lhs, const StringTemplate& rhs) {
				return lhs >= (unsigned long long)rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator>=(const StringTemplate& lhs, const float rhs)
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
			***********************************************************************************************************************/
			friend bool operator>=(const StringTemplate& lhs, const float rhs) {
				return (float)lhs >= rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator>=(const float lhs, const StringTemplate& rhs)
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
			***********************************************************************************************************************/
			friend bool operator>=(const float lhs, const StringTemplate& rhs) {
				return lhs >= (float)rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator>=(const StringTemplate& lhs, const double rhs)
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
			***********************************************************************************************************************/
			friend bool operator>=(const StringTemplate& lhs, const double rhs) {
				return (double)lhs >= rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator>=(const double lhs, const StringTemplate& rhs)
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
			***********************************************************************************************************************/
			friend bool operator>=(const double lhs, const StringTemplate& rhs) {
				return lhs >= (double)rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator>=(const StringTemplate& lhs, const long double rhs)
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
			***********************************************************************************************************************/
			friend bool operator>=(const StringTemplate& lhs, const long double rhs) {
				return (long double)lhs >= rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator>=(const long double lhs, const StringTemplate& rhs)
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
			***********************************************************************************************************************/
			friend bool operator>=(const long double lhs, const StringTemplate& rhs) {
				return lhs >= (long double)rhs;
			}
			
			
			
			/***********************************************************************************************************************
			* operator==(const StringTemplate& lhs, const StringTemplate& rhs)
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
			***********************************************************************************************************************/
			friend bool operator==(const StringTemplate& lhs, const StringTemplate& rhs) {
				return lhs.compare(rhs) == 0;
			}
			
			
			/***********************************************************************************************************************
			* operator==(const StringTemplate& lhs, const signed char rhs)
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
			***********************************************************************************************************************/
			friend bool operator==(const StringTemplate& lhs, const signed char rhs) {
				return (signed char)lhs == rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator==(const signed char lhs, const StringTemplate& rhs)
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
			***********************************************************************************************************************/
			friend bool operator==(const signed char lhs, const StringTemplate& rhs) {
				return lhs == (signed char)rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator==(const StringTemplate& lhs, const unsigned char rhs)
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
			***********************************************************************************************************************/
			friend bool operator==(const StringTemplate& lhs, const unsigned char rhs) {
				return (unsigned char)lhs == rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator==(const unsigned char lhs, const StringTemplate& rhs)
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
			***********************************************************************************************************************/
			friend bool operator==(const unsigned char lhs, const StringTemplate& rhs) {
				return lhs == (unsigned char)rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator==(const StringTemplate& lhs, const signed short rhs)
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
			***********************************************************************************************************************/
			friend bool operator==(const StringTemplate& lhs, const signed short rhs) {
				return (signed short)lhs == rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator==(const signed short lhs, const StringTemplate& rhs)
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
			***********************************************************************************************************************/
			friend bool operator==(const signed short lhs, const StringTemplate& rhs) {
				return lhs == (signed short)rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator==(const StringTemplate& lhs, const unsigned short rhs)
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
			***********************************************************************************************************************/
			friend bool operator==(const StringTemplate& lhs, const unsigned short rhs) {
				return (unsigned short)lhs == rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator==(const unsigned short lhs, const StringTemplate& rhs)
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
			***********************************************************************************************************************/
			friend bool operator==(const unsigned short lhs, const StringTemplate& rhs) {
				return lhs == (unsigned short)rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator==(const StringTemplate& lhs, const signed long rhs)
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
			***********************************************************************************************************************/
			friend bool operator==(const StringTemplate& lhs, const signed long rhs) {
				return (signed long)lhs == rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator==(const signed long lhs, const StringTemplate& rhs)
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
			***********************************************************************************************************************/
			friend bool operator==(const signed long lhs, const StringTemplate& rhs) {
				return lhs == (signed long)rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator==(const StringTemplate& lhs, const unsigned long rhs)
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
			***********************************************************************************************************************/
			friend bool operator==(const StringTemplate& lhs, const unsigned long rhs) {
				return (unsigned long)lhs == rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator==(const unsigned long lhs, const StringTemplate& rhs)
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
			***********************************************************************************************************************/
			friend bool operator==(const unsigned long lhs, const StringTemplate& rhs) {
				return lhs == (unsigned long)rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator==(const StringTemplate& lhs, const signed int rhs)
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
			***********************************************************************************************************************/
			friend bool operator==(const StringTemplate& lhs, const signed int rhs) {
				return (signed int)lhs == rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator==(const signed int lhs, const StringTemplate& rhs)
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
			***********************************************************************************************************************/
			friend bool operator==(const signed int lhs, const StringTemplate& rhs) {
				return lhs == (signed int)rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator==(const StringTemplate& lhs, const unsigned int rhs)
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
			***********************************************************************************************************************/
			friend bool operator==(const StringTemplate& lhs, const unsigned int rhs) {
				return (unsigned int)lhs == rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator==(const unsigned int lhs, const StringTemplate& rhs)
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
			***********************************************************************************************************************/
			friend bool operator==(const unsigned int lhs, const StringTemplate& rhs) {
				return lhs == (unsigned int)rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator==(const StringTemplate& lhs, const signed long long rhs)
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
			***********************************************************************************************************************/
			friend bool operator==(const StringTemplate& lhs, const signed long long rhs) {
				return (signed long long)lhs == rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator==(const signed long long lhs, const StringTemplate& rhs)
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
			***********************************************************************************************************************/
			friend bool operator==(const signed long long lhs, const StringTemplate& rhs) {
				return lhs == (signed long long)rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator==(const StringTemplate& lhs, const unsigned long long rhs)
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
			***********************************************************************************************************************/
			friend bool operator==(const StringTemplate& lhs, const unsigned long long rhs) {
				return (unsigned long long)lhs == rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator==(const unsigned long long lhs, const StringTemplate& rhs)
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
			***********************************************************************************************************************/
			friend bool operator==(const unsigned long long lhs, const StringTemplate& rhs) {
				return lhs == (unsigned long long)rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator==(const StringTemplate& lhs, const float rhs)
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
			***********************************************************************************************************************/
			friend bool operator==(const StringTemplate& lhs, const float rhs) {
				return (float)lhs == rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator==(const float lhs, const StringTemplate& rhs)
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
			***********************************************************************************************************************/
			friend bool operator==(const float lhs, const StringTemplate& rhs) {
				return lhs == (float)rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator==(const StringTemplate& lhs, const double rhs)
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
			***********************************************************************************************************************/
			friend bool operator==(const StringTemplate& lhs, const double rhs) {
				return (double)lhs == rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator==(const double lhs, const StringTemplate& rhs)
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
			***********************************************************************************************************************/
			friend bool operator==(const double lhs, const StringTemplate& rhs) {
				return lhs == (double)rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator==(const StringTemplate& lhs, const long double rhs)
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
			***********************************************************************************************************************/
			friend bool operator==(const StringTemplate& lhs, const long double rhs) {
				return (long double)lhs == rhs;
			}
			
			
			/***********************************************************************************************************************
			* operator==(const long double lhs, const StringTemplate& rhs)
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
			***********************************************************************************************************************/
			friend bool operator==(const long double lhs, const StringTemplate& rhs) {
				return lhs == (long double)rhs;
			}
			
			
			
			/***********************************************************************************************************************
			* copy()
			*
			* Arguments
			*
			* Description
			*   Return a copy of the string
			*
			* Return a copy of the string
			***********************************************************************************************************************/
			StringTemplate copy() {
				return StringTemplate(*this);
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
			StringTemplate& minimizeFloatPrecision() {
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
			StringTemplate& lower() {
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
			StringTemplate& upper() {
				for(auto& c : *this)
				{
					c = toupper(c);
				}
				return *this;
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
			StringTemplate& ltrim() {
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
			StringTemplate& rtrim() {
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
			StringTemplate& trim() {
				return this->ltrim().rtrim();
			}
			
			
			/***********************************************************************************************************************
			* replace(StringTemplate& substr, StringTemplate& with)
			*
			* Arguments
			*   StringTemplate& substr : String to search for
			*   StringTemplate& with   : String to replace with
			*
			* Description
			*   Replace substring `substr` with string `with`
			*  
			* Return &
			***********************************************************************************************************************/
			StringTemplate& replace(const StringTemplate& substr, const StringTemplate& with) {
				size_t index = 0;
				while (true) {
					index = this->find(substr, index);
					if (index == std::string::npos) break;
					std::basic_string<T>::replace(index, substr.size(), with);
					index += with.size();
				}
				return *this;
			}
			
			
			/***********************************************************************************************************************
			* has(StringTemplate& substr)
			*
			* Arguments
			*   StringTemplate& substr : Substring to search for
			*
			* Description
			*   Determine if this StringTemplate contains the given substring
			*  
			* Return bool
			*   true if the substring is present in this string, false otherwise
			***********************************************************************************************************************/
			bool has(const StringTemplate& substr) {
				return (this->find(substr) != std::basic_string<T>::npos);
			}
			
			
			/***********************************************************************************************************************
			* has(char chr)
			*
			* Arguments
			*   chr : Character to search for
			*
			* Description
			*   Determine if this StringTemplate contains the given character
			*  
			* Return bool
			*   true if the character is present in this string, false otherwise
			***********************************************************************************************************************/
			bool has(char chr) {
				return (this->find(chr) != std::basic_string<T>::npos);
			}

			
			/***********************************************************************************************************************
			* isdecimal()
			*
			* Arguments
			*
			* Description
			*   Determine if this StringTemplate can be successfully converted to a base 10 long long value
			*  
			* Return bool
			*   true if the StringTemplate can be converted to a base 10 long long, false otherwise
			***********************************************************************************************************************/
			bool isdecimal() {
				char *p = nullptr;
				
				if (this->trim().empty())
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
			*   Determine if this StringTemplate can be successfully converted to a floating point value
			*  
			* Return bool
			*   true if the StringTemplate can be converted to a floating point value, false otherwise
			***********************************************************************************************************************/
			bool isfloat() {
				char *p = nullptr;
				
				if (this->trim().empty())
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
			*   Determine whether this StringTemplate qualifies as numeric:
			*     - Decimal value
			*     - Float value
			*
			* Return bool
			*   true if this StringTemplate is a numeric type, false otherwise
			***********************************************************************************************************************/
			bool isnumeric() {
				return this->isdecimal() || this->isfloat();
			}
			
			
			
	};
	


}


