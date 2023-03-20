/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slord <slord@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 17:24:22 by slord             #+#    #+#             */
/*   Updated: 2023/03/19 19:13:59 by slord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Harl.hpp"

Harl::Harl(std::string code){
	this->code = code;
	return ;
}

Harl::~Harl(){
	return ;
}

void Harl::complain(void){
	
	int j = -1;
	std::string complainType[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void(Harl::*fonctions[4])(void) = {&Harl::debug,& Harl::info, &Harl::warning, &Harl::error};

	for (int i = 0; i < 4; i++){
		if (complainType[i] == this->code)
			j = i;
	}
		switch(j){
			case  0 :
				std::cout << "LEVEL : " << complainType[0] << std::endl;
				(*this.*fonctions[0])();
			case  1 :
				std::cout << "LEVEL : " << complainType[1] << std::endl;
				(*this.*fonctions[1])();
			case  2 :
				std::cout << "LEVEL : " << complainType[2] << std::endl;
				(*this.*fonctions[2])();
			case  3 :
				std::cout << "LEVEL : " << complainType[3] << std::endl;
				(*this.*fonctions[3])();
				break ;
			default :
				std::cout << "Harl is rabbling some nonsense! " << std::endl;
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



