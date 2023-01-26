/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 21:15:21 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/27 00:17:35 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.tpp"

int man()
{
	try
	{
		std::cout << "\033[1;93m-----------------------------------------------------------\033[0m\n";
		Array<int> tab1;
		Array<int> tab2(tab1);
		Array<int> tab3(7);
		tab1 = tab3;
		tab2 = tab3;
		for (unsigned int i = 0; i < tab1.size(); i++)
			tab1[i] = i + 1;
		for (unsigned int i = 0; i < tab2.size(); i++)
			tab2[i] = -i;
		print_me(&tab1[0], tab1.size());
		print_me(&tab2[0], tab2.size());
		// tab1[50];
		std::cout << "\033[1;93m-----------------------------------------------------------\033[0m\n";
	}
	catch(const std::exception& e)
	{
		std::cerr << "\033[1;91m" << e.what() << "\n\033[0m";
	}
	try
	{
		std::cout << "\033[1;93m-----------------------------------------------------------\033[0m\n";
		Array<char> tab1;
		Array<char> tab2(tab1);
		Array<char> tab3(5);
		tab1 = tab3;
		tab2 = tab3;
		for (unsigned int i = 0; i < tab1.size(); i++)
			tab1[i] = i + 48;
		for (unsigned int i = 0; i < tab2.size(); i++)
			tab2[i] = i + 65;
		print_me(&tab1[0], tab1.size());
		print_me(&tab2[0], tab2.size());
		// tab1[50];
		std::cout <<  "\033[1;93m-----------------------------------------------------------\033[0m\n";
	}
	catch(const std::exception& e)
	{
		std::cerr << "\033[1;91m" << e.what() << "\n\033[0m";
	}
	return 0;
}

int main()
{
	man();
	// system("leaks Array");
}