/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 20:42:54 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/23 08:07:20 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
	private:
		Form *makePresidentialPardonForm(std:: string target);
		Form *makeRobotomyRequestForm(std:: string target);
		Form *makeShrubberyCreationForm(std:: string target);
	public:
		Intern();
		Intern( Intern const & src );
		~Intern();
		Form *makeForm(std::string name, std:: string target);
		Intern &operator=( Intern const & rhs );
};

#endif /* ********************************************************** INTERN_H */