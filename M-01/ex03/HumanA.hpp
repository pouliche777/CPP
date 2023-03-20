/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slord <slord@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 17:45:47 by slord             #+#    #+#             */
/*   Updated: 2023/03/19 17:45:50 by slord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <string>
#include "Weapon.hpp"
#include <iostream>

class HumanA{
	public:
		HumanA(std::string name, Weapon& weapon);
		~HumanA();
		void	attack();
	private:
		std::string name;
		Weapon& weapon;
};

#endif