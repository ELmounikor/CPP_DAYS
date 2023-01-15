/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 14:59:42 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/15 12:33:42 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
	this->name = name;
	this->hit_pts = 100;
	this->energy_pts = 50;
	this->attack_dmg = 30;
	std::cout << "DiamondTrap " << this->name << " is ready\n";
}

DiamondTrap::DiamondTrap(DiamondTrap const &old): ClapTrap(old), ScavTrap(old), FragTrap(old)
{
	std::cout << "DiamondTrap " << this->name << " is ready\n";
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << this->name << " has gone\n";
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &old)
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

void DiamondTrap::whoAmI()
{
	std::cout << "\033[0;97mDiamondTrap name: " << name << "  has ClapTrap name: " << ClapTrap::name << "\n\033[0m";
}
