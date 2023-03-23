
#ifndef CLAPTRAP_HPP_
#define CLAPTRAP_HPP_

#include <iostream>
#include <string>
// Class declaration
class ClapTrap {
 public:
  ClapTrap(std::string name);
  ClapTrap(const ClapTrap &other);
  ClapTrap &operator=(const ClapTrap &rhs);
  ~ClapTrap();
  void attack(const std::string& target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);

 private:
	std::string name;
  	int	HitPoints;
	int	EnergyPoints;
	int AttackDamage;
	int MaxHitPoints;
};

#endif // CLAPTRAP_HPP_
