/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 12:47:07 by mounikor          #+#    #+#             */
/*   Updated: 2023/01/09 16:59:54 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type): type(type){
   std::cout << this->type + " is crafted\n";
}

Weapon::~Weapon(void){
    std::cout << this->type + " is destroyed\n";
}

const std::string &Weapon::getType(void){
    return (this->type);
}

void Weapon::setType(std::string new_type){
    
    this->type = new_type;
}
