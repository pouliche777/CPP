
#ifndef CAT_HPP_
#define CAT_HPP_

#include "Animal.hpp"
#include "Brain.hpp"
// Class declaration
class Cat : public Animal{
 public:
	Cat();
	Cat(const Cat &other);
	virtual Animal	&operator=( const Animal &other );
	Cat &operator=(const Cat &rhs);
	virtual ~Cat();
	
	virtual void makeSound(void)const;
	virtual Brain *getBrain()const;
	virtual Cat* clone() const;
 private:
	Brain *brain;
  
};

#endif // CAT_HPP_
