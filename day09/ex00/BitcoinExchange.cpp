/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 11:45:03 by mel-kora          #+#    #+#             */
/*   Updated: 2023/03/21 09:52:36 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

double	to_double(char *input)
{
	unsigned long i = 0;
	
	if (!input)
		return(-1);
	while (input[i] && isspace(input[i]))
		i++;
	if (!input[i])
		return (-1);
	if ((input[i] == '-' || input[i] == '+') && input[i + 1] && input[i + 1] >= '0' && input[i + 1] <= '9')
		i++;
	while (input[i] && input[i] >= '0' && input[i] <= '9')
		i++;
	if (input[i])
	{
		if (input[i++] == '.')
		{
			if (input[i] && input[i] >= '0' && input[i] <= '9')
			{
				while (input[i] && input[i] >= '0' && input[i] <= '9')
					i++;
				while (input[i] && isspace(input[i]))
					i++;
				if (input[i])
					return (-1);
				return (std::strtod(input, NULL));
			}
			return (-1);
		}
		return (-1);
	}
	return (std::strtod(input, NULL));
}

long long is_date(std::string input)
{
	unsigned long	i = 0;
	struct tm		tm = {};
	
	if (input.size() < 10)
		return (0);
	i = 10;
	while (i < input.size() && isspace(input[i]))
		i++;
	if (i < input.size())
		return (0);
	input = input.substr(0, 10);
    if (strptime(input.c_str(), "%F", &tm))
	{
		if (tm.tm_mday != 0 && mktime(&tm) != -1)
			return (tm.tm_mday + (tm.tm_mon + 1) * 100 + (tm.tm_year + 1900) * 10000);
		return (0);	
	}
	return (0);
}

void	ft_exit(std::string msg)
{
	std::cout << msg << std::endl;
	::exit(1);
}

BitcoinExchange::BitcoinExchange()
{
	std::ifstream	file("data.csv");
	std::string		line;
	
	if (file.is_open())
	{
		std::getline(file, line);
		while (std::getline(file, line))
		{
			char *date = strtok((char *)line.c_str(), ",");
			char *input = strtok(NULL, ",");
			double	value = to_double(input);
			if (!date || ! input || strtok(NULL, ",") || line[line.size() - 1] == ',')
				ft_exit("Bad input in in data.csv");
			if (!is_date(date))
				ft_exit("Invalid date in data.csv");
			if (value < 0)
				ft_exit("Invalid price of btc in data.csv");
			this->bitcoin_price[is_date(date)] = value;
		}
		if (this->bitcoin_price.size() == 0)
			ft_exit("Database data.csv is empty");
	}
	else
		ft_exit("Database data.csv is missing");
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &old): bitcoin_price(old.bitcoin_price)
{
}

BitcoinExchange::~BitcoinExchange()
{
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &old)
{
	if (this != &old)
		this->bitcoin_price = old.bitcoin_price;
	return (*this);
}

void BitcoinExchange::convert(std::string file_name)
{
	std::ifstream	file(file_name);
	std::string		line;

	if (!file.is_open())
	{
        std::cout << "Error: could not open file.\n";
		return ;
	}
	std::getline(file, line);
	while (std::getline(file, line))
	{
		char	*date = strtok((char *)line.c_str(), "|");
		char	*input = strtok(NULL, "|");
		double	value = to_double(input);
		if (!date || !input || strtok(NULL, "|") || line[line.size() - 1] == '|' || !is_date(date))
			std::cout << "Error: bad input => " << line << std::endl;
		else if (value < 0)
			std::cout << "Error: not a positive number." << std::endl;
		else if (value > 1000)
			std::cout << "Error: too large number." << std::endl;
		else
		{
			std::map<long long, double>::iterator i = this->bitcoin_price.begin();
			while (i != this->bitcoin_price.end() && is_date(date) > (*i).first)
				i++;
			if ((i == this->bitcoin_price.begin() && is_date(date) < (*i).first))
				std::cout << "There was no price for btc at " << date << std::endl;
			else if (i != this->bitcoin_price.end() && is_date(date) == (*i).first)
				std::cout << date << "=> " << value << " = " << value * (*i).second << std::endl;
			else
				std::cout << date << "=> " << value << " = " << value * (*(--i)).second << std::endl;
		}
	}
}

void BitcoinExchange::print_data(void)
{
	std::map<long long, double>::iterator i = this->bitcoin_price.begin();
	while (i != this->bitcoin_price.end())
	{
		std::cout << "date : " << (*i).first << "\tvalue : " << (*i).second << std::endl;
		i++;
	}
}
