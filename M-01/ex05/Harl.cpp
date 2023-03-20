/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slord <slord@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 17:24:22 by slord             #+#    #+#             */
/*   Updated: 2023/03/19 17:54:03 by slord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Harl.hpp"

Harl::Harl(){
	return ;
}

Harl::~Harl(){
	return ;
}

void Harl::complain( std::string level ){

std::string complainType[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

		void(Harl::*fonctions[4])(void) = {&Harl::debug,& Harl::info, &Harl::warning, &Harl::error};

		for(int i= 0; i < 4; i++)
		{
			if (complainType[i] == level)
			{
				std::cout << "LEVEL : " << level << std::endl;
				(*this.*fonctions[i])();
			}

		}
}

void Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do !" << std::endl;

}
void Harl::info( void ){
	std::cout << "I cannot believe adding extra bacon costs more money. You didn' putenough bacon in my burger ! If you did, I wouldn't be asking for more !" << std::endl;

}

void Harl::warning( void ){
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;

}
void Harl::error( void ){
	std::cout << "This is unacceptable ! I want to speak to the manager now!" << std::endl;
}



