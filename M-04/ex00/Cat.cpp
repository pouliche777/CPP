
#include "Cat.hpp"

// Default constructor
Cat::Cat() { 
	std::cout<< "Cat constructor called!" << std::endl;
	this->type ="Cat";
	return; }

// Copy constructor
Cat::Cat(const Cat &other) {
  *this = other;
  return;
}

// Copy assignment overload
Cat &Cat::operator=(const Cat &rhs) {
  (void)rhs;
  return *this;
}

// Default destructor
Cat::~Cat() { 
	std::cout<< "Cat destructor called!" << std::endl;
	return; }

void Cat:: makeSound(void)const{

	std::cout<< "Moew!!" << std::endl;
}