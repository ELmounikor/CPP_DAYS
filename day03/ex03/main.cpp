/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 12:21:15 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/15 15:56:20 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

void attaking(ClapTrap &p1, ClapTrap &p2)
{
	if (p2.getHit_pts() > 0)
		p1.attack(p2.getName());
	if (p1.getHit_pts() > 0 && p1.getEnergy_pts())
		p2.takeDamage(p1.getAttack_dmg());
}

int main()
{
	DiamondTrap p1("khona1");
	DiamondTrap p2("khtna1");
	for (int i = 0; i < 2; i++)
	{
		attaking(p1, p2);
		p2.beRepaired(15);
		attaking(p2, p1);
		p1.beRepaired(15);
	}
	p1.guardGate();
	p2.highFivesGuys();
	p1.whoAmI();
	return 0;
}
