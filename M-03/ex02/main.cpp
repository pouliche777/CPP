#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ClapTrap pedro("Pedro");
	ScavTrap rodrigo("Rodrigo");
	FragTrap fernando("Ferando");
	pedro.attack("Richard");
	rodrigo.attack("Richard");
	fernando.attack("Richard");
	fernando.highFivesGuys();
	pedro.takeDamage(5);
	pedro.beRepaired(1000);
	rodrigo.guardGate();
	return 0;
}