/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounikor <mounikor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 14:16:43 by mounikor          #+#    #+#             */
/*   Updated: 2023/01/03 16:14:58 by mounikor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &the_weapon): name(name), weapon(the_weapon){
    std::cout << this->name + " is ready\n";
}

HumanA::~HumanA(void){
    
    std::cout << this->name + " has gone\n";
}

void HumanA::setWeapon(Weapon &new_weapon){
    
    this->weapon = new_weapon;
}

void HumanA::attack(void){
    
    std::cout << this->name + " attacks with their " + this->weapon.getType() <<std::endl;
}