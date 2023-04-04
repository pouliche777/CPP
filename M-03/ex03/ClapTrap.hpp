
#ifndef CLAPTRAP_HPP_
#define CLAPTRAP_HPP_

#include <iostream>
#include <string>
// Class declaration
class ClapTrap {
 public:
	ClapTrap(std::string name);
	ClapTrap(void);
	ClapTrap(const ClapTrap &other);
	ClapTrap &operator=(const ClapTrap &rhs);
	~ClapTrap();

	virtual void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	
 protected:
	std::string name;
  	int	HitPoints;
	int	EnergyPoints;
	int AttackDamage;
	int MaxHitPoints;
	
 private:
	static const int	INIT_HIT_P;
	static const int	INIT_ENERGY_P;
	static const int	INIT_ATT_DMG;
};
#endif // CLAPTRAP_HPP_
