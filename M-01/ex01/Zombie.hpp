/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slord <slord@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 17:46:53 by slord             #+#    #+#             */
/*   Updated: 2023/03/24 10:21:31 by slord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie {

	public:
		Zombie(void);
		Zombie(std::string name);
		~Zombie();
		void setName(std::string name);
		std::string	getName();
		void announceZombies(int N);
		void announce();
	private :
		std::string name;
};

Zombie* zombieHorde( int N, std::string name );
#endif