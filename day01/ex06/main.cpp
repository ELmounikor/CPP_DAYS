/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 17:47:45 by mounikor          #+#    #+#             */
/*   Updated: 2023/01/08 19:08:10 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
	if (ac == 2)
	{
		Harl karen;
		karen.complain(av[1]);
	}
	else
		std::cout << "Either too little or too much arguments >_<\n";
}