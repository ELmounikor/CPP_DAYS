/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 14:59:42 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/15 18:24:03 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap("_clap_name")
{
	this->name = "";
	this->hit_pts = FragTrap::hit_pts;
	this->energy_pts = ScavTrap::energy_pts;
	this->attack_dmg = FragTrap::attack_dmg;
	std::cout << "DiamondTrap " << this->name << ' ' << this->hit_pts << ' ' << this->energy_pts << ' ' << this->attack_dmg << " is ready\n";
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name")
{
	this->name = name;
	this->hit_pts = FragTrap::hit_pts;
	this->energy_pts = ScavTrap::energy_pts;
	this->attack_dmg = FragTrap::attack_dmg;
	std::cout << "DiamondTrap " << this->name << ' ' << this->hit_pts << ' ' << this->energy_pts << ' ' << this->attack_dmg << " is ready\n";
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
	std::cout << "\033[0;97mDiamondTrap name: " << this->name << " has ClapTrap name: " << ClapTrap::name << "\n\033[0m";
}
