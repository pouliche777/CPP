#include "easyfind.hpp"

int main(){

	std::vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);

    std::list<int> lst;
    lst.push_back(2);
    lst.push_back(7);
    lst.push_back(-34);

	easyFind(lst, 7);
	easyFind(vec, 5);
}