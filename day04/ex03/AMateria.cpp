/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 11:38:28 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/19 15:52:26 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{}

AMateria::AMateria(std::string const & type)
{
	this->type = type;
	// std::cout << "Materia created\n";
}

AMateria::AMateria(const AMateria &old)
{
	this->type = old.type;
	// std::cout << "Materia created\n";
}

AMateria &AMateria::operator=(const AMateria &old)
{
	(void) old;
	return(*this);
}

AMateria::~AMateria()
{
	// std::cout << "Materia destruted\n";
}

std::string const & AMateria::getType() const
{
	return (this->type);
}

void AMateria::use(ICharacter& target)
{
	if (this->type == "ice")
		std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
	else if (this->type == "cure")
		std::cout << "* heals " << target.getName() << "’s wounds *\n";
	else
		std::cout << "* uses " << this->type << " on " << target.getName() << " *\n";
}