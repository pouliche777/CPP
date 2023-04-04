
#ifndef WRONGANIMAL_HPP_
#define WRONGANIMAL_HPP_
#include "iostream"

// Class declaration
class WrongAnimal {
 public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal &other);
	WrongAnimal &operator=(const WrongAnimal &rhs);
	virtual ~WrongAnimal();

	void makeSound() const;
	
protected:
	std::string type;
 private:
  
};

#endif // WRONGANIMAL_HPP_
