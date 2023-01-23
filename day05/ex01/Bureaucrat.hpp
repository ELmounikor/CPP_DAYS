/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 11:44:48 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/23 09:23:00 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		_BR_HPP
# define	_BR_HPP
# include	<iostream>
# include 	"Form.hpp"

class Form;
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
				return ("Grade Too High!");
			}
		}; 
		class GradeTooLowException: public std::exception
		{
			const char* what() const throw()
			{
				return ("Grade Too Low!");
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
		void signForm(Form const &form, bool status);
};

std::ostream &operator<<( std::ostream &output, const Bureaucrat &X );

# define Color_CLEAR			"\033[0m"

# define SIMPLE_Bright_Black	"\033[0;90m"
# define SIMPLE_Bright_Red		"\033[0;91m"
# define SIMPLE_Bright_Green	"\033[0;92m"
# define SIMPLE_Bright_Yellow	"\033[0;93m"
# define SIMPLE_Bright_Blue		"\033[0;94m"
# define SIMPLE_Bright_Magenta	"\033[0;95m"
# define SIMPLE_Bright_Cyan		"\033[0;96m"
# define SIMPLE_Bright_White	"\033[0;97m"

# define BOLD_Bright_Black		"\033[1;90m"
# define BOLD_Bright_Red		"\033[1;91m"
# define BOLD_Bright_Green		"\033[1;92m"
# define BOLD_Bright_Yellow		"\033[1;93m"
# define BOLD_Bright_Blue		"\033[1;94m"
# define BOLD_Bright_Magenta	"\033[1;95m"
# define BOLD_Bright_Cyan		"\033[1;96m"
# define BOLD_Bright_White		"\033[1;97m"

# define SIMPLE_Matte_Black		"\033[0;30m"
# define SIMPLE_Matte_Red		"\033[0;31m"
# define SIMPLE_Matte_Green		"\033[0;32m"
# define SIMPLE_Matte_Yellow	"\033[0;33m"
# define SIMPLE_Matte_Blue		"\033[0;34m"
# define SIMPLE_Matte_Magenta	"\033[0;35m"
# define SIMPLE_Matte_Cyan		"\033[0;36m"
# define SIMPLE_Matte_White		"\033[0;37m"

# define BOLD_Matte_Black		"\033[1;30m"
# define BOLD_Matte_Red			"\033[1;31m"
# define BOLD_Matte_Green		"\033[1;32m"
# define BOLD_Matte_Yellow		"\033[1;33m"
# define BOLD_Matte_Blue		"\033[1;34m"
# define BOLD_Matte_Magenta		"\033[1;35m"
# define BOLD_Matte_Cyan		"\033[1;36m"
# define BOLD_Matte_White		"\033[1;37m"

#endif