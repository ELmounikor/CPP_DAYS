/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 11:53:00 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/18 15:55:36 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
    this->type = "Cure";
	std::cout << "\033[0;94mCure has been created\n\033[0m";
}

Cure::Cure(std::string const & type)
{
	std::cout << "\033[0;94mCure has been created\n\033[0m";
}

Cure::Cure(const Cure &old)
{
	std::cout << "\033[0;94mCure has been created\n\033[0m";
}

Cure &Cure::operator=(const Cure &old)
{
	return(*this);
}

Cure::~Cure()
{
	std::cout << "\033[0;34m" << type << "\033[0;31m has been destructed\n\033[0m";
}

AMateria* Cure::clone() const
{
    AMateria *materia = new Cure(*this);
	return (materia);
}