/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 11:44:48 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/20 12:33:37 by mel-kora         ###   ########.fr       */
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

#endif