/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slord <slord@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 17:45:33 by slord             #+#    #+#             */
/*   Updated: 2023/03/19 17:45:34 by slord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include "Weapon.hpp"
#include <iostream>

class HumanB{
	public:
		HumanB(std::string name);
		void	setWeapon(Weapon &weapon);
		~HumanB();
		void	attack();
	private:
		std::string name;
		Weapon* weapon;
};

#endif