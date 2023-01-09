/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 09:47:43 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/09 14:38:18 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	this->integer = 0;
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(Fixed &old)
{
	this->integer = old.integer;
	std::cout << "Copy constructor called\n";
}

Fixed::Fixed(int value)
{
	this->integer = value;
	std::cout << "Copy constructor called\n";
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

void Fixed::operator=(const Fixed& C)
{
	this->integer = C.integer;
	std::cout << "Copy assignment operator called\n";
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
	
	return();	
}

int Fixed::toInt( void ) const
{
	
	return();	
}

