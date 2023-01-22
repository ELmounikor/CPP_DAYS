/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 11:45:49 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/22 13:39:27 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"

int man()
{
	try
	{
		Bureaucrat A("bob", 2);
		Bureaucrat B("alice", 1);
		Form C("alliance with btc", 1, 2);
		
		C.beSigned(B);
		C.beSigned(B);
		C.beSigned(A);
		C.beSigned(A);
	}
    catch(const std::exception& e)
    {
        std::cerr << BOLD_Bright_Red << e.what() << "\n" << Color_CLEAR;
    }
	return 0;
}

int main()
{
	man();
	// system("leaks bureaucrat");
}
