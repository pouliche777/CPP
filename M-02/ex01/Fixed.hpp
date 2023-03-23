/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slord <slord@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 20:22:54 by slord             #+#    #+#             */
/*   Updated: 2023/03/20 14:17:37 by slord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed{

	public:
		Fixed();
		Fixed(const int number);
		Fixed(const float number);
		~Fixed();
		Fixed(const Fixed& other);
		Fixed& operator=(const Fixed& ohter);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;
	private:
		int value;
		static const int frac = 8;
	
};

std::ostream &operator<<(std::ostream &out, const Fixed &other);

#endif