#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	//ClapTrap pedro("Pedro");
	//ScavTrap rodrigo("Rodrigo");
	//FragTrap fernando("Fernando");
	DiamondTrap poulet("poulet");
	//pedro.attack("Richard");
	//rodrigo.attack("Richard");
	//fernando.attack("Richard");
	//fernando.highFivesGuys();
	poulet.takeDamage(5);
	poulet.attack("jambon");
	poulet.attack("jambon");

	poulet.whoAmI();


	//pedro.beRepaired(1000);
	//pedro.takeDamage(7347234);
	//rodrigo.guardGate();
	//fernando.takeDamage(7347234);
	//rodrigo.takeDamage(7347234);
	//rodrigo.guardGate();
	return 0;
}