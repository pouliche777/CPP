
#ifndef ANIMAL_HPP_
#define ANIMAL_HPP_

#include <iostream>
#include <string>
// Class declaration
class Animal {
 public:
  Animal();
  Animal(const Animal &other);
  Animal &operator=(const Animal &rhs);
  std::string getType()const;
  virtual ~Animal();	
 void virtual makeSound()const;
protected:
	
	std::string type;
 private:
  
};

#endif // ANIMAL_HPP_
