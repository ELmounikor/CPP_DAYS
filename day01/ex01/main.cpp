/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 22:43:31 by mounikor          #+#    #+#             */
/*   Updated: 2023/01/09 17:11:06 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int main(void){
    int n = 5;
    Zombie *zamzams = zombieHorde(n, "");
    if (zamzams)
    {
        for (int i = 0; i < n; i++)
            (zamzams + i)->announce();
    }
    delete[] zamzams;
    return (0);
}