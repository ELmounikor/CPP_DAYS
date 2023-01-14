/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 09:47:43 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/14 13:37:54 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
	this->integer = 0;
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed &old)
{
	this->integer = old.integer;
	std::cout << "Copy constructor called\n";
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

Fixed &Fixed::operator=(const Fixed& C)
{
	std::cout << "Copy assignment operator called\n";
	if (this != &C)
		this->integer = C.getRawBits();
	return (*this);
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
