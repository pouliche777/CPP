/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slord <slord@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 17:45:23 by slord             #+#    #+#             */
/*   Updated: 2023/03/19 17:45:24 by slord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main (void)
{
	std::string type;
	Weapon weapon("gourdin");
	Weapon weapon_1("Massue");
	HumanA human("Martinez", weapon);
	HumanB human_1("Pedro");

	human.attack();
	human_1.attack();

	type = weapon.getType();
	std::cout<<type<< std::endl;

	human_1.setWeapon(weapon);
	human_1.attack();

	
	
}