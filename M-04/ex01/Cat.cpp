
#include "Cat.hpp"

// Default constructor
Cat::Cat() : Animal () { 
	std::cout<< "Cat constructor called!" << std::endl;
	this->type ="Cat";
	this->brain = new Brain();
	return; 
	}

// Copy constructor
Cat::Cat(const Cat &other) : Animal(other) { // call base class copy constructor
  if (other.brain != nullptr) {
    this->brain = new Brain(*other.brain); // deep copy of Brain object
  } else {
    this->brain = nullptr;
	std::cout<< "COPY CAT!" << std::endl;
	
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
	delete this->brain;
	this->type = rhs.getType();
	this->brain = new Brain;
	// }
	*(this->brain) = *(rhs.getBrain());

	return *this;
}

Animal	&Cat::operator=( Animal const &rhs )
{
	// if(this!= &rhs)
	// {
	delete this->brain;
	this->type = rhs.getType();
	this->brain = new Brain;
	// }
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