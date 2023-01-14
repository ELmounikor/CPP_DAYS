/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 09:47:43 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/14 17:49:50 by mel-kora         ###   ########.fr       */
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

/***************** Constructors and destructor *******************/

Fixed::Fixed(void)
{
	// std::cout << "Default constructor called\n";
	this->integer = 0;
}

Fixed::Fixed(const Fixed &old)
{
	// std::cout << "Copy constructor called\n";
	this->integer = old.integer;
}

Fixed::Fixed(const int value)
{
	// std::cout << "Int constructor called\n";
	this->integer = value * two_power_of_(this->accuracy);
}

Fixed::Fixed(const float value)
{
	// std::cout << "Float constructor called\n";
	this->integer =  (int) roundf(value * two_power_of_(this->accuracy));
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called\n";
}

/***************** Operator overloaders *******************/\

Fixed &Fixed::operator=(const Fixed& C)
{
	if (this != &C)
		this->integer = C.integer;
	return(*this);
}

Fixed Fixed::operator+(const Fixed& X) const
{
	return (Fixed((float)(this->integer + X.integer) / two_power_of_(this->accuracy)));
}

Fixed Fixed::operator-(const Fixed& X) const
{
	return (Fixed((float)(this->integer - X.integer) / two_power_of_(this->accuracy)));
}

Fixed Fixed::operator*(const Fixed& X) const
{
	int n = two_power_of_(this->accuracy);
	return (Fixed((float) this->integer * X.integer / n / n));
}

Fixed Fixed::operator/(const Fixed& X) const
{
	return (Fixed((float) this->integer / X.integer));
}

bool Fixed::operator==(const Fixed& X) const
{
	return(this->integer == X.integer);
}

bool Fixed::operator!=(const Fixed& X) const
{
	return(this->integer != X.integer);
}

bool Fixed::operator>=(const Fixed& X) const
{
	return(this->integer >= X.integer);
}

bool Fixed::operator>(const Fixed& X) const
{
	return(this->integer > X.integer);
}

bool Fixed::operator<=(const Fixed& X) const
{
	return(this->integer <= X.integer);
}

Fixed Fixed::operator++()
{
	this->integer++;
	return(*this);
}

Fixed Fixed::operator++(int)
{
	Fixed copy = *this;
	this->integer++;
	return(copy);
}

Fixed Fixed::operator--()
{
	this->integer--;
	return(*this);
}

Fixed Fixed::operator--(int)
{
	Fixed copy = *this;
	this->integer--;
	return(copy);
}

bool Fixed::operator<(const Fixed& X) const
{
	return(this->integer < X.integer);
}

std::ostream &operator<<( std::ostream &output, const Fixed &X )
{
	output << X.toFloat();
	return (output);
}

/***************** Other functions *******************/

void Fixed::setRawBits( int const raw )
{
	this->integer = raw;
}

int Fixed::getRawBits( void ) const
{
	return (this->integer);
}

float Fixed::toFloat( void ) const
{
	return((float) this->integer / two_power_of_(this->accuracy));
}

int Fixed::toInt( void ) const
{
	return(this->integer / two_power_of_(this->accuracy));	
}

Fixed &Fixed::min(Fixed &X, Fixed &Y) 
{
	if (Y < X)
		return (Y);
	return (X);
}

Fixed const &Fixed::min(const Fixed &X, const Fixed &Y)
{
	if (Y < X)
		return (Y);
	return (X);
}

Fixed &Fixed::max(Fixed &X, Fixed &Y) 
{
	if (Y > X)
		return (Y);
	return (X);
}

Fixed const &Fixed::max(const Fixed &X, const Fixed &Y)
{
	if (Y > X)
		return (Y);
	return (X);
}
