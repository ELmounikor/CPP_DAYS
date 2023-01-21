/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:27:37 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/21 16:58:21 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
	this->brain = new Brain();
	std::cout << "\033[0;93mDog df has been created\n\033[0m";
}

Dog::Dog(Dog const &old)
{
	this->type = old.type;
	this->brain = new Brain();
	for (unsigned long i = 0; i < 100; i++)
		this->brain->setIdea(i, old.brain->getIdea(i));
	std::cout << "\033[0;93mDog cp has been created\n\033[0m";
}

Dog &Dog::operator=(const Dog &old)
{
	std::cout << "\033[0;93mAssignement op.\n\033[0m";
	if (this != &old)
	{
		this->type = old.type;
		for (unsigned long i = 0; i < 100; i++)
			this->brain->setIdea(i, old.brain->getIdea(i));
	}
    return (*this);
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "\033[0;33mDog has been destroyed\n\033[0m";
}

void Dog::makeSound() const
{
	std::cout << "\033[1;93mWoaf!\n\033[0m";
}

Brain *Dog::getBrain(void)
{
	return(this->brain);
}