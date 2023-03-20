/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slord <slord@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 17:46:47 by slord             #+#    #+#             */
/*   Updated: 2023/03/19 17:47:03 by slord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

Zombie::Zombie(void)
{
	std::cout << "A member of the horde has appeared" << std::endl;
	return ;
}
Zombie::Zombie(std::string name)
{
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

void	Zombie::setName(std::string name){
	this->name = name;
}

std::string	Zombie::getName()
{
	return(this->name);
}

void Zombie::announceZombies(int N){
	for (int i =0;i<N; i++)
			std::cout << this->getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
		 }