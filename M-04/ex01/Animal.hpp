
#ifndef ANIMAL_HPP_
#define ANIMAL_HPP_

#include <iostream>
#include <string>
#include "Brain.hpp"
// Class declaration
class Animal {
 public:
	Animal();
	Animal(const Animal &other);
	virtual Animal &operator=(const Animal &rhs);
	std::string getType()const;
	virtual ~Animal();	
	void virtual makeSound()const;
	virtual Brain *getBrain()const = 0;

protected:
	
	std::string type;
 private:
  
};

#endif // ANIMAL_HPP_
