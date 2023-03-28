
#include "WrongCat.hpp"

// Default constructor
WrongCat::WrongCat() { 
	this->type = "WrongCat";
	std::cout<< "WrongCat constructor called!" << std::endl;
	return; }

// Copy constructor
WrongCat::WrongCat(const WrongCat &other) {
  *this = other;
  return;
}

// Copy assignment overload
WrongCat &WrongCat::operator=(const WrongCat &rhs) {
  (void)rhs;
  return *this;
}

// Default destructor
WrongCat::~WrongCat() { 
	std::cout<< "WrongCat destructor called!" << std::endl;
	return; }

void WrongCat::makeSound()const{
	std::cout<< " WrongCat:: MEOOREIRRRHFURHW !!!!" << std::endl;
}

