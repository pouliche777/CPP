/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slord <slord@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 17:24:33 by slord             #+#    #+#             */
/*   Updated: 2023/03/19 18:38:56 by slord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HARL_HPP
#define HARL_HPP

#include <string>
#include <iostream>

class Harl
{
	public:
		Harl(std::string code);
		~Harl();
		void complain(void);
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
		std::string code;
};

#endif