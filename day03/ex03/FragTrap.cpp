/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 13:19:55 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/17 18:18:41 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
	this->hit_pts = 100;
	// if (this->energy_pts == 10)
		this->energy_pts = 100;
	this->attack_dmg = 30;
	std::cout << "FragTrap " << this->getName() << " is ready\n";
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	this->hit_pts = 100;
	// if (this->energy_pts == 10)
		this->energy_pts = 100;
	this->attack_dmg = 30;
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

FragTrap &FragTrap::operator=(const FragTrap &old)
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

void FragTrap::highFivesGuys()
{
	std::cout << "\033[0;92mFragTrap " << this->getName() << ": 🙋\n\033[0m";
}
