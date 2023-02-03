/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 13:22:40 by mel-kora          #+#    #+#             */
/*   Updated: 2023/02/03 10:44:59 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <limits>
#include <deque>


int main()
{
	try
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
		sp3.addNumber(6);
		sp3.addNumber(6);
		std::cout << sp3.shortestSpan() << std::endl;
		std::cout << sp3.longestSpan() << std::endl;

		std::cout << "\033[1;93m-----------------------------------------------------------\033[0m\n";
		
		Span sp4 = Span(26);
		std::vector<int> elements1;
		elements1.push_back(6);
		elements1.push_back(3);
		elements1.push_back(17);
		elements1.push_back(9);
		elements1.push_back(11);
		sp4.addNumber(elements1.begin(), elements1.end());
		std::cout << sp4.shortestSpan() << std::endl;
		std::cout << sp4.longestSpan() << std::endl;
		
		std::cout << "\033[1;93m-----------------------------------------------------------\033[0m\n";
		
		Span sp5 = Span(5);
		std::deque<int> elements2;
		srand(time(NULL));
		for (int  i = 0; i < 5; i++)
		{
			const long long value = rand();
			elements2.push_back(value);
		}
		sp5.addNumber(elements2.begin(), elements2.end());
		std::cout << sp5.shortestSpan() << std::endl;
		std::cout << sp5.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}
