/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 16:10:07 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/21 21:13:52 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form():  name(name), signature(0), grade_sign(1), grade_exec(150)
{
    std::cout << SIMPLE_Bright_Green << "Adding :: "<< *this << Color_CLEAR;
}

Form::Form(std::string name, int grade1,  int grade2): name(name), signature(0), grade_sign(grade1), grade_exec(grade2)
{
    if (grade1 < 1 || grade2 < 1)
        throw GradeTooHighException();
    else if (grade1 > 150 || grade2 > 150)
        throw GradeTooLowException();
    std::cout << SIMPLE_Bright_Green << "Adding :: "<< *this << Color_CLEAR;
}

Form::Form(Form const &old): name(old.name), signature(old.signature), grade_sign(old.grade_sign), grade_exec(old.grade_exec)
{
    std::cout << SIMPLE_Bright_Green "Adding copy :: "<< *this << Color_CLEAR;
}

Form &Form::operator=(const Form &old)
{
	if (this != &old)
	{
		std::cout << "cannot change \n ";
	}
	return (*this);
}

Form::~Form()
{
    std::cout << SIMPLE_Matte_Green << "Removing :: "<< *this << Color_CLEAR;
}

std::string Form::getName() const
{
	return (this->name);
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

std::ostream &operator<<( std::ostream &output, const Form &X )
{
	output << "form [" << X.getName() << "]  grade required to sign:" << X.getGrade_sign() << "  grade required to execute:" << X.getGrade_exec();
	return (output);
}
