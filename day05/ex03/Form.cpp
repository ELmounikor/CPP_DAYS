/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 16:10:07 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/22 20:50:51 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form():  name("no_name"), grade_sign(1), grade_exec(150), target(""), signature(0)
{
    std::cout << BOLD_Bright_Cyan << "Adding :: "<< *this << Color_CLEAR << std::endl;
}

Form::Form(std::string name, int grade1,  int grade2, std::string target): name(name), grade_sign(grade1), grade_exec(grade2)
{
    if (grade1 < 1 || grade2 < 1)
        throw GradeTooHighException();
    else if (grade1 > 150 || grade2 > 150)
        throw GradeTooLowException();
	this->signature = 0;
	this->target = target;
    std::cout << BOLD_Bright_Cyan << "Adding :: "<< *this << Color_CLEAR << std::endl;
}

Form::Form(Form const &old): name(old.name), grade_sign(old.grade_sign), grade_exec(old.grade_exec), target(old.target), signature(old.signature)
{
    std::cout << BOLD_Bright_Cyan "Adding copy :: "<< *this << Color_CLEAR << std::endl;
}

Form &Form::operator=(const Form &old)
{
	if (this != &old)
	{
		std::cout << BOLD_Matte_Red << "const cannot change" << Color_CLEAR << std::endl;
	}
	return (*this);
}

Form::~Form()
{
    std::cout << BOLD_Matte_Cyan << "Removing :: "<< *this << Color_CLEAR << std::endl;
}

std::string Form::getName() const
{
	return (this->name);
}

std::string Form::getTarget() const
{
	return (this->target);
}

bool Form::getSignatureState() const
{
	return (this->signature);
}

unsigned int Form::getGrade_sign() const
{
	return (this->grade_sign);
}

unsigned int Form::getGrade_exec() const
{
	return (this->grade_exec);
}

void Form::beSigned(Bureaucrat &br)
{
	if (br.getGrade() <= this->grade_sign && !this->signature)
	{
		br.signForm(*this, 1);
		this->signature = 1;
	}
	else
	{
		br.signForm(*this, 0);
		if (br.getGrade() > this->grade_sign)
			throw GradeTooLowException();
	}
}

std::ostream &operator<<( std::ostream &output, const Form &X )
{
	output << "[" << X.getName() << "] form with target '"<< X.getTarget() <<"' (sign grade: " << X.getGrade_sign() << " and execute grade: " << X.getGrade_exec() << ")";
	return (output);
}
