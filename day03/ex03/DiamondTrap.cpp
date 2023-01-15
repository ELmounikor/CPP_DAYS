/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 14:59:42 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/15 11:52:55 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
	this->name = name;
	this->hit_pts = 100;
	this->energy_pts = 50;
	this->attack_dmg = 30;
	// ClapTrap::name = name + "_clap_name";
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

void DiamondTrap::whoAmI()
{
	std::cout << "\033[0;97mDiamondTrap name: " << name << "\thas ClapTrap name: " << ClapTrap::name << "\n\033[0m";
}
