/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slord <slord@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 17:45:42 by slord             #+#    #+#             */
/*   Updated: 2023/03/19 17:45:43 by slord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
	std::cout<< "A new human A is born!! " << " His/her name is  "<< name << std::endl;
}
void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}
HumanB::~HumanB(){
	std::cout<< "A humanB has been killed" << std::endl;

}
void HumanB::attack(){

	if (this->weapon->getType().size() != 0)
		std::cout<< this->name << " attacks with their " << this->weapon->getType() << std::endl;
	else
		std::cout<< this->name << " attacks with nothing!" << std::endl;
	
}