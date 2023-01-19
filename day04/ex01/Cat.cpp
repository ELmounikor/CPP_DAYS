/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:25:40 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/19 14:54:21 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
	this->brain = new Brain();
	std::cout << "\033[0;92mCat has been created\n\033[0m";
}

Cat::Cat(Cat const &old)
{
	this->type = old.type;
	this->brain = new Brain();
	for (unsigned long i = 0; i < 100; i++)
		this->brain->setIdea(i, old.brain->getIdea(i));
	std::cout << "\033[0;92mCat has been created\n\033[0m";
}

Cat &Cat::operator=(const Cat &old)
{
	if (this != &old)
	{
		this->type = old.type;
		for (unsigned long i = 0; i < 100; i++)
			this->brain->setIdea(i, old.brain->getIdea(i));
	}
    return (*this);
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "\033[0;32mCat has been destroyed\n\033[0m";
}

void Cat::makeSound() const
{
	std::cout << "\033[1;92mMyaw!\n\033[0m";
}

Brain *Cat::getBrain(void)
{
	return(this->brain);
}