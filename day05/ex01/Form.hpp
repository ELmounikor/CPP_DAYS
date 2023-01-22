/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 16:10:18 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/22 20:15:31 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FORM_HPP
# define _FORM_HPP
#include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{
	private:
		const std::string	name;
		bool				signature;
		const unsigned int	grade_sign;
		const unsigned int	grade_exec;
		
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
		Form();
		Form(std::string name, int grade_sign, int grade_exec);
		Form(Form const &old);
		Form &operator=(const Form &old);
		~Form();
		std::string getName() const;
		bool getSignatureState() const;
		unsigned int getGrade_sign() const;
		unsigned int getGrade_exec() const;
		void beSigned(Bureaucrat &br);
};

std::ostream &operator<<( std::ostream &output, const Form &X );

#endif
