/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounikor <mounikor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 22:43:31 by mounikor          #+#    #+#             */
/*   Updated: 2022/12/27 12:00:51 by mounikor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"
# include <iostream>

Zombie* newZombie( std::string name ){
    
    Zombie *zamzam;

    zamzam = new Zombie(name);
    return (zamzam);
}

void randomChump( std::string name ){
    
    Zombie zamzam(name);

    zamzam.announce();
}

int main(void){

    randomChump("howa");
    Zombie* zz = newZombie("hiya");
    zz->announce();
    delete zz;
}