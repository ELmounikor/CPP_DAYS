/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 09:47:43 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/10 15:39:04 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called\n";
	this->integer = 0;
}

Fixed::Fixed(const Fixed &old)
{
	std::cout << "Copy constructor called\n";
	this->integer = old.integer;
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called\n";
	this->integer = value * 256;
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called\n";
	this->integer =  (int) roundf(value * 256);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

void Fixed::operator=(const Fixed& C)
{
	std::cout << "Copy assignment operator called\n";
	this->integer = C.integer;
}

void Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called\n";
	this->integer = raw;
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called\n";
	return (this->integer);
}

float Fixed::toFloat( void ) const
{
	return((float) this->integer / 256);
}

int Fixed::toInt( void ) const
{
	return(this->integer / 256);	
}

std::ostream &operator<<( std::ostream &output, const Fixed &X )
{
	output << X.toFloat();
	return (output);
}