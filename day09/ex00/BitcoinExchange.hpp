/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 11:45:07 by mel-kora          #+#    #+#             */
/*   Updated: 2023/03/22 11:58:04 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOIN_HPP
# define BITCOIN_HPP
# include <iostream>
# include <fstream>
# include <string.h>
# include <ctime>
# include <map>

class BitcoinExchange
{
	private:
		std::map<long long, double> btc_prices;
	public:
		BitcoinExchange();
		~BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &old);
		BitcoinExchange &operator=(const BitcoinExchange &old);
		void convert(std::string file);
		void print_data(void);
};

#endif