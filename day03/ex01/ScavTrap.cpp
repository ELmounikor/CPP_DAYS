/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 10:24:52 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/13 12:39:37 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->setHit_pts(100);
	this->setHit_pts(50);
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

void ScavTrap::guardGate()
{
	std::cout << "\033[0;92mScavTrap " << this->getName() << "  is now in Gate keeper mode.\n\033[0m";
}
