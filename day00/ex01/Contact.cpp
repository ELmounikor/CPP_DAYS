/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounikor <mounikor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 23:35:46 by mel-kora          #+#    #+#             */
/*   Updated: 2022/12/25 16:08:39 by mounikor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Contact.hpp"
# include <stdlib.h>

Contact::Contact(void){
	// std::cout << "Contact constructed\n";
}

Contact::~Contact(void){
	// std::cout << "Contact destructed\n";
}

void	Contact::	fill(void){
	while (!(std::cin.eof()))
	{
		std::cout << "Enter the contact's fist name: ";
		std::getline(std::cin, this->first_name);
		if (this->first_name[0])
			break ;
		std::cout << "error : you can't leave a field empty\n";
	}
	while (!(std::cin.eof()))
	{
		std::cout << "Enter the contact's last name: ";
		std::getline(std::cin, this->last_name);
		if (this->last_name[0])
			break ;
		std::cout << "error : you can't leave a field empty\n";
	}
	while (!(std::cin.eof()))
	{
		std::cout << "Enter the contact's nickname: ";
		std::getline(std::cin, this->nickname);
		if (this->nickname[0])
			break ;
		std::cout << "error : you can't leave a field empty\n";
	}
	while (!(std::cin.eof()))
	{
		std::cout << "Enter the contact's phone number: ";
		std::getline(std::cin, this->phone_number);
		if (this->phone_number[0])
			break ;
		std::cout << "error : you can't leave a field empty\n";
	}
	while (!(std::cin.eof()))
	{
		std::cout << "Enter the contact's darkest secret: ";
		std::getline(std::cin, this->darkest_secret);
		if (this->darkest_secret[0])
			break ;
		std::cout << "error : you can't leave a feild empty\n";
	}
	if (std::cin.eof())
		::exit(1);
	std::cout << "Contact created\n";
}

std::string	Contact::get_first_name(void){
	return(this->first_name);
}

std::string	Contact::get_last_name(void){
	return(this->last_name);
}

std::string	Contact::get_nickname(void){
	return(this->nickname);
}

std::string	Contact::get_phone_number(void){
	return(this->phone_number);
}

std::string	Contact::get_darkest_secret(void){
	return(this->darkest_secret);
}