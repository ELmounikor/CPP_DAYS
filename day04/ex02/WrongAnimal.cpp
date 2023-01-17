/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 17:53:01 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/17 17:56:01 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->type = "Unknown";
	std::cout << "\033[0;94mWrongAnimal has been created\n\033[0m";
}

WrongAnimal::WrongAnimal(WrongAnimal const &old)
{
	this->type = old.type;
	std::cout << "\033[0;94mWrongAnimal has been created\n\033[0m";
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &old)
{
	if (this != &old)
		this->type = old.type;
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "\033[0;34mWrongAnimal has been destroyed\n\033[0m";
}

std::string WrongAnimal::getType() const
{
	return(type);
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "\033[1;94mUnknown sound\n\033[0m";
}