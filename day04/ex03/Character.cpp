/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 11:56:11 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/18 17:44:38 by mel-kora         ###   ########.fr       */
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
	this->name = name;
	this->num_of_skills = 0;
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
	{
		this->name = old.name;
		this->num_of_skills = old.num_of_skills;
		for (int i = 0; i < old.num_of_skills ; i++)
			this->skills[i] = old.skills[i]; 
	}
	return(*this);
}

Character::~Character()
{
	for (int i = 0; i < 4 ; i++)
	{
		if (this->skills[i])
			delete this->skills[i];
	}
	std::cout << "\033[0;35mCharacter " << this->name << " has been destructed\n\033[0m";
}

std::string const & Character::getName() const
{
	return (this->name);
}

void Character::equip(AMateria* m)
{
	if (this->num_of_skills < 4)
	{
		int i = 0;
		while (this->skills[i])
			i++;
		this->skills[i] = m;
		this->num_of_skills++;
		std::cout << "\033[1;35m"<<this->name << " equiped " << m->getType() << "succefully\n\033[0m";
	}
	else
		std::cout << "\033[1;35m-> no more materia slots left for character " << this->name << "\n\033[0m";
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
	{
		if (this->skills[idx])
		{
			delete this->skills[idx];
			this->skills[idx] = NULL;
			this->num_of_skills--;
			std::cout << "\033[1;35m"<<this->name << " unequiped materia succefully\n\033[0m";
		}
		else
			std::cout << "\033[1;35m-> no materia in this slot\n\033[0m";
	}
	else
		std::cout << "\033[1;35m-> materia id out of range " << this->name << "\n\033[0m";
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4)
	{
		if (this->skills[idx])
			this->skills[idx]->use(target);
		else
			std::cout << "\033[1;35m-> no materia in this slot\n\033[0m";
	}
	else
		std::cout << "\033[1;35m-> materia id out of range " << this->name << "\n\033[0m";
}
