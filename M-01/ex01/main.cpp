/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slord <slord@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 14:10:44 by slord             #+#    #+#             */
/*   Updated: 2023/03/15 18:04:56 by slord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

int	main()
{
	Zombie zombie_1("Pedro");
	zombie_1.announce();
	
	Zombie* horde_1 = zombieHorde(8, "Martinez");
	horde_1->announceZombies(8);
	delete [] horde_1;
}