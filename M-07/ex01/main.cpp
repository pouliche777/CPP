#include "iter.hpp"
#include "iter.cpp"
#include <cmath>
int main()
{
	int array[] = {0, 1, 2, 3, 4, 5, 6};
	iter(array, 7, showTab);
	std::string arrayS[] = {"Poulet", "Pedoncule", "Pouliche"};
	iter(arrayS, 3, showTab);
	std::string arrayC[] = {"g", "f", "e"};
	iter(arrayC, 3, showTab);
}