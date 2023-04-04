
#ifndef CAT_HPP_
#define CAT_HPP_

#include "Animal.hpp"
// Class declaration
class Cat : public Animal{
	public:
	Cat();
	Cat(const Cat &other);
	Cat &operator=(const Cat &rhs);
	virtual ~Cat();
	virtual void makeSound(void)const;
	
 private:
  
};

#endif // CAT_HPP_
