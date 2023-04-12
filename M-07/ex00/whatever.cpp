#include "whatever.hpp"

template <typename T>
void swapT(T &a, T &b) {
	T temp = a;
	a= b;
	b= temp;
}
template <typename T>
T minT(T &a, T &b){
	if(a < b)
		return (a);
	else
		return b;
}
template <typename T>
T maxT(T &a, T &b){
	if(a > b)
		return a;
	else
		return b;

}