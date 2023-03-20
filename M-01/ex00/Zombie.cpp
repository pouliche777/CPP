#include "Zombie.hpp"

Zombie::Zombie(std::string name){
	this->name = name;
	std::cout << this->name << ": has appeared" << std::endl;
	return ;
}
Zombie::~Zombie(){
	std::cout << name << "  has been destroyed" << std::endl;
}
 void Zombie::announce( void ){
			std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
		 }