/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 11:45:49 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/23 11:29:48 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Intern.hpp"

int man()
{
	Intern si_brahim;
	Form *F1 = si_brahim.makeForm("shrubbery creation", "the target");
	Form *F2 = si_brahim.makeForm("robotomy request", "the target");
	Form *F3 = si_brahim.makeForm("presidential pardon", "the target");
	Form *F4 = si_brahim.makeForm("Chi tkhrbi9a", "the target");
	try
	{
		Bureaucrat A("bob", 1);
		Bureaucrat B("alice", 1);
		
		F1->beSigned(A);
		F3->beSigned(B);
		F2->beSigned(A);
		A.executeForm(*F3);
		B.executeForm(*F1);
		A.executeForm(*F3);
		B.executeForm(*F2);
	}
    catch(const std::exception& e)
    {
        std::cerr << BOLD_Bright_Red << e.what() << "\n" << Color_CLEAR;
    }
	delete F1;
	delete F2;
	delete F3;
	delete F4;
	return 0;
}

int main()
{
	man();
	// system("leaks bureaucrat");
}
