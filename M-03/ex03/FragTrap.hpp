
#ifndef FRAGTRAP_HPP_
#define FRAGTRAP_HPP_
#include "ClapTrap.hpp"
// Class declaration
class FragTrap : virtual public ClapTrap {
 public:
	FragTrap();
  	FragTrap(std::string name);
	~FragTrap();
  	FragTrap(const FragTrap &other);
  	FragTrap &operator=(const FragTrap &rhs);
  	
 	void highFivesGuys(void);
	int getAttackDamage(void);

 private:
  
};

#endif // FRAGTRAP_HPP_