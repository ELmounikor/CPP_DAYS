/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 20:55:10 by mounikor          #+#    #+#             */
/*   Updated: 2023/01/08 19:08:04 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <string.h>

Harl::Harl()
{
	// std::cout << "harl has come\n";
}

Harl::~Harl()
{
    // std::cout << "harl has gone\n";
}

void Harl::debug( void ){
	std::cout << "[ DEBUG ]\n";
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
}

void Harl::info( void ){
	std::cout << "[ INFO ]\n";
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void Harl::warning( void ){
	std::cout << "[ WARNING ]\n";
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n";
}

void Harl::error( void ){
	std::cout << "[ ERROR ]\n";
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

void Harl::complain(char * level){
	
	const char* lvl[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i = 0;
	while (i < 4 && strcmp(level, lvl[i]))
		i++;
	switch(i){
			case 0:
				this->debug();
			case 1:
				this->info();
			case 2:
				this->warning();
			case 3:
				this->error();
			break;
			default:
				std::cout << "[ Probably complaining about insignificant problems ]\n";
	}
}
