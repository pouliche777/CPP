
#ifndef CAT_HPP_
#define CAT_HPP_

#include "AAnimal.hpp"
#include "Brain.hpp"
// Class declaration
class Cat : public AAnimal{
 public:
	Cat();
	Cat(const Cat &other);
	virtual AAnimal	&operator=( const AAnimal &other );
	Cat &operator=(const Cat &rhs);
	virtual ~Cat();
	
	virtual void makeSound(void)const;
	virtual Brain *getBrain()const;
	virtual Cat* clone() const;
 private:
	Brain *brain;
  
};

#endif // CAT_HPP_
