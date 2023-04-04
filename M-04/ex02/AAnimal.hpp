
#ifndef AANIMAL_HPP_
#define AANIMAL_HPP_

#include <iostream>
#include <string>
#include "Brain.hpp"
// Class declaration
class AAnimal {
 public:
	AAnimal();
	AAnimal(const AAnimal &other);
	virtual AAnimal &operator=(const AAnimal &rhs);
	std::string getType()const;
	virtual ~AAnimal();

	void virtual makeSound()const = 0;
	virtual Brain *getBrain()const = 0;
	virtual AAnimal* clone() const = 0; 
	
protected:
	std::string type;
 private:
  
};

#endif // ANIMAL_HPP_
