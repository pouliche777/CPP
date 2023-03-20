/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slord <slord@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 17:24:09 by slord             #+#    #+#             */
/*   Updated: 2023/03/19 18:52:31 by slord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Harl.hpp"

int main (int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "the program takes 1 argument! " << std::endl;
		exit(EXIT_FAILURE);
	}

	Harl harl(argv[1]);
	harl.complain();

	return 0;
	
	
	
	

}