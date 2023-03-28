
#ifndef SCAVTRAP_HPP_
#define SCAVTRAP_HPP_

#include "ClapTrap.hpp"
// Class declaration
class ScavTrap : public ClapTrap{
 public:
  ScavTrap(std::string name);
  ScavTrap(void);
  ~ScavTrap();
  ScavTrap(const ScavTrap &other);
  ScavTrap &operator=(const ScavTrap &rhs);
  void attack(const std::string& target);
  void guardGate();
   

 private:
 
};

#endif // SCAVTRAP_HPP_
