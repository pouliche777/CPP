/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slord <slord@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 17:45:55 by slord             #+#    #+#             */
/*   Updated: 2023/03/19 17:45:58 by slord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon): name(name), weapon(weapon)
{
	this->name = name;
	std::cout<< "A new human A is born!! " << " His/her name is  "<< name << std::endl;
}
HumanA::~HumanA(){
	std::cout<< "A humanA has been killed" << std::endl;

}

void HumanA::attack(){

	std::cout<< this->name << " attacks with their " << this->weapon.getType() << std::endl;
}

