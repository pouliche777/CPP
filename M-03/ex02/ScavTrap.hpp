
#ifndef SCAVTRAP_HPP_
#define SCAVTRAP_HPP_

#include "ClapTrap.hpp"
// Class declaration
class ScavTrap : public ClapTrap{
 public:
  ScavTrap(std::string name);
  ScavTrap(const ScavTrap &other);
  ScavTrap &operator=(const ScavTrap &rhs);
  void guardGate();
   void attack(const std::string& target);
   ~ScavTrap();

 private:
 
};

#endif // SCAVTRAP_HPP_