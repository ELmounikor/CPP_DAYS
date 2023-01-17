/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 12:43:47 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/17 13:20:56 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal has been created\n";
}

Animal::Animal(Animal const &old)
{
	this->type = old.type;
	std::cout << "Animal has been created\n";
}

Animal &Animal::operator=(const Animal &old)
{
	if (this != &old)
		this->type = old.type;
    return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal has been destroyed\n";
}
