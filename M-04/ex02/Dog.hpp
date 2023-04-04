
#ifndef DOG_HPP_
#define DOG_HPP_
#include "AAnimal.hpp"
// Class declaration
class Dog : public AAnimal{
 public:
	Dog();
	Dog(const Dog &other);
	Dog &operator=(const Dog &rhs);
	virtual AAnimal	&operator=( AAnimal const &rhs );
	virtual ~Dog();
	
	virtual void makeSound(void)const;
	virtual Brain *getBrain()const;
	virtual Dog* clone() const ;
	


 private:
 	Brain *brain;
  
};

#endif // DOG_HPP_
