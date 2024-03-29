#pragma once



#include <map>
#include "bool.hpp"



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
	template <class K, class V, typename C = std::less<K>, typename A = std::allocator<std::pair<const K, V> > >
	class Object : public std::map<K, V, C, A> {
		public:
			
			
			/***********************************************************************************************************************
			* Pull in constructors and operator= from std::map
			***********************************************************************************************************************/
			using std::map<K, V>::map;
			
			Bool has(K key) {
				return (this->find(key) != this->end());
			}
	};
		
		

}

