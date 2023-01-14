/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 14:59:42 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/14 21:59:53 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
	std::cout << "DiamondTrap " << ClapTrap::getName() << " is ready\n";
	std::cout << "DiamondTrap " << ScavTrap::getAttack_dmg() << " is ready\n";
	std::cout << "DiamondTrap " << FragTrap::getName() << " is ready\n";
	std::cout << "DiamondTrap " << FragTrap::getAttack_dmg() << " is ready\n";
}

DiamondTrap::DiamondTrap(DiamondTrap const &old): ClapTrap(old), ScavTrap(old), FragTrap(old)
{
	std::cout << "DiamondTrap " << "" << " is ready\n";
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << "" << " has gone\n";
}

void DiamondTrap::whoAmI()
{
	std::cout << "\033[0;92mDiamondTrap name: " << this->getName() << "" << "\n\033[0m";
}
