/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 11:38:28 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/18 15:51:37 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{}

AMateria::AMateria(std::string const & type)
{
	this->type = type;
	std::cout << "\033[0;91mMateria \033[0m";
}

AMateria::AMateria(const AMateria &old)
{
	this->type = old.type;
	std::cout << "\033[0;91mCopy materia \033[0m";
}

AMateria &AMateria::operator=(const AMateria &old)
{
}

AMateria::~AMateria()
{
	std::cout << "\033[0;31mMateria of type \033[0m";
}

std::string const & AMateria::getType() const
{
	return (this->type);
}

void AMateria::use(ICharacter& target)
{
	if (this->type == "ice")
		std::cout << "\033[1;31m* shoots an ice bolt at " << target.getName() << " *\n\033[0m";
	else if (this->type == "cure")
		std::cout << "\033[1;31m* heals " << target.getName() << "’s wounds *\n\033[0m";
	else
		std::cout << "\033[1;31m* uses " << this->type << " on " << target.getName() << " *\n\033[0m";
}