/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounikor <mounikor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 22:43:31 by mounikor          #+#    #+#             */
/*   Updated: 2022/12/27 14:36:57 by mounikor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"
# include <iostream>

Zombie* zombieHorde(int N, std::string name);

int main(void){
    int n = 5;
    Zombie *zamzams = zombieHorde(n, "zamzam");
    for (int i = 0; i < n; i++)
        (zamzams + i)->announce();
    delete[] zamzams;
    return (0);
}