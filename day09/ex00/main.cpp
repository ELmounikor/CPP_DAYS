/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 11:44:35 by mel-kora          #+#    #+#             */
/*   Updated: 2023/03/22 18:49:18 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
	BitcoinExchange	btc;
	
	// btc.print_data();
	if (ac == 1)
		std::cout << "\033[0;91mError: could not open file.\n\033[0m";
	else if  (ac == 2)
		btc.convert(av[1]);
	else
		std::cout << "\033[0;91mError: too much arguments.\n\033[0m";
}