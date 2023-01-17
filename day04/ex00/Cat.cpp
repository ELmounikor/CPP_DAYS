/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:25:40 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/17 13:30:43 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
	std::cout << "Cat has been created\n";
}

Cat::Cat(Cat const &old)
{
	this->type = old.type;
	std::cout << "Cat has been created\n";
}

Cat &Cat::operator=(const Cat &old)
{
	if (this != &old)
		this->type = old.type;
    return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat has been destroyed\n";
}

void Cat::makeSound()
{
	std::cout << "myaaaw!\n";
}