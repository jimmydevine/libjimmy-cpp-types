#pragma once



#include <list>



/***********************************************************************************************************************************
* libjimmy::types namespace
***********************************************************************************************************************************/
namespace libjimmy::types {

		
		
	/*******************************************************************************************************************************
	* Array class
	*
	* Inherits
	*   std::list
	*
	* Description
	*   Modernized wrapper around std::list
	*******************************************************************************************************************************/
	template <class T>
	class Array : public std::list<T> {
		public:
		
		
			/***********************************************************************************************************************
			* Pull in constructors and operator= from std::list
			***********************************************************************************************************************/
			using std::list<T>::list;
			
			void push(const T& value)
			{
				this->push_back(value);
			}
			
	};
		
		

}

