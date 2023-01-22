/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 12:17:54 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/22 21:15:18 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

RobotomyRequestForm::RobotomyRequestForm(): Form("robotomy request", 72, 45, "notarget")
{
	std::cout << SIMPLE_Bright_Cyan << *this << " has been created\n" << Color_CLEAR;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form("robotomy request", 72, 45, target)
{
	std::cout << SIMPLE_Bright_Cyan << *this << " has been created\n" << Color_CLEAR;
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm &src ): Form(src)
{
	std::cout << SIMPLE_Bright_Cyan << *this << " copy has been created\n" << Color_CLEAR;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << SIMPLE_Matte_Cyan << *this << " copy has been deleted\n" << Color_CLEAR;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

RobotomyRequestForm &RobotomyRequestForm::operator=( RobotomyRequestForm const &old)
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

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (this->getSignatureState() && executor.getGrade() <= this->getGrade_exec())
	{
		srand(time(NULL));
		int random = rand() % 2;
		if (random)
			std::cout << BOLD_Matte_White << '\a' << "* drilling noises * " << '\a' << this->getTarget() << " has been robotomized successfully\n" << Color_CLEAR;
		else
			std::cout << SIMPLE_Matte_Red << '\a' << this->getTarget() << "'s robotomy failed.\n" << Color_CLEAR;
	}
	else if (!this->getSignatureState())
		throw Form::FormNotSigned();
	else
		throw Form::GradeTooLowException();
}

/* ************************************************************************** */