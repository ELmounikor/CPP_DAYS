/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 11:45:07 by mel-kora          #+#    #+#             */
/*   Updated: 2023/03/20 17:56:59 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOIN_HPP
# define BITCOIN_HPP
# include <iostream>
# include <fstream>
# include <string.h>
# include <limits.h>
# include <map>

class BitcoinExchange
{
	private:
		std::map<std::string, double> bitcoin_price;
	public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &old);
		~BitcoinExchange();
		BitcoinExchange &operator=(const BitcoinExchange &old);
		double		to_double(char *input);
		int			is_date(std::string input);
		void		convert(std::string file);
};

#endif