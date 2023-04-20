#ifndef ITER_HPP_
#define ITER_HPP_
#include <iostream>

template <typename T>
void iter(T *tab, int size, void (*ptrF)(T const & arg));
template <typename T>
void showTab(T arg);



#endif