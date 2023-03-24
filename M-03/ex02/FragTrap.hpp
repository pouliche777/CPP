
#ifndef FRAGTRAP_HPP_
#define FRAGTRAP_HPP_
#include "ClapTrap.hpp"
// Class declaration
class FragTrap : ClapTrap {
 public:
  FragTrap(std::string name);
  FragTrap(const FragTrap &other);
  FragTrap &operator=(const FragTrap &rhs);
  ~FragTrap();
  void attack(const std::string& target);
  void highFivesGuys(void);

 private:
  
};

#endif // FRAGTRAP_HPP_