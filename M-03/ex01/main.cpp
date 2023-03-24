#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ClapTrap pedro("Pedro");
	ScavTrap rodrigo("Rodrigo");
	pedro.attack("Richard");
	rodrigo.attack("Richard");
	pedro.takeDamage(5);
	pedro.beRepaired(1000);
	rodrigo.guardGate();
	return 0;
}