/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slord <slord@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 20:36:35 by slord             #+#    #+#             */
/*   Updated: 2023/03/20 21:45:39 by slord            ###   ########.fr       */
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


// OPERATORS OVERLOAD
Fixed Fixed::operator*(const Fixed other)const{
	std::cout << "multiplication assignment operator called" << std::endl;
		//Fixed var = this->toFloat()* other.toFloat();
		Fixed var;
		var.setRawBits((this->getRawBits() * other.getRawBits()) >> this->frac);
	return var;
}

Fixed Fixed::operator/(const Fixed other)const{
	std::cout << "division assignment operator called" << std::endl;
	Fixed var;
		var.setRawBits((this->getRawBits() << this->frac) / other.getRawBits());
	return var;
}

Fixed Fixed::operator+(const Fixed other)const{
	Fixed var;
	std::cout << "plus assignment operator called" << std::endl;
		var.setRawBits(this->getRawBits() + other.getRawBits());
	return var;
}

Fixed Fixed::operator-(const Fixed other)const{
	std::cout << "minus assignment operator called" << std::endl;
		Fixed var = this->toFloat() - other.toFloat();
	return var;
}

int Fixed::operator==(const Fixed other)const{
	std::cout << "equality comparaison operator called" << std::endl;
		if (this->getRawBits() == other.getRawBits())
			return 1;
		else
			return 0;
}
int Fixed::operator!=(const Fixed other)const{
	std::cout << "equality comparaison operator called" << std::endl;
		// if (this->getRawBits() != other.getRawBits())
		// 	return 1;
		// else
		// 	return 0;
	return !(*this == other);
}

int Fixed::operator<(const Fixed other)const{
	std::cout << "< comparaison operator called" << std::endl;
		if (this->getRawBits() < other.getRawBits())
			return 1;
		else
			return 0;
}

int Fixed::operator>(const Fixed other)const{
	std::cout << "< comparaison operator called" << std::endl;
		if (this->getRawBits() > other.getRawBits())
			return 1;
		else
			return 0;
}

int Fixed::operator>=(const Fixed other)const{
	std::cout << ">= comparaison operator called" << std::endl;
		// if (this->getRawBits() >= other.getRawBits())
		// 	return 1;
		// else
		// 	return 0;
	return !(*this < other);
}

int Fixed::operator<=(const Fixed other)const{
	std::cout << "<= comparaison operator called" << std::endl;
		if (this->getRawBits() <= other.getRawBits())
			return 1;
		else
			return 0;
}
Fixed & Fixed::operator++(void) 
{
	this->value++;
	return (*this);
}

Fixed & Fixed::operator--(void) 
{
	this->value--;
	return (*this);
}
Fixed Fixed::operator++(int)
{
	Fixed	temp = *this;

	(this->value) +=1 ;
	return (temp);
}

Fixed Fixed::operator--(int)
{
	Fixed	temp = *this;

	(this->value) -=1 ;
	return (temp);
}



const Fixed & Fixed::min(const Fixed & a, const Fixed & b)
{
	if (a < b)
		return (a);
	return (b);
}
	
const Fixed & Fixed::max(const Fixed & a, const Fixed & b)
{
	if (a > b)
		return (a);
	return (b);
}

Fixed & Fixed::min(Fixed & a, Fixed & b)
{
	if (a < b)
		return (a);
	return (b);
}
	
Fixed & Fixed::max(Fixed & a, Fixed & b)
{
	if (a > b)
		return (a);
	return (b);
}