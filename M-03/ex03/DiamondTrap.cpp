#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
	std::cout<< "Default constructor for DiamondTrap has been called!" << std::endl; 
	this->name ="DEFAULT";
	this->ClapTrap::name = "DEFAULT_diamond";
	AttackDamage = FragTrap::AttackDamage;
	this->EnergyPoints = 50;
	this->HitPoints = FragTrap::HitPoints;
	this->MaxHitPoints = HitPoints;
	return; }


  	DiamondTrap::DiamondTrap(std::string name){
		std::cout<< "Name constructor for DiamondTrap has been called!" << std::endl; 
		this->name =name;
		this->ClapTrap::name = name +"_clap_name";
		this->AttackDamage = FragTrap::getAttackDamage();
		this->EnergyPoints = 50;
		this->HitPoints = FragTrap::HitPoints;
		this->MaxHitPoints = HitPoints;
	return; }

	DiamondTrap::~DiamondTrap(){
		std::cout<< "DiamondTrap destructor called" << std::endl; 

	}
	DiamondTrap::DiamondTrap(const DiamondTrap &other) {
		*this = other;
		return;
	}
	
  	DiamondTrap &DiamondTrap::operator=(const DiamondTrap &rhs){
		this->AttackDamage = rhs.AttackDamage;
		this->EnergyPoints = rhs.EnergyPoints;
		this->HitPoints = rhs.HitPoints;
		this->name = rhs.name;
		this->MaxHitPoints = rhs.MaxHitPoints;
		return *this;
	}
		void DiamondTrap::whoAmI()
		{
			std::cout << "DiamondTrap, who am I??? : " << this->name << " / " << this->ClapTrap::name << std::endl;
			std::cout << this->AttackDamage << std::endl;
		}