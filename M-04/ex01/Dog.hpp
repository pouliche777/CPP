
#ifndef DOG_HPP_
#define DOG_HPP_
#include "Animal.hpp"
// Class declaration
class Dog : public Animal{
 public:
	Dog();
	Dog(const Dog &other);
	Dog &operator=(const Dog &rhs);
	virtual Animal	&operator=( Animal const &rhs );
	virtual ~Dog();
	
	virtual void makeSound(void)const;
	virtual Brain *getBrain()const;
	virtual Dog* clone() const ;
	


 private:
 	Brain *brain;
  
};

#endif // DOG_HPP_
