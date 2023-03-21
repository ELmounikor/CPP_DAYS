/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 11:44:35 by mel-kora          #+#    #+#             */
/*   Updated: 2023/03/21 09:53:15 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"


int main(int ac, char **av)
{
	BitcoinExchange	btc;
	
	// btc.print_data();
	if (ac == 1)
		std::cout << "Error: could not open file.\n";
	else if  (ac == 2)
		btc.convert(av[1]);
	else
		std::cout << "Error: too much arguments.\n";
}