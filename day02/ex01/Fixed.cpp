/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 09:47:43 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/14 16:35:59 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	two_power_of_(int accuracy)
{
	//calulating 2 power of 8
	int n = 1;
	for (int i = 0; i < accuracy; i++)
		n *= 2;
	return (n);
}

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
	this->integer = value * two_power_of_(this->accuracy);
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called\n";
	//calulating 2 power of 8
	this->integer =  (int) roundf(value * two_power_of_(this->accuracy));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

Fixed &Fixed::operator=(const Fixed& C)
{
	std::cout << "Copy assignment operator called\n";
	this->integer = C.integer;
	return(*this);
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
	//calulating 2 power of 8
	return((float) this->integer / two_power_of_(this->accuracy));
}

int Fixed::toInt( void ) const
{
	//calulating 2 power of 8
	return(this->integer / two_power_of_(this->accuracy));	
}

std::ostream &operator<<( std::ostream &output, const Fixed &X )
{
	output << X.toFloat();
	return (output);
}