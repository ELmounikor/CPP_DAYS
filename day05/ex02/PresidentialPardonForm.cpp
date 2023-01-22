/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 12:17:19 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/22 13:01:56 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

PresidentialPardonForm::PresidentialPardonForm(): Form("Presidential Pardon", 25, 45, "notarget")
{
	std::cout << SIMPLE_Bright_Cyan << *this << " has been created\n" << Color_CLEAR;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("Presidential Pardon", 25, 45, target)
{
	std::cout << SIMPLE_Bright_Cyan << *this << " has been created\n" << Color_CLEAR;
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm &src ): Form(src)
{
	std::cout << SIMPLE_Bright_Cyan << *this << " copy has been created\n" << Color_CLEAR;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << SIMPLE_Matte_Cyan << *this << " copy has been deleted\n" << Color_CLEAR;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

PresidentialPardonForm &PresidentialPardonForm::operator=( PresidentialPardonForm const &old)
{
	if (this != &old)
	{
		std::cout << SIMPLE_Matte_Red << "const cannot change" << Color_CLEAR << std::endl;
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/



/* ************************************************************************** */