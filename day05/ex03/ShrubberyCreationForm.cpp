/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 12:21:11 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/22 20:58:02 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "fstream"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

ShrubberyCreationForm::ShrubberyCreationForm(): Form("Shrubbery Creation", 145, 137, "notarget")
{
	std::cout << SIMPLE_Bright_Cyan << *this << " has been created\n" << Color_CLEAR;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form("Shrubbery Creation", 145, 137, target)
{
	std::cout << SIMPLE_Bright_Cyan << *this << " has been created\n" << Color_CLEAR;
}

ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm &src ): Form(src)
{
	std::cout << SIMPLE_Bright_Cyan << *this << " copy has been created\n" << Color_CLEAR;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << SIMPLE_Matte_Cyan << *this << " copy has been deleted\n" << Color_CLEAR;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

ShrubberyCreationForm &ShrubberyCreationForm::operator=( ShrubberyCreationForm const &old)
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

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (this->getSignatureState() && executor.getGrade() <= this->getGrade_exec())
	{
		std::ofstream file(this->getTarget() + "_shrubbery", std::ios::out | std::ios::app);
		if (file.is_open())
		{
			file << MY_TREE;
			file.close();
		}
		else
			std::cout << SIMPLE_Matte_Red << "The trees can't be planted in " << this->getTarget() << "\n" << Color_CLEAR;
	}
	else if (!this->getSignatureState())
		throw Form::FormNotSigned();
	else
		throw Form::GradeTooLowException();
}

/* ************************************************************************** */