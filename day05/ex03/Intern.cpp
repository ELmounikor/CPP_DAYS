/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 20:43:00 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/23 08:33:41 by mel-kora         ###   ########.fr       */
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
	(void) src;
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
	(void) rhs;
	std::cout << BOLD_Matte_Red << "Nothing to change" << Color_CLEAR << std::endl;
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/


Form *Intern::makePresidentialPardonForm(std:: string target)
{
	return (new PresidentialPardonForm(target));
}

Form *Intern::makeRobotomyRequestForm(std:: string target)
{
	return (new RobotomyRequestForm(target));
}

Form *Intern::makeShrubberyCreationForm(std:: string target)
{
	return (new ShrubberyCreationForm(target));
}


Form *Intern::makeForm(std::string name, std:: string target)
{
	std::string value[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
	Form* (Intern::*fct[3])(std::string target) = { &Intern::makePresidentialPardonForm,
		&Intern::makeRobotomyRequestForm, &Intern::makeShrubberyCreationForm};
	
	int i = 0;
	while (i < 3 && name != value[i])
		i++;
	if (i < 3)
		return ((this->*fct[i])(target));
	std::cout << BOLD_Bright_Red << "Form " << name << " cannot be created\n" << Color_CLEAR;
	return (NULL);
}

/* ************************************************************************** */