#pragma once


#include <fstream>
#include <iostream>
#include "string.hpp"


/***********************************************************************************************************************************
* libjimmy::types namespace
***********************************************************************************************************************************/
namespace libjimmy::types {

		
		
	/*******************************************************************************************************************************
	* FileTemplate class
	*
	* Description
	*   Modernized File handler
	*******************************************************************************************************************************/
	template <class T>
	class FileTemplate {
		private:
			String _filepath;
			
			
		public:
			FileTemplate(String filepath) : _filepath(filepath) { }
			
			T read(size_t size = -1) {
				std::ifstream stream(_filepath);
				std::cout << _filepath << std::endl;
				
				std::string str((std::istreambuf_iterator<char>(stream)), std::istreambuf_iterator<char>());
				std::cout << str << std::endl;
				
				return str;
			}
			
	};
		
		

}

