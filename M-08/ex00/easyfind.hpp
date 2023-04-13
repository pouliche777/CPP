#ifndef EASYFIND_HPP_
#define EASYFIND_HPP_
#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
template<typename T>
bool	easyFind(const T& container, int toFind){
	  typename T:: const_iterator it  = std::find( container.begin(), container.end(), toFind );
	  if (it != container.end()){
        std::cout << "Int was found at index : " <<  std::distance(container.begin(), it) << std::endl;
		return true;
	  }
	  else{
	  std::cout << "Int was found in the container! " << std::endl;
	  	return false;
	  }
}
#endif