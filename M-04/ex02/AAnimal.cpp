
#include "AAnimal.hpp"

// Default constructor
AAnimal::AAnimal() { 
	this->type= "";
	std::cout<< "Animal constructor called!" << std::endl;
	return; }

// Copy constructor
AAnimal::AAnimal(const AAnimal &other) {
  *this = other;
  return;
}

// Copy assignment overload
AAnimal &AAnimal::operator=(const AAnimal &rhs) {
	if (this != &rhs) {
        this->type = rhs.type;
    }
    return *this;
}

// Default destructor
AAnimal::~AAnimal() { 
	std::cout<< "Animal destructor called!" << std::endl;
	
	return; }


 void	AAnimal:: makeSound(void)const{

	std::cout<< "generic animal sound!!" << std::endl;
}
std::string AAnimal::getType(void)const{

	return (this->type);
}
