/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounikor <mounikor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 23:35:44 by mel-kora          #+#    #+#             */
/*   Updated: 2022/12/25 13:58:24 by mounikor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->index = 0;
	this->adding = 0;
	// std::cout << "PhoneBook created\n";
}

PhoneBook::~PhoneBook(void)
{
	// std::cout << "PhoneBook deleted\n";
}

void	PhoneBook::add(void)
{
	this->contacts[(this->index)++].fill();
	if (this->adding < 8)
		this->adding++;
	this->index %= 8;
}

void	PhoneBook::exit(void){
	std::cout << "GoodBye!" << std::endl;
	::exit(0);
}

void	print_column(std::string str)
{
	int	i = str.length();
	if (i <= 10)
	{
		std::cout << str.substr(0, 10);
		while (i++ < 10)
			std::cout << " ";
	}
	else
	{
		std::cout << str.substr(0, 9);
		std::cout << '.';
	}
	std::cout << '|';
}

void	PhoneBook::display(void)
{
	int			i = 0;
	
	if (this->adding == 0)
		std::cout << "error: no contact added\n";
	else
	{
		std::cout << "|  index   |first name| lastname | nickname |\n";
		while (i < this->adding)
		{
			std::cout<< "|    " << i + 1 << "     |";
			print_column(this->contacts[i].get_first_name());
			print_column(this->contacts[i].get_last_name());
			print_column(this->contacts[i].get_nickname());
			std::cout << "\n";
			i++;
		}
	}
}

void	PhoneBook::search(void)
{
	int	i;

	this->display();
	if (this->adding > 0)
	{
		std::cout << "Choose an index from 1 to " << this->adding << std::endl;
		std::cin >> i;
		if (std::cin.eof() || !i)
		{
			std::cout << "error: invalid index" << std::endl;
			::exit(1);
		}
		this->display_info(i - 1);
	}
}

void	PhoneBook::display_info(int i)
{
	if (i < 0 || i > this->adding - 1)
		std::cout << "error: index out of range" << std::endl;
	else
	{
		std::cout << "**** Contact info ****" << std::endl;
		std::cout << "first_name : " << this->contacts[i].get_first_name() << std::endl;
		std::cout << "last_name : " << this->contacts[i].get_last_name() << std::endl;
		std::cout << "nickname : " << this->contacts[i].get_nickname() << std::endl;
		std::cout << "phone_number : " << this->contacts[i].get_phone_number() << std::endl;
		std::cout << "darkest_secret : " << this->contacts[i].get_darkest_secret() << std::endl;
	}
}