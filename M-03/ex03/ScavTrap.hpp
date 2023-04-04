
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

 protected:
	static const int	INIT_HIT_P;
	static const int	INIT_ENERGY_P;
	static const int	INIT_ATT_DMG;
  private:
};

#endif // SCAVTRAP_HPP_
