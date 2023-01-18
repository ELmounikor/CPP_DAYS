/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 11:53:29 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/18 21:17:13 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	std::cout << "\033[0;96mIce has been created\n\033[0m";
}

Ice::Ice(const Ice &old) : AMateria(old)
{
	std::cout << "\033[0;96mIce has been created\n\033[0m";
}

Ice &Ice::operator=(const Ice &old)
{
	(void) old;
	return(*this);
}

Ice::~Ice()
{
	std::cout << "\033mIce has been destructed\n\033[0m";
}

AMateria* Ice::clone() const
{
    AMateria *materia = new Ice(*this);
	return (materia);
}