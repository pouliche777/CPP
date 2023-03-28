
#include "ClapTrap.hpp"

//default constructor
ClapTrap::ClapTrap(){
	
	this->AttackDamage = 0;
	this->EnergyPoints = 10;
	this->HitPoints = 10;
	this->MaxHitPoints = HitPoints;
	this->name = "DEFAULT";
	std::cout<< "A new ClapTrap is born!!!  His/her name is : " << name << std::endl; 
	return; 
} 
// Name constructor
ClapTrap::ClapTrap(std::string name) { 
	std::cout<< "A new ClapTrap is born!!!  His/her name is : " << name << std::endl; 
	this->AttackDamage = 0;
	this->EnergyPoints = 10;
	this->HitPoints = 10;
	this->MaxHitPoints = HitPoints;
	this->name = name;
	return; }

// Copy constructor
ClapTrap::ClapTrap(const ClapTrap &other) {
  *this = other;
  return;
}

// Copy assignment overload
ClapTrap &ClapTrap::operator=(const ClapTrap &rhs) {
	this->AttackDamage = rhs.AttackDamage;
	this->EnergyPoints = rhs.EnergyPoints;
	this->HitPoints = rhs.HitPoints;
	this->name = rhs.name;
	this->MaxHitPoints = rhs.MaxHitPoints;
	return *this;
}

void ClapTrap::attack(const std::string& target){
	
	if (this->HitPoints == 0){
		std::cout << this->name << " is dead. He can't perform any action!! " <<  std::endl;
		return ;
	}
	else if (this->EnergyPoints <= 0){
		std::cout << this->name << " can't attack because he has no energy" <<  std::endl;
		return ;
	}
	std::cout<< this->name << " attacks " << target << " for " << this->AttackDamage << " damage!!!" << std::endl;
	this->EnergyPoints--;	
}

  void ClapTrap::takeDamage(unsigned int amount){
	std::cout<< this->name << " takes " << amount << " damage!!!" << std::endl;
	this->HitPoints = this->HitPoints - amount;
	if(this->HitPoints < 0)
		this->HitPoints = 0;
}

  void ClapTrap::beRepaired(unsigned int amount){
	if (this->EnergyPoints <= 0){
		std::cout << this->name << " can't be repaired because he has no energy" <<  std::endl;
		return ;
	}
	if (this->HitPoints == 0){
		std::cout << this->name << " is dead. He can't perform any action!! " <<  std::endl;
		return ;
	}
	std::cout<< this->name << " is repaired for " << amount << " hitpoints !!!" << std::endl;
	this->EnergyPoints--;
	if (this->HitPoints <= this->MaxHitPoints){
		std::cout << this->name << " is fully repaired, he has " << this->MaxHitPoints << " hitpoints !!!" << std::endl;
		this->HitPoints = this->MaxHitPoints;
	}

	
}
// Default destructor
ClapTrap::~ClapTrap() { 
	std::cout << this->name << " has been destroyed " << std::endl; 
	return; }
