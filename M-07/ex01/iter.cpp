#include "iter.hpp"

template <typename T>
void iter(T *tab, int size, void (*ptrF)(T const & arg)){
	for(int i =0; i <size; i++){
		ptrF(tab[i]);
	}
}
template <typename T>
void showTab(T arg){
	std::cout<< arg << std::endl;
}