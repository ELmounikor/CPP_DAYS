/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 12:21:10 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/15 15:47:02 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*******************  the orthodox canonical class form **********************/

ClapTrap::ClapTrap()
{
	this->name = "";
	hit_pts = 10;
	energy_pts = 10;
	attack_dmg = 0;
	std::cout << "\033[1;96mClapTrap " << this->name << " is ready\n\033[0m";
}

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
	hit_pts = 10;
	energy_pts = 10;
	attack_dmg = 0;
	std::cout << "\033[1;96mClapTrap " << this->name << " is ready\n\033[0m";
}

ClapTrap::ClapTrap(ClapTrap const &old)
{
	name = old.name;
	hit_pts = old.hit_pts;
	energy_pts = old.energy_pts;
	attack_dmg = old.attack_dmg;
	std::cout << "\033[1;96mClapTrap " << this->name << " is ready\n\033[0m";
}

ClapTrap::~ClapTrap()
{
	std::cout << "\033[1;94mClapTrap " << this->name << " has gone\n\033[0m";
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

/*******************  Getter and setters not mandatory but essential for testing purposes **********************/

std::string ClapTrap::getName(void)
{
	return (this->name);
}
int ClapTrap::getHit_pts(void)
{
	return (this->hit_pts);
}
int ClapTrap::getEnergy_pts(void)
{
	return (this->energy_pts);
}
int ClapTrap::getAttack_dmg(void)
{
	return (this->attack_dmg);
}

void ClapTrap::setName(std::string name)
{
	this->name = name;
}
void ClapTrap::setHit_pts(int amount)
{
	this->hit_pts = amount;
}
void ClapTrap::setEnergy_pts(int amount)
{
	this->energy_pts = amount;
}
void ClapTrap::setAttack_dmg(int amount)
{
	this->attack_dmg = amount;
}

/*******************  the other functions **********************/

void ClapTrap::attack(const std::string& target)
{
	if (this->energy_pts && this->hit_pts > 0)
	{
		this->energy_pts--;
		std::cout << "\033[0;93mClapTrap " << this->name << " attacks " << target << " causing " << this->attack_dmg << " points of damage!\n\033[0m";
	}
	else if (!this->energy_pts)
		std::cout << "\033[1;97mClapTrap " << this->name << " has no energy left to attack\n\033[0m";
	else
		std::cout<< "\033[1;91mClapTrap " << this->name << " is dead already\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hit_pts > 0)
	{
		if (amount < this->hit_pts)
			this->hit_pts-=amount;
		else
			this->hit_pts = 0;
		std::cout<< "\033[0;91mClapTrap " << this->name << " has lost " << amount << " hit points\n\033[0m";
		if (this->hit_pts <= 0)
			std::cout<< "\033[0;91mClapTrap " << this->name << " is dead now\n\033[0m";
	}
	else
		std::cout<< "\033[1;91mClapTrap " << this->name << " is dead already\n\033[0m";
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energy_pts && this->hit_pts > 0)
	{
		this->energy_pts--;
		this->hit_pts += amount;
		std::cout<< "\033[0;95mClapTrap " << this->name << " has restored " << amount << " hit points\n\033[0m";
	}
	else if (!this->energy_pts)
		std::cout << "\033[1;97mClapTrap " << this->name << " has no energy left to repair\n\033[0m";
	else
		std::cout<< "\033[1;91mClapTrap " << this->name << " is dead already\n\033[0m";
}
