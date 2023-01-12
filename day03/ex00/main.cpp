/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 12:21:15 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/12 21:08:00 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void attaking(ClapTrap &p1, ClapTrap &p2)
{
	if (p2.getHit_pts() > 0)
		p1.attack(p2.getName());
	if (p1.getHit_pts() > 0 && p1.getEnergy_pts())
		p2.takeDamage(p1.getAttack_dmg());
}

int main()
{
	ClapTrap p1("khona");
	ClapTrap p2("khtna");
	
	attaking(p1, p2);
	p1.setAttack_dmg(5);
	p2.setAttack_dmg(7);
	for (int i = 0; i < 5; i++)
	{
		attaking(p1, p2);
		p2.beRepaired(5);
		attaking(p2, p1);
		p1.beRepaired(7);
	}
	return 0;
}