/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 12:43:47 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/17 19:12:11 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	this->type = "Unknown";
	std::cout << "\033[0;91mAnimal has been created\n\033[0m";
}

Animal::Animal(Animal const &old)
{
	this->type = old.type;
	std::cout << "\033[0;91mAnimal has been created\n\033[0m";
}

Animal &Animal::operator=(const Animal &old)
{
	if (this != &old)
		this->type = old.type;
    return (*this);
}

Animal::~Animal()
{
	std::cout << "\033[0;31mAnimal has been destroyed\n\033[0m";
}

std::string Animal::getType() const
{
	return(type);
}

void Animal::makeSound(void) const
{
	std::cout << "\033[1;91m*Unknown sound*\n\033[0m";
}