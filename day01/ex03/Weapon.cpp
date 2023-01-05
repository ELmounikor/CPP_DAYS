/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounikor <mounikor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 12:47:07 by mounikor          #+#    #+#             */
/*   Updated: 2023/01/03 15:47:27 by mounikor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type): type(type){
    /*
    if (!type)
    {
        std::cout << "no type set\n";
        this->type = "*bear hands*";
    }
    else
        this->type = (std::string) type;
    */
   std::cout << this->type + " is crafted\n";
}

Weapon::~Weapon(void){
    std::cout << this->type + " is destroyed\n";
}

std::string Weapon::getType(void){
    return (this->type);
}

void Weapon::setType(std::string new_type){
    
    this->type = new_type;
}
