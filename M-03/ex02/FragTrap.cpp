

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"

// Default constructor
FragTrap::FragTrap(std::string name) { 
	
	std::cout<< "A new FragTrap is born!!!  His/her name is : " << name << std::endl; 
	this->AttackDamage = 20;
	this->EnergyPoints = 50;
	this->HitPoints = 100;
	this->MaxHitPoints = HitPoints;
	this->name = name;
	return; }

// Copy constructor
FragTrap::FragTrap(const FragTrap &other) {
  *this = other;
  return;
}
void FragTrap::attack(const std::string& target){
	
	if (this->EnergyPoints <= 0){
		std::cout << this->name << " can't attack because he has no energy" <<  std::endl;
		return ;
	}
	std::cout<< this->name << " ,a FragTrap, attacks " << target << " for " << this->AttackDamage << " damage!!!" << std::endl;
	this->EnergyPoints--;
}
// Copy assignment overload
FragTrap & FragTrap::operator=(const FragTrap &rhs) {
  this->AttackDamage = rhs.AttackDamage;
	this->EnergyPoints = rhs.EnergyPoints;
	this->HitPoints = rhs.HitPoints;
	this->name = rhs.name;
  return *this;
}

// Default destructor
FragTrap::~FragTrap(){
	
	std::cout<<"FragTrap destructor called" << std::endl;
	 return; }

void	FragTrap:: highFivesGuys(){

	if(this->EnergyPoints > 0 && this->HitPoints > 0){
		std::cout<<this->name << " is aking for an high five!" << std::endl;
		this->EnergyPoints--;
	}
	else
		std::cout<<this->name << " is out of ernergy or simply DEAD!" << std::endl;

}
