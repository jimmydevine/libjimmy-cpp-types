#pragma once



#include <map>



/***********************************************************************************************************************************
* libjimmy::types namespace
***********************************************************************************************************************************/
namespace libjimmy::types {

		
		
	/*******************************************************************************************************************************
	* Object class
	*
	* Inherits
	*   std::map
	*
	* Description
	*   Modernized wrapper around std::map
	*******************************************************************************************************************************/
	template <class K, class V>
	class Object : public std::map<K, V> {
		public:
			
			
			/***********************************************************************************************************************
			* Pull in constructors and operator= from std::map
			***********************************************************************************************************************/
			using std::map<K, V>::map;
			
			
	};
		
		

}
