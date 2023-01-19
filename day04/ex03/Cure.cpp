/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 11:53:00 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/19 15:51:56 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	// std::cout << "\033[0;94mCure has been created\n\033[0m";
}


Cure::Cure(const Cure &old) : AMateria(old)
{
	// std::cout << "\033[0;94mCure has been created\n\033[0m";
}

Cure &Cure::operator=(const Cure &old)
{
	(void) old;
	return(*this);
}

Cure::~Cure()
{
	// std::cout << "\033[0;34mCure has been destructed\n\033[0m";
}

AMateria* Cure::clone() const
{
    AMateria *materia = new Cure(*this);
	return (materia);
}