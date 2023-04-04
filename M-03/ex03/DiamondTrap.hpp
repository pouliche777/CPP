#ifndef DIAMONDTRAP_HPP_
#define DIAMONDTRAP_HPP_
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
// Class declaration
class DiamondTrap :public ScavTrap, public FragTrap  {
 public:
	DiamondTrap();
  	DiamondTrap(std::string name);
	~DiamondTrap();
  	DiamondTrap(const DiamondTrap &other);
  	DiamondTrap &operator=(const DiamondTrap &rhs);
  	
	using				ScavTrap::attack;
 	void whoAmI();

 private:
  std::string name;
};

#endif // DIAMONDTRAP_HPP_