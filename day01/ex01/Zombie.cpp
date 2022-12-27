/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounikor <mounikor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 22:38:50 by mounikor          #+#    #+#             */
/*   Updated: 2022/12/27 14:34:48 by mounikor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"
# include <iostream>

Zombie::Zombie(void){
	// std::cout << "zombie created\n";
}

void Zombie::set_name(std::string name){
	
	if (name.length() > 0)
		this->name = name;
	else
		this->name = "no_name";
}

Zombie::~Zombie(void){

	std::cout << this->name << " has gone.\n";
}

void Zombie::announce(void){
	
	std::cout << this->name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}
