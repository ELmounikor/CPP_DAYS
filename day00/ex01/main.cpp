/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounikor <mounikor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 23:36:07 by mel-kora          #+#    #+#             */
/*   Updated: 2022/12/25 14:13:47 by mounikor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include<ios>
#include<limits>

int main(void)
{
	PhoneBook	telefon;
	std::string	cmd;
	
	while(1)
	{
		std::cout << "Mounkior Phone > ";
		std::getline(std::cin, cmd);
		if (std::cin.eof())
		{
			std::cout << std::endl;
			::exit(1);
		}
		else if (cmd == "ADD")
			telefon.add();
		else if (cmd == "SEARCH")
			telefon.search();
		else if (cmd == "EXIT")
			telefon.exit();
		else
			std::cout << "error : command discarded >> only ADD, SEARCH, and EXIT are valid\n";
	}
	return (0);
}