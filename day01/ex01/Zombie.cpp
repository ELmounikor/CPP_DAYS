/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 22:38:50 by mounikor          #+#    #+#             */
/*   Updated: 2023/01/09 17:01:52 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"
# include <iostream>

Zombie::Zombie(void){
	// std::cout << "zombie created\n";
}

void Zombie::set_name(std::string name){
	this->name = name;
}

Zombie::~Zombie(void){

	std::cout << this->name << " has gone.\n";
}

void Zombie::announce(void){
	
	std::cout << this->name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}
