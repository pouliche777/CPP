/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slord <slord@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 14:10:44 by slord             #+#    #+#             */
/*   Updated: 2023/03/15 15:19:36 by slord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

int	main()
{
	Zombie zombie_1("Pedro");
	zombie_1.announce();
	randomChump("Pascal");
	Zombie* zombie_2 = newZombie("Martinez");
	zombie_2->announce();
	delete (zombie_2);
}