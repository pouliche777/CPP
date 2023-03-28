
#include "ScavTrap.hpp"


// Default constructor
ScavTrap::ScavTrap(){
	std::cout<< "Default constructor for ScavTRap has been called!" << std::endl; 
	this->AttackDamage = 20;
	this->EnergyPoints = 50;
	this->HitPoints = 100;
	this->MaxHitPoints = HitPoints;
	this->name = "DEFAULT";
}

// Name constructor
ScavTrap::ScavTrap(std::string name) { 
	
	std::cout<< "Name constructor for ScavTRap has been called!" << name << std::endl; 
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
	if (this->HitPoints == 0){
		std::cout << this->name << " is dead. He can't perform any action!! " <<  std::endl;
		return ;
	}
	 else if (this->EnergyPoints <= 0){
		std::cout << this->name << " can't attack because he has no energy or is dead" <<  std::endl;
		return ;
	}
	std::cout<< this->name << ", a ScavTrap, attacks " << target << " for " << this->AttackDamage << " damage!!!" << std::endl;
	this->EnergyPoints--;
}
// Copy assignment overload
ScavTrap & ScavTrap::operator=(const ScavTrap &rhs) {
  this->AttackDamage = rhs.AttackDamage;
	this->EnergyPoints = rhs.EnergyPoints;
	this->HitPoints = rhs.HitPoints;
	this->name = rhs.name;
	this->MaxHitPoints = rhs.MaxHitPoints;
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
	std::cout<<this->name << "  " << this->EnergyPoints << std::endl;

	}
	else
		std::cout<<this->name << " is out of ernergy or simply DEAD!" << std::endl;
}

