/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 20:43:00 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/22 21:32:19 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Intern::Intern()
{
    std::cout << SIMPLE_Bright_Green << "Adding Intern" << Color_CLEAR << std::endl;
}

Intern::Intern( const Intern & src )
{
    std::cout << SIMPLE_Bright_Green << "Adding Intern" << Color_CLEAR << std::endl;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Intern::~Intern()
{
    std::cout << SIMPLE_Matte_Green << "Removing Intern"<< Color_CLEAR << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Intern &Intern::operator=( Intern const & rhs )
{
	std::cout << BOLD_Matte_Red << "Nothing to change" << Color_CLEAR << std::endl;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

Form *Intern::makeForm(std::string name, std:: string target)
{
	std::string value[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
	void (Form::*fct[3])(std::string target) = {&PresidentialPardonForm::PresidentialPardonForm, &RobotomyRequestForm::RobotomyRequestForm, &ShrubberyCreationForm::ShrubberyCreationForm};
	int i = 0;
	while (i < 3 && name != value[i])
		i++;
	if (i < 3)
		return (new fct[i](target));
	return (NULL);
}

/* ************************************************************************** */