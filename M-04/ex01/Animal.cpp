
#include "Animal.hpp"

// Default constructor
Animal::Animal() { 
	this->type= "";
	std::cout<< "Animal constructor called!" << std::endl;
	return; }

// Copy constructor
Animal::Animal(const Animal &other) {
  *this = other;
  return;
}

// Copy assignment overload
Animal &Animal::operator=(const Animal &rhs) {
	if (this != &rhs) {
        this->type = rhs.type;
    }
    return *this;
}

// Default destructor
Animal::~Animal() { 
	std::cout<< "Animal destructor called!" << std::endl;
	
	return; }


 void	Animal:: makeSound(void)const{

	std::cout<< "generic animal sound!!" << std::endl;
}
std::string Animal::getType(void)const{

	return (this->type);
}
