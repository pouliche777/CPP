/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slord <slord@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 20:36:35 by slord             #+#    #+#             */
/*   Updated: 2023/03/20 14:43:37 by slord            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
	  std::cout << "Default constructor called" << std::endl;
    	this->value = 0;
}

Fixed::Fixed(const int number){
	  std::cout << "Int constructor called" << std::endl;
		setRawBits(number << this->frac);
}

Fixed::Fixed(const float number){
	  std::cout << "Float constructor called" << std::endl;
    	this->value = roundf(number * 256);
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other){
	std::cout << "Copy constructor called" << std::endl;
	this->value = other.value;
}

Fixed& Fixed::operator=(const Fixed &other){
	std::cout << "Copy assignment operator called" << std::endl;
	if(this != &other) {
		this->value = other.getRawBits();
	}
	return *this;
}

int Fixed::getRawBits( void ) const {
    return this->value;
}

void    Fixed::setRawBits( int const raw ) {
    this->value = raw;
}

int Fixed::toInt( void ) const{
	return (this->getRawBits() >> this->frac);
}

float	Fixed::toFloat( void ) const {
	return ((float) this->value / 256);
	}

std::ostream &operator<<(std::ostream &out, const Fixed &other){
    out << other.toFloat();
    return (out);
}