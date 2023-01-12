/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 12:21:10 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/12 19:06:10 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	hit_pts = 10;
	energy_pts = 10;
	attack_dmg = 0;
}

ClapTrap::ClapTrap(ClapTrap const &old)
{
	name = old.name;
	hit_pts = old.hit_pts;
	energy_pts = old.energy_pts;
	attack_dmg = old.attack_dmg;
}

ClapTrap::~ClapTrap()
{
}

ClapTrap &ClapTrap::operator=(const ClapTrap &old)
{
	if (this != &old)
	{
		name = old.name;
		hit_pts = old.hit_pts;
		energy_pts = old.energy_pts;
		attack_dmg = old.attack_dmg;
	}
	return (*this);
}

void ClapTrap::attack(const std::string& target)
{
	if (this->energy_pts && this->hit_pts > 0)
	{
		this->energy_pts--;
		std::cout << "ClapTrap " << this->name << " attacks " << target << " causing " << this->hit_pts << " points of damage!\n";
	}
	else if (!this->energy_pts)
		std::cout << "ClapTrap " << this->name << " has no energy left\n";
	else
		std::cout<< "ClapTrap " << this->name << " is dead already\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hit_pts > 0)
	{
		this->hit_pts -= amount;
		if (this->hit_pts)
			std::cout<< "ClapTrap " << this->name << " has lost " << amount << " hit points\n";
		else
			std::cout<< "ClapTrap " << this->name << " is dead now\n";
	}
	else
		std::cout<< "ClapTrap " << this->name << " is dead already\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energy_pts && this->hit_pts > 0)
	{
		this->energy_pts--;
		this->hit_pts += amount;
		std::cout<< "ClapTrap " << this->name << " has restored " << amount << " hit points\n";
	}
	else if (!this->energy_pts)
		std::cout << "ClapTrap " << this->name << " has no energy left\n";
	else
		std::cout<< "ClapTrap " << this->name << " is dead already\n";
}
