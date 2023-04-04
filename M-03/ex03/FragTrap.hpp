
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
	
 protected:
 	static const int	INIT_HIT_P;
	static const int	INIT_ENERGY_P;
	static const int	INIT_ATT_DMG;
 private:

};

#endif // FRAGTRAP_HPP_