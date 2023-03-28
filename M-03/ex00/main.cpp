#include "ClapTrap.hpp"

int main()
{
	ClapTrap pedro("Pedro");
	ClapTrap default_1;
	pedro.attack("Richard");
	pedro.takeDamage(5);
	pedro.beRepaired(1000);
	pedro.takeDamage(11);
	pedro.beRepaired(1000);
	return 0;
}