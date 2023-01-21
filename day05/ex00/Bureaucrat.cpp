/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 11:44:44 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/20 16:05:49 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): name(""), grade(150)
{
    std::cout << "Adding Bureaucrat:: "<< *this;
}

Bureaucrat::Bureaucrat(std::string name, int grade): name(name)
{
    if (grade < 1)
        throw std::runtime_error("Bureaucrat::GradeTooHighException");
    else if (grade > 150)
        throw std::runtime_error("Bureaucrat::GradeTooLowException");
    else
        this->grade = grade;
    std::cout << "Adding Bureaucrat:: "<< *this;
}

Bureaucrat::Bureaucrat(Bureaucrat const &old): name(old.name), grade(old.grade)
{
    std::cout << "Removing Bureaucrat:: "<< *this;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &old)
{
	if (this != &old)
	{
		std::cout << "cannot change the name but the grade change is successful\n ";
		this->grade = old.grade;
	}
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
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
            throw std::runtime_error("Bureaucrat::GradeTooHighException");
        else if (new_grade > 150)
            throw std::runtime_error("Bureaucrat::GradeTooLowException");
        else
            this->grade = new_grade;
}

void Bureaucrat::increment()
{
        if (grade == 1)
            throw std::runtime_error("Bureaucrat::GradeTooHighException");
        else
            grade--;
}

void Bureaucrat::decrement()
{
    if (grade == 150)
        throw std::runtime_error("Bureaucrat::GradeTooLowException");
    else
        grade++;
}

std::ostream &operator<<( std::ostream &output, const Bureaucrat &X )
{
	output << X.getName() << ", bureaucrat grade " << X.getGrade() <<".\n";
	return (output);
}
