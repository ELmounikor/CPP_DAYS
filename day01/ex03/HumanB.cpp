/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounikor <mounikor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 14:48:48 by mounikor          #+#    #+#             */
/*   Updated: 2023/01/03 16:15:05 by mounikor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): name(name){
    std::cout << this->name + " is created\n";
}

HumanB::HumanB(std::string name, Weapon &the_weapon): name(name), weapon(&the_weapon){
    
    std::cout << this->name + " is ready\n";
}

HumanB::~HumanB(void){
    
    std::cout << this->name + " has gone\n";
}

void HumanB::setWeapon(Weapon &new_weapon){
    
    this->weapon = &new_weapon;
}

void HumanB::attack(void){
    
    if (this->weapon == NULL)
        std::cout << this->name + " attacks with their bear hands" <<std::endl;
    else
        std::cout << this->name + " attacks with their " + this->weapon->getType() <<std::endl;
}