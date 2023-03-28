
#include "WrongAnimal.hpp"

// Default constructor
WrongAnimal::WrongAnimal() { 
	this->type = "";
	std::cout<< "WrongAnimal constructor called!" << std::endl;
	return; }

// Copy constructor
WrongAnimal::WrongAnimal(const WrongAnimal &other) {
  *this = other;
  return;
}

// Copy assignment overload
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rhs) {
  (void)rhs;
  return *this;
}

// Default destructor
WrongAnimal::~WrongAnimal() { 
	std::cout<< "WrongAnimal destructor called!" << std::endl;
	return; }

void WrongAnimal::makeSound(void)const{
	std::cout<< "Generic WrongAnimal sounds !!!! : breeee!!" << std::endl;
}
