
#ifndef DOG_HPP_
#define DOG_HPP_
#include "Animal.hpp"
// Class declaration
class Dog : public Animal{
 public:
  Dog();
  Dog(const Dog &other);
  Dog &operator=(const Dog &rhs);
   virtual void makeSound(void)const;
  virtual ~Dog();


 private:
  
};

#endif // DOG_HPP_
