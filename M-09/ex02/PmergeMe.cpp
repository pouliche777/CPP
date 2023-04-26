
#include "PmergeMe.hpp"

PmergeMe::PmergeMe(std::string args[], int argc) {
	setVec(args, argc);
	setList(args, argc);
}

// Copy constructor
PmergeMe::PmergeMe(const PmergeMe &other) {
  *this = other;
  return;
}

// Copy assignment overload
PmergeMe &PmergeMe::operator=(const PmergeMe &rhs) {
  (void)rhs;
  return *this;
}

// Default destructor
PmergeMe::~PmergeMe() {
}

void PmergeMe::setVec(std::string args[], int argc) {
	for (int i=1; i < argc; i++){
		vectInt.push_back(std::stoi(args[i]));
		if(vectInt.back() < 0)
			throw std::invalid_argument("one or some integers of the sequence are negatives");
	}
	
}
void PmergeMe::setList(std::string args[], int argc) {
	for (int i=1; i < argc; i++){
		listInt.push_back(std::stoi(args[i]));
		if(listInt.back() < 0)
			throw std::invalid_argument("one or some integers of the sequence are negatives");
	}
}
void PmergeMe::sortList() {
	std::cout << PINK_CL << "Printing the unsorted integers sequence"  << std::endl;
	std::list<int>::iterator it;
	
	for(it = listInt.begin(); it!= listInt.end();it++){
		std::cout << GREEN_CL << *it  << "  " << DEFAULT_CL;
	}
	std::cout << std::endl;
}
void PmergeMe::sortVec() {
	std::cout << PINK_CL << "Printing the unsorted integers sequence"  << std::endl;
	std::vector<int>::iterator it;
	
	for(it = vectInt.begin(); it!= vectInt.end();it++){
		std::cout << GREEN_CL << *it << "  "  << DEFAULT_CL;
	}
	std::cout << std::endl;
}
