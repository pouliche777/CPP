/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slord <slord@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 17:45:12 by slord             #+#    #+#             */
/*   Updated: 2023/03/24 10:39:39 by slord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Weapon.hpp"
Weapon::Weapon(std::string type)
{
	this->type = type;
	std::cout<< "A weapon has been forged!" << std::endl;
}
Weapon::~Weapon(){
	std::cout<< "A weapon has been destroyed!" << std::endl;

}
void Weapon::setType(std::string const& type){

	this->type = type;
}

  std::string const&Weapon::getType()const{

	return(this->type);
}