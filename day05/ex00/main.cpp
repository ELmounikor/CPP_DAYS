/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 11:45:49 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/21 19:56:34 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"

int man()
{
	Bureaucrat *A;
	Bureaucrat *B;
	try
	{
		Bureaucrat mounia("mounia", 1);
		A = new Bureaucrat("bob", 2);
		B = new Bureaucrat("alice", 150);
		
		A->decrement();
		B->increment();
		mounia.increment();
	}
    catch(const std::exception& e)
    {
        std::cerr << BOLD_Bright_Red << e.what() << "\n" << Color_CLEAR;
    }
	delete A;
	delete B;
	return 0;
}

int main()
{
	man();
	// system("leaks bureaucrat");
}