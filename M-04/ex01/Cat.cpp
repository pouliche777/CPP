
#include "Cat.hpp"

// Default constructor
Cat::Cat() : Animal () { 
	std::cout<< "Cat constructor called!" << std::endl;
	this->type ="Cat";
	this->brain = new Brain();
	return; 
	}

// Copy constructor
Cat::Cat(const Cat &other): Animal ()  { 
    this->brain = new Brain(*other.brain);
	*this = other;

}

Cat		&Cat::operator=( Cat const &rhs )
{
	this->type = rhs.getType();
	//this->brain = new Brain;
	*(this->brain) = *(rhs.getBrain());
	return *this;
}

Cat* Cat :: clone() const {
        return new Cat(*this);
    }
Animal	&Cat::operator=( Animal const &rhs )
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