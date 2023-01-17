/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:27:37 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/17 15:22:27 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
	std::cout << "Dog has been created\n";
}

Dog::Dog(Dog const &old)
{
	this->type = old.type;
	std::cout << "Dog has been created\n";
}

Dog &Dog::operator=(const Dog &old)
{
	if (this != &old)
		this->type = old.type;
    return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog has been destroyed\n";
}

void Dog::makeSound() const
{
	std::cout << "woaf!\n";
}