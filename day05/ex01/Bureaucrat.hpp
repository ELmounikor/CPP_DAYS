/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 11:44:48 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/21 13:41:10 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _B_HPP
# define _B_HPP
# include <iostream>

class Bureaucrat
{
	private:
		const std::string	name;
		unsigned int		grade;
	public:
		class GradeTooHighException: public std::exception
		{
			const char* what() const throw()
			{
				return "Bureaucrat::GradeTooHighException";
			}
		}; 
		class GradeTooLowException: public std::exception
		{
			const char* what() const throw()
			{
				return "Bureaucrat::GradeTooLowException";
			}
		};
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const &old);
		Bureaucrat &operator=(const Bureaucrat &old);
		~Bureaucrat();
		std::string getName() const;
		unsigned int getGrade() const;
		void setGrade(unsigned int new_grade);
		void increment();
		void decrement();
};

std::ostream &operator<<( std::ostream &output, const Bureaucrat &X );

#endif