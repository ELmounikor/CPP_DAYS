/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 10:24:52 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/14 21:27:07 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->setHit_pts(100);
	this->setEnergy_pts(50);
	this->setAttack_dmg(20);
	std::cout << "ScavTrap " << this->getName() << " is ready\n";
}

ScavTrap::ScavTrap(ScavTrap const &old): ClapTrap(old)
{
	std::cout << "ScavTrap " << this->getName() << " is ready\n";
}

ScavTrap::~ ScavTrap()
{
	std::cout << "ScavTrap " << this->getName() << " has gone\n";
}

void ScavTrap::attack(const std::string& target)
{
	if (this->energy_pts && this->hit_pts > 0)
	{
		this->energy_pts--;
		std::cout << "\033[1;93mScavTrap " << this->name << " attacks " << target << " causing " << this->attack_dmg << " points of damage!\n\033[0m";
	}
	else if (!this->energy_pts)
		std::cout << "\033[1;97mScavTrap " << this->name << " has no energy left to attack\n\033[0m";
	else
		std::cout<< "\033[1;91mScavTrap " << this->name << " is dead already\n";
}

void ScavTrap::guardGate()
{
	std::cout << "\033[1;92mScavTrap " << this->getName() << "  is now in Gate keeper mode.\n\033[0m";
}
