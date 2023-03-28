
#include "Cat.hpp"

// Default constructor
Cat::Cat() : AAnimal () { 
	std::cout<< "Cat constructor called!" << std::endl;
	this->type ="Cat";
	this->brain = new Brain();
	return; 
	}

// Copy constructor
Cat::Cat(const Cat &other) : AAnimal(other) { // call base class copy constructor
  if (other.brain != nullptr) {
    this->brain = new Brain(*other.brain); // deep copy of Brain object
  } else {
    this->brain = nullptr;
  }
}

// Copy assignment operator
// Cat &Cat::operator=(const Cat &rhs) {
//   if (this == &rhs) { // check for self-assignment
//     return *this;
//   }

//   delete brain; // free existing dynamically allocated memory, if any
//   if (rhs.brain != nullptr) {
//     this->brain = new Brain(*rhs.brain); // deep copy of Brain object
//   } else {
//     this->brain = nullptr;
//   }

//   return *this;
//}
Cat		&Cat::operator=( Cat const &rhs )
{
	this->type = rhs.getType();
	*(this->brain) = *(rhs.getBrain());
	return *this;
}

AAnimal	&Cat::operator=( AAnimal const &rhs )
{
	this->type = rhs.getType();
	*(this->brain) = *(rhs.getBrain());
	return *this;
}


// Default destructor
Cat::~Cat() { 
	std::cout<< "Cat destructor called!" << std::endl;
	delete (this->brain);
	return; }

void Cat:: makeSound(void)const{

	std::cout<< "Moew!!" << std::endl;
}

Brain * Cat::getBrain()const{
	return (this->brain);
}