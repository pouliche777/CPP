
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

// Default constructor
ScavTrap::ScavTrap(std::string name) { 
	
	std::cout<< "A new ScavTrap is born!!!  His/her name is : " << name << std::endl; 
	this->AttackDamage = 20;
	this->EnergyPoints = 50;
	this->HitPoints = 100;
	this->MaxHitPoints = HitPoints;
	this->name = name;
	return; }

// Copy constructor
ScavTrap::ScavTrap(const ScavTrap &other) {
  *this = other;
  return;
}

void ScavTrap::attack(const std::string& target){
	
	if (this->EnergyPoints <= 0 && this->HitPoints <=0){
		std::cout << this->name << " can't attack because he has no energy or is dead" <<  std::endl;
		return ;
	}
	std::cout<< this->name << " ,a ScavTrap, attacks " << target << " for " << this->AttackDamage << " damage!!!" << std::endl;
	this->EnergyPoints--;
}
// Copy assignment overload
ScavTrap & ScavTrap::operator=(const ScavTrap &rhs) {
  this->AttackDamage = rhs.AttackDamage;
	this->EnergyPoints = rhs.EnergyPoints;
	this->HitPoints = rhs.HitPoints;
	this->name = rhs.name;
  return *this;
}

// Default destructor
ScavTrap::~ScavTrap(){
	std::cout<<"ScavTrap destructor called" << std::endl;
	 return; }

void	ScavTrap:: guardGate(){
	if (this->EnergyPoints > 0 && this->HitPoints > 0){
	std::cout<<this->name << " is guarding the GATE!" << std::endl;
	EnergyPoints--;

	}
	else
		std::cout<<this->name << " is out of ernergy or simply DEAD!" << std::endl;
}

