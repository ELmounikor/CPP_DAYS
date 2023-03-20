/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 11:45:03 by mel-kora          #+#    #+#             */
/*   Updated: 2023/03/20 17:58:05 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

double	BitcoinExchange::to_double(char *input)
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

int BitcoinExchange::is_date(std::string input)
{
	unsigned int	i = 0;
	
	if (input.size() < 10)
		return (0);
	while (i < 4 && isdigit(input[i]))
		i++;
	if (input[i] == '-')
		i++;
	if (i != 5)
		return (0);
	while (i < 7 && isdigit(input[i]))
		i++;
	if (input[i] == '-')
		i++;
	if (i != 8)
		return (0);
	while (i < 10 && isdigit(input[i]))
		i++;
	if (i < 10)
		return (0);
	while (i < input.size() && isspace(input[i]))
		i++;
	if (i < input.size())
		return (0);
	return (1);
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
	int				i = 0;
	
	if (file.is_open())
	{
		while (std::getline(file, line))
		{
			if (i)
			{
    			char *date = strtok((char *)line.c_str(), ",");
				char *input = strtok(NULL, ",");
				if (!input)
					ft_exit("Numeric value needed\n");
				double	value = to_double(input);
    			if (strtok(NULL, ",") || line[line.size() - 1] == ',')
					ft_exit("Bad input in the 1st DB file\n");
				if (!is_date(date))
					ft_exit("Invalid date\n");
				if (value < 0)
					ft_exit("Invalid price of btc\n");
				this->bitcoin_price[date] = value;
			}
			i++;
		}
		if (!i)
			ft_exit("Database data.csv is empty\n");
	}
	else
		ft_exit("Database data.csv is missing\n");
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
		else if (value > INT_MAX)
			std::cout << "Error: too large a number." << std::endl;
		else
		{
			std::map<std::string, double>::iterator i = this->bitcoin_price.begin();
			while (i != this->bitcoin_price.end() && date > (*i).first)
				i++;
			if (i == this->bitcoin_price.end())
				std::cout << "There was no price for btc at " << date << std::endl;
			else
				std::cout << date << "=> " << value << " = " << value * (*i).second << std::endl;
		}
	}
}
