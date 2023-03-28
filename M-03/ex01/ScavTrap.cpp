
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

// Default constructor
ScavTrap::ScavTrap(){
	std::cout<< "A default new ScavTrap is born!!! " << std::endl; 
	this->AttackDamage = 20;
	this->EnergyPoints = 50;
	this->HitPoints = 100;
	this->MaxHitPoints = HitPoints;
	this->name = "DEFAULT";
}
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
	
	return; 
}

void	ScavTrap:: guardGate(){
	if (this->EnergyPoints > 0 && this->HitPoints > 0){
	std::cout<<this->name << " is guarding the GATE!" << std::endl;
	EnergyPoints--;

	}
	else
		std::cout<<this->name << " is out of ernergy or simply DEAD!" << std::endl;
}

void ScavTrap::attack(const std::string& target){
	
	if (this->HitPoints == 0){
		std::cout << this->name << " is dead. He can't perform any action!! " <<  std::endl;
		return ;
	}
	else if (this->EnergyPoints <= 0){
		std::cout << this->name << " can't attack because he has no energy" <<  std::endl;
		return ;
	}
	std::cout<< this->name << " ,a ScavTrap, attacks " << target << " for " << this->AttackDamage << " damage!!!" << std::endl;
	this->EnergyPoints--;
}
