
#ifndef SCAVTRAP_HPP_
#define SCAVTRAP_HPP_

#include "ClapTrap.hpp"
// Class declaration
class ScavTrap : virtual public ClapTrap{
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &other);
	~ScavTrap();
	ScavTrap &operator=(const ScavTrap &rhs);

	void guardGate();
	void attack(const std::string& target);
	
 private:
 
};

#endif // SCAVTRAP_HPP_
