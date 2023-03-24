/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slord <slord@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 17:45:05 by slord             #+#    #+#             */
/*   Updated: 2023/03/24 10:38:22 by slord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>
#include <iostream>



class Weapon{
	public:
		Weapon(std::string type);
		~Weapon();
		  std::string const& getType() const;
		void	setType(std::string const& type);
	private:
		std::string type;
};

#endif