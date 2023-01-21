/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 11:45:49 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/21 16:03:43 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"

int man()
{
	try
	{
		Bureaucrat A("bob", 15);
		A.decrement();
		Bureaucrat B("alice", 150);
		B.decrement();
	}
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
	return 0;
}

int main()
{
	man();
	// system("leaks bureaucrat");
}