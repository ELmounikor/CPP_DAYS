/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 10:52:48 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/09 10:53:07 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"
# include <iostream>

Zombie* newZombie( std::string name ){
    
    Zombie *zamzam;

    zamzam = new Zombie(name);
    return (zamzam);
}
