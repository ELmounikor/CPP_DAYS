/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:27:37 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/17 16:43:32 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
	std::cout << "\033[0;93mDog has been created\n\033[0m";
}

Dog::Dog(Dog const &old)
{
	this->type = old.type;
	std::cout << "\033[0;93mDog has been created\n\033[0m";
}

Dog &Dog::operator=(const Dog &old)
{
	if (this != &old)
		this->type = old.type;
    return (*this);
}

Dog::~Dog()
{
	std::cout << "\033[0;33mDog has been destroyed\n\033[0m";
}

void Dog::makeSound() const
{
	std::cout << "\033[1;93mWoaf!\n\033[0m";
}