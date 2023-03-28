
#include "Dog.hpp"

// Default constructor
Dog::Dog() {
	this->type ="Dog";
	std::cout<< "Dog constructor called!" << std::endl;
	return; 
}

// Copy constructor
Dog::Dog(const Dog &other) {
  *this = other;
  return;
}

// Copy assignment overload
Dog &Dog::operator=(const Dog &rhs) {
  (void)rhs;
  return *this;
}

// Default destructor
Dog::~Dog() { 
	std::cout<< "Dog destructor called!" << std::endl;
	return; }


void Dog::makeSound(void)const{

	std::cout<< "woof woof!!" << std::endl;
}
