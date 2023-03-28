#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ClapTrap pedro("Pedro");
	ScavTrap rodrigo("Rodrigo");
	FragTrap fernando("Fernando");
	pedro.attack("Richard");
	rodrigo.attack("Richard");
	fernando.attack("Richard");
	fernando.highFivesGuys();
	pedro.takeDamage(5);
	pedro.beRepaired(1000);
	pedro.takeDamage(7347234);
	rodrigo.guardGate();
	fernando.takeDamage(7347234);
	rodrigo.takeDamage(7347234);
	rodrigo.guardGate();
	return 0;
}