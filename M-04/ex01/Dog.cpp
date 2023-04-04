
#include "Dog.hpp"

// Default constructor
Dog::Dog():Animal (){
	this->type ="Dog";
	this->brain = new Brain();
	std::cout<< "Dog constructor called!" << std::endl;
	return; 
}

// Copy constructor
Dog::Dog(const Dog &other) :Animal () { // call base class copy constructor
    this->brain = new Brain(*other.brain);
	*this = other;
}

Dog		&Dog::operator=( Dog const &rhs )
{
	this->type = rhs.getType();
	*(this->brain) = *(rhs.getBrain());
	return *this;
}
Dog* Dog :: clone() const{

		//Dog *dog = new Dog;
		//*dog = *this; 
        //return (dog);
		return new Dog(*this);
    }
Animal	&Dog::operator=( Animal const &rhs )
{
	if (this == &rhs) {
        return *this;
    }
    this->type = rhs.getType();
    delete this->brain;
    this->brain = new Brain(*rhs.getBrain());
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