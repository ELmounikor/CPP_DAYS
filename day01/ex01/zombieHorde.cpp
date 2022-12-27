/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounikor <mounikor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 13:56:05 by mounikor          #+#    #+#             */
/*   Updated: 2022/12/27 14:34:36 by mounikor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"
# include <iostream>

Zombie* zombieHorde( int N, std::string name ){
    
    if (N <= 0  || name.length() <= 0)
    {
        std::cout << "invalide input\n";
        return (NULL);
    }
    Zombie *zamzams = new Zombie[N];
    for (int i = 0; i < N; i++)
        zamzams[i].set_name(name);
    return (&zamzams[0]);
}