/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 14:59:42 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/13 17:39:48 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
	std::cout << "DiamondTrap " << this->getName() << " is ready\n";
}

DiamondTrap::DiamondTrap(DiamondTrap const &old): ClapTrap(old), ScavTrap(old), FragTrap(old)
{
	std::cout << "DiamondTrap " << "" << " is ready\n";
}

DiamondTrap::~ DiamondTrap()
{
	std::cout << "DiamondTrap " << "" << " has gone\n";
}

void DiamondTrap::whoAmI()
{
	std::cout << "\033[0;92mDiamondTrap name: " << this->getName() << "" << "\n\033[0m";
}
