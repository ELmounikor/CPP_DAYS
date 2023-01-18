/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 11:53:29 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/18 17:03:54 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	std::cout << "\033[0;96mIce \033[0;91mhas been created\n\033[0m";
}

Ice::Ice(const Ice &old) : AMateria(old)
{
	std::cout << "\033[0;96m"<< this->type << "\033[0;91m has been created\n\033[0m";
}

Ice &Ice::operator=(const Ice &old)
{
	(void) old;
	return(*this);
}

Ice::~Ice()
{
	std::cout << "\033[0;36m" << type << "\033[0;31m has been destructed\n\033[0m";
}

AMateria* Ice::clone() const
{
    AMateria *materia = new Ice(*this);
	return (materia);
}