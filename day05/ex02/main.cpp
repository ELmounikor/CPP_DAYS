/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 11:45:49 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/22 20:39:26 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

int man()
{
	Form *F1 = new PresidentialPardonForm("Mounia");
	Form *F2 = new RobotomyRequestForm("Mounia");
	Form *F3 = new ShrubberyCreationForm("Mounia");
	try
	{
		Bureaucrat A("bob", 2);
		Bureaucrat B("alice", 1);
		Bureaucrat C("John", 144);
		
		F1->beSigned(A);
		F3->beSigned(B);
		F3->execute(A);
		F3->execute(A);
		F1->execute(B);
		F2->beSigned(A);
		F2->execute(B);
	}
    catch(const std::exception& e)
    {
        std::cerr << BOLD_Bright_Red << e.what() << "\n" << Color_CLEAR;
    }
	delete F1;
	delete F2;
	delete F3;
	return 0;
}

int main()
{
	man();
	// system("leaks bureaucrat");
}
