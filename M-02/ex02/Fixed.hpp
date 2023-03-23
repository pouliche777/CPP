/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slord <slord@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 20:22:54 by slord             #+#    #+#             */
/*   Updated: 2023/03/20 18:33:54 by slord            ###   ########.fr       */
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
		Fixed& operator=(const Fixed& other);
		Fixed operator*(const Fixed other) const;
		Fixed operator/(const Fixed other) const;
		Fixed operator-(const Fixed other) const;
		Fixed operator+(const Fixed other) const;
		int operator==(const Fixed other)const;
		int operator!=(const Fixed other)const;
		int operator>(const Fixed other)const;
		int operator<(const Fixed other)const;
		int operator<=(const Fixed other)const;
		int operator>=(const Fixed other)const;
		Fixed & operator++(void);
		Fixed & operator--(void);
		Fixed operator++(int);
		Fixed operator--(int);
		static const Fixed & max(const Fixed & a, const Fixed & b);
		static const Fixed & min(const Fixed & a, const Fixed & b);
		static Fixed & max(Fixed & a, Fixed & b);
		static Fixed & min(Fixed  & a, Fixed & b);
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