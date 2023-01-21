/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 16:10:18 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/20 16:11:01 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FORM_HPP
# define _FORM_HPP
# include <iostream>

class Form
{
	private:
		const std::string	name;
		unsigned int		grade;
	public:
		Form();
		Form(std::string name, int grade);
		Form(Form const &old);
		Form &operator=(const Form &old);
		~Form();
		std::string getName() const;
		unsigned int getGrade() const;
		void setGrade(unsigned int new_grade);
		void increment();
		void decrement();
};

std::ostream &operator<<( std::ostream &output, const Form &X );

#endif