/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 11:44:44 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/22 19:10:17 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): name("no_name"), grade(150)
{
	std::cout << SIMPLE_Bright_Blue << "Adding :: "<< *this << Color_CLEAR << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade): name(name)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	else
		this->grade = grade;
	std::cout << SIMPLE_Bright_Blue << "Adding :: "<< *this << Color_CLEAR << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &old): name(old.name), grade(old.grade)
{
	std::cout << SIMPLE_Bright_Blue << "Adding copy ::"<< *this << Color_CLEAR << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &old)
{
	if (this != &old)
	{
		std::cout << SIMPLE_Bright_Red << "cannot change the name but the grade change is successful" << Color_CLEAR << std::endl;
		this->grade = old.grade;
	}
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << SIMPLE_Matte_Blue << "Removing :: "<< *this << Color_CLEAR << std::endl;
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

void Bureaucrat::signForm(Form const &form, bool status)
{
	if (status)
		std::cout << SIMPLE_Bright_Yellow << *this << " signed " << form  << Color_CLEAR << std::endl;
	else
	{
		std::cout << SIMPLE_Matte_Yellow << *this << " couldn’t sign " << form << " because of the following reasons:\n";
		if (form.getSignatureState())
			std::cout << SIMPLE_Matte_Yellow << " - It's is already signed" << Color_CLEAR << std::endl;
		if (this->grade > form.getGrade_sign())
			std::cout << SIMPLE_Matte_Yellow << " - The grade is too low for that" << Color_CLEAR << std::endl;
	}
}

void Bureaucrat::executeForm(Form const &form)
{
	std::cout << SIMPLE_Bright_Yellow << *this << " executed " << form  << Color_CLEAR << std::endl;
}

std::ostream &operator<<( std::ostream &output, const Bureaucrat &X )
{
	output << X.getName() << ", bureaucrat grade " << X.getGrade();
	return (output);
}
