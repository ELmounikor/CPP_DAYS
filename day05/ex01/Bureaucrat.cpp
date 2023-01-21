/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 11:44:44 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/21 21:13:12 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): name(""), grade(150)
{
	std::cout << SIMPLE_Bright_Blue << "Adding :: "<< *this << Color_CLEAR;
}

Bureaucrat::Bureaucrat(std::string name, int grade): name(name)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	else
		this->grade = grade;
	std::cout << SIMPLE_Bright_Blue << "Adding :: "<< *this << Color_CLEAR;
}

Bureaucrat::Bureaucrat(Bureaucrat const &old): name(old.name), grade(old.grade)
{
	std::cout << SIMPLE_Bright_Blue << "Adding copy ::"<< *this << Color_CLEAR;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &old)
{
	if (this != &old)
	{
		std::cout << SIMPLE_Bright_Red << "cannot change the name but the grade change is successful\n " << Color_CLEAR;
		this->grade = old.grade;
	}
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << SIMPLE_Matte_Blue << "Removing :: "<< *this << Color_CLEAR;
}

std::string Bureaucrat::getName() const
{
	return (this->name);
}

unsigned int Bureaucrat::getGrade() const
{
	return (this->grade);
}

void Bureaucrat::setGrade(unsigned int new_grade)
{
		if (new_grade < 1)
			throw GradeTooHighException();
		else if (new_grade > 150)
			throw GradeTooLowException();
		else
			this->grade = new_grade;
}

void Bureaucrat::increment()
{
		if (grade == 1)
			throw GradeTooHighException();
		else
			grade--;
}

void Bureaucrat::decrement()
{
	if (grade == 150)
		throw GradeTooLowException();
	else
		grade++;
}

void Bureaucrat::signForm(Form &form, bool status)
{
	if (status)
		std::cout << SIMPLE_Bright_Magenta << *this << "  signed " << form ;
	else if (form.getSignatureState())
		std::cout << SIMPLE_Matte_Magenta << *this << " couldn’t sign " << form << " because form is already signed";
	else if (this->grade > form.getGrade_sign())
		std::cout << SIMPLE_Matte_Magenta << *this << " couldn’t sign " << form << " because grade too low for that";
}
		
std::ostream &operator<<( std::ostream &output, const Bureaucrat &X )
{
	output << X.getName() << ", bureaucrat grade " << X.getGrade();
	return (output);
}
