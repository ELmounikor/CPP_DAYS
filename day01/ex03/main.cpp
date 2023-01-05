/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounikor <mounikor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 14:46:47 by mounikor          #+#    #+#             */
/*   Updated: 2023/01/03 18:31:55 by mounikor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void){
	{
		Weapon arm = Weapon("pistol");
		HumanA bob("Bob", arm);
		bob.attack();
		arm.setType("gun");
		bob.attack();
	}
	{
		Weapon arm = Weapon("knife");
		HumanB alice("Alice");
		alice.attack();
		alice.setWeapon(arm);
		alice.attack();
		arm.setType("gun");
		alice.attack();
	}
	return (0);    
}