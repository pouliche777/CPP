
#ifndef FRAGTRAP_HPP_
#define FRAGTRAP_HPP_
#include "ClapTrap.hpp"
// Class declaration
class FragTrap : public ClapTrap {
 public:
	FragTrap();
  	FragTrap(std::string name);
	~FragTrap();
  	FragTrap(const FragTrap &other);
  	FragTrap &operator=(const FragTrap &rhs);
  	
 	void highFivesGuys(void);

 private:
  
};

#endif // FRAGTRAP_HPP_