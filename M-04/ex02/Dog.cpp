
#include "Dog.hpp"

// Default constructor
Dog::Dog():AAnimal (){
	this->type ="Dog";
	this->brain = new Brain();
	std::cout<< "Dog constructor called!" << std::endl;
	return; 
}

// Copy constructor
Dog::Dog(const Dog &other) : AAnimal(other) { // call base class copy constructor
  if (other.brain != nullptr) {
    this->brain = new Brain(*other.brain); // deep copy of Brain object
  } else {
    this->brain = nullptr;
  }
}

// // Copy assignment operator
// Dog &Dog::operator=(const Dog &rhs) {
//   if (this == &rhs) { // check for self-assignment
//     return *this;
//   }

//   Animal::operator=(rhs); // call base class assignment operator

//   delete brain; // free existing dynamically allocated memory, if any
//   if (rhs.brain != nullptr) {
//     this->brain = new Brain(*rhs.brain); // deep copy of Brain object
//   } else {
//     this->brain = nullptr;
//   }

//   return *this;
// }
Dog		&Dog::operator=( Dog const &rhs )
{
	std::cout << "Assignement operator for Cat called" << std::endl;
	this->type = rhs.getType();
	*(this->brain) = *(rhs.getBrain());
	return *this;
}

AAnimal	&Dog::operator=( AAnimal const &rhs )
{
	this->type = rhs.getType();
	*(this->brain) = *(rhs.getBrain());
	return *this;
}


// Default destructor
Dog::~Dog() { 
	std::cout<< "Dog destructor called!" << std::endl;
	delete (this->brain);
	return; 
	}


void Dog::makeSound(void)const{

	std::cout<< "woof woof!!" << std::endl;
}
Brain * Dog::getBrain()const{
	return (this->brain);
}