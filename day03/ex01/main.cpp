/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 12:21:15 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/13 12:22:10 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

void attaking(ClapTrap &p1, ClapTrap &p2)
{
	if (p2.getHit_pts() > 0)
		p1.attack(p2.getName());
	if (p1.getHit_pts() > 0 && p1.getEnergy_pts())
		p2.takeDamage(p1.getAttack_dmg());
}

int main()
{
	ScavTrap p1("khona1");
	ScavTrap p2("khtna1");
	ClapTrap p3(p2);
	
	p3.setName("khtna2");
	attaking(p1, p3);
	p1.setAttack_dmg(5);
	p3.setAttack_dmg(7);
	for (int i = 0; i < 5; i++)
	{
		attaking(p1, p3);
		p3.beRepaired(5);
		attaking(p3, p1);
		p1.beRepaired(7);
	}
	p1.guardGate();
	return 0;
}
