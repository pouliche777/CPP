
#include "FragTrap.hpp"

const int	FragTrap::INIT_HIT_P = 100;
const int	FragTrap::INIT_ENERGY_P = 100;
const int	FragTrap::INIT_ATT_DMG = 30;
// Default constructor
FragTrap::FragTrap() { 
	
	std::cout<< "Default constructor for FragTrap has been called!" << std::endl; 
	this->AttackDamage = FragTrap::INIT_ATT_DMG;
	this->EnergyPoints = FragTrap:: INIT_ENERGY_P;
	this->HitPoints = FragTrap:: INIT_HIT_P;
	this->MaxHitPoints = HitPoints;
	this->name = name;
	return; }


// Name constructor
FragTrap::FragTrap(std::string name) { 
	
	std::cout<< "A new FragTrap is born!!!  His/her name is : " << name << std::endl; 
	this->AttackDamage = FragTrap::INIT_ATT_DMG;
	this->EnergyPoints = FragTrap:: INIT_ENERGY_P;
	this->HitPoints = FragTrap:: INIT_HIT_P;
	this->MaxHitPoints = HitPoints;
	this->name = name;
	return; }
// Default destructor
FragTrap::~FragTrap(){
	
	std::cout<<"FragTrap destructor called" << std::endl;
	 return; }

// Copy constructor
FragTrap::FragTrap(const FragTrap &other) {
  *this = other;
  return;
}
// Copy assignment overload
FragTrap & FragTrap::operator=(const FragTrap &rhs) {
  this->AttackDamage = rhs.AttackDamage;
	this->EnergyPoints = rhs.EnergyPoints;
	this->HitPoints = rhs.HitPoints;
	this->name = rhs.name;
	this->MaxHitPoints = rhs.MaxHitPoints;
  return *this;
}

void	FragTrap:: highFivesGuys(){

	if(this->EnergyPoints > 0 && this->HitPoints > 0){
		std::cout<<this->name << " is asking for an high five!" << std::endl;
		this->EnergyPoints--;
	}
	else
		std::cout<<this->name << " is out of ernergy or simply DEAD!" << std::endl;

}
int FragTrap::getAttackDamage(void)
{
	return(this->AttackDamage);
}
