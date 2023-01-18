/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 11:56:11 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/18 16:04:34 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	this->name = "";
	this->num_of_skills = 0;
	std::cout << "\033[0;95mClone of character "<< this->name <<" has come\n\033[0m";
}

Character::Character(std::string const & name)
{
	this->num_of_skills = 0;
	this->name = name;
	std::cout << "\033[0;95mCharacter "<< this->name <<" has come\n\033[0m";
}

Character::Character(const Character &old)
{
	this->name = old.name;
	this->num_of_skills = old.num_of_skills;
	for (int i = 0; i < old.num_of_skills ; i++)
		this->skills[i] = old.skills[i]; 
	std::cout << "\033[0;95mClone of character "<< this->name <<" has come\n\033[0m";
}

Character &Character::operator=(const Character &old)
{
	if (this != &old)
		this->name = old.name;
	return(*this);
}

Character::~Character()
{
	std::cout << "\033[0;31mMateria has been destructed : \033[0m";
}

std::string const & Character::getName() const
{
	return (this->name);
}
