/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 13:22:40 by mel-kora          #+#    #+#             */
/*   Updated: 2023/02/01 11:37:21 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	Span sp = Span(5);
	
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	std::cout << "\033[1;93m-----------------------------------------------------------\033[0m\n";

	Span sp2(750);
	
	sp2.addNumber(750, 1000);
	std::cout << sp2.shortestSpan() << std::endl;
	std::cout << sp2.longestSpan() << std::endl;
	
	std::cout << "\033[1;93m-----------------------------------------------------------\033[0m\n";
	
	Span sp3(500);
	srand(time(NULL));
    for (int i = 0; i < 500; i++)
    {
    	const int value = rand();
		sp3.addNumber(value);
    }
	std::cout << sp3.shortestSpan() << std::endl;
	std::cout << sp3.longestSpan() << std::endl;
	return 0;
}