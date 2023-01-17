/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 17:56:40 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/17 18:25:56 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    this->type = "WrongCat";
	std::cout << "\033[0;95mWrongCat has been created\n\033[0m";
}

WrongCat::WrongCat(WrongCat const &old)
{
	this->type = old.type;
	std::cout << "\033[0;95mWrongCat has been created\n\033[0m";
}

WrongCat::~WrongCat()
{
	std::cout << "\033[0;35mWrongCat has been destroyed\n\033[0m";
}

WrongCat &WrongCat::operator=(const WrongCat &old)
{
	if (this != &old)
		this->type = old.type;
    return (*this);
}


void WrongCat::makeSound() const
{
	std::cout << "\033[1;95mWaa3!\n\033[0m";
}
