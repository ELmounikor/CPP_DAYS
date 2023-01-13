/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 13:19:55 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/13 17:42:50 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->setHit_pts(100);
	this->setEnergy_pts(100);
	this->setAttack_dmg(30);
	std::cout << "FragTrap " << this->getName() << " is ready\n";
}

FragTrap::FragTrap(FragTrap const &old): ClapTrap(old)
{
	std::cout << "FragTrap " << this->getName() << " is ready\n";
}

FragTrap::~ FragTrap()
{
	std::cout << "FragTrap " << this->getName() << " has gone\n";
}

void FragTrap::highFivesGuys()
{
	std::cout << "\033[0;92mFragTrap " << this->getName() << ": positive high fives request ^_^\n\033[0m";
}
