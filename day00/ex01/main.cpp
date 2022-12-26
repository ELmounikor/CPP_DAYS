/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounikor <mounikor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 23:36:07 by mel-kora          #+#    #+#             */
/*   Updated: 2022/12/25 16:53:19 by mounikor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook	telefon;
	std::string	cmd;
	
	std::cout << "*******  Welcome to Mounkior Phone  *******" << std::endl;
	std::cout << "You should only use ADD, SEARCH, or EXIT ;3" << std::endl;
	while(1)
	{
		std::cout << "Mounkior Phone > ";
		while (!(std::getline(std::cin, cmd) && cmd.length() >= 1))
		{
			if (std::cin.eof())
			{
				std::cout << std::endl;
				::exit(1);
			}
		}
		if (cmd == "ADD")
			telefon.add();
		else if (cmd == "EXIT")
			telefon.exit();
		else if (cmd == "SEARCH")
			telefon.search();
		else
			std::cout << "error : command discarded >> only ADD, SEARCH, and EXIT are valid\n";
		std::cin.clear();
	}
	return (0);
}
