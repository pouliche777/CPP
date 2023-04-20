#include "whatever.hpp"
#include "whatever.cpp"
#include <iostream>

int main ()
{
	int i = 45;
	int j = 42;

	std::string str ="poulet";
	std::string str1 ="cochon";


	//TEST SWAP
	std::cout << "TEST POUR SWAP"  << std::endl;

	std::cout << i <<  "|||" <<  j  << std::endl;
	swapT(i, j);
	std::cout << i <<  "|||" <<  j  << std::endl;
	swapT(i, j);

	std::cout << str <<  "|||" <<  str1  << std::endl;
	swapT(str, str1);
	std::cout << str <<  "|||" <<  str1  << std::endl;

	//TEST MIN & MAX
	std::cout << "TEST POUR MIN ET MAX"  << std::endl;

	std::cout << "Min :   "<< minT(i, j) << std::endl;
	std::cout << "Max :   "<< maxT(i, j) << std::endl;
	std::cout << "Min :   "<< minT(str, str1) << std::endl;
	std::cout << "Max :   "<< maxT(str, str1) << std::endl;

}