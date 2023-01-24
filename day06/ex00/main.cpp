/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 13:16:23 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/24 15:22:20 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "header.hpp"
# include	<iostream>
# include <limits.h>

void print_char(double value)
{
	if (value >= 32 && value <= 127)
		std::cout << "char: " << static_cast<char>(value) << std::endl;
	else if (value >= INT_MIN && value <= INT_MAX)
		std::cout << "char: " << "Non displayable" << std::endl;
	else
		std::cout << "char: " << "impossible" << std::endl;
}

void print_int(double value)
{
	if (value >= INT_MIN && value <= INT_MAX)
		std::cout << "int: " << static_cast<int>(value) << std::endl;
	else
		std::cout << "int: " << "impossible" << std::endl;
}

void print_float_nd_double(double value)
{
	std::cout << "float: " << static_cast<float>(value)  << (value == static_cast<int>(value) ? ".0" : "") << 'f' << std::endl;
	std::cout << "double: " << static_cast<double>(value) << (value == static_cast<int>(value) ? ".0" : "") << std::endl;
}

int is_numerical(std::string input)
{
	unsigned long i = 0;
	
	if (input[i] == '-' && i + 1 < input.length() && input[i + 1] >= '0' && input[i + 1] <= '9')
		i++;
	while (i < input.length() && input[i] >= '0' && input[i] <= '9')
		i++;
	if (i < input.length())
	{
		if (input[i++] == '.')
		{
			if (i < input.length() && input[i] >= '0' && input[i] <= '9')
			{
				while (i < input.length() && input[i] >= '0' && input[i] <= '9')
				i++;
				if (i < input.length())
				{
					if (input[i++] == 'f')
					{
						if (i < input.length())
							return (0);
						return (2);
					}
					return (0);
				}
				return (3);
			}
			return (0);
		}
		return (0);
	}
	return (1);
}

double double_conv(std::string input, int type)
{
	if (type == 3 || type == 1)
		return (std::stod(input));
	else if (type == 2)
	{
		input[input.length() - 1] = 0;
		return (std::stod(input));
	}
	return (static_cast<int>(input[0]));
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		std::string input = av[1];
		if (input.length() == 0)
		{
			std::cout << BOLD_Bright_Red << "Nothing to convert\n" << Color_CLEAR;
			return (1);
		}
		int type = is_numerical(input);
		if (input == "-inff" || input == "+inff" || input == "nanf")
			type = 2;
		else if (input == "-inf" || input == "+inf" || input == "nan")
			type = 3;
		else if (input.length() == 1)
			type = 4;
		else if (!type)
		{
			std::cout << "char: " << "impossible" << std::endl;
			std::cout << "int: " << "impossible" << std::endl;
			std::cout << "float: " << "impossible" << std::endl;
			std::cout << "double: " << "impossible" << std::endl;
			return (0);
		}
		double value = double_conv(input, type);
		print_char(value);
		print_int(value);
		print_float_nd_double(value);
	}
	else
		std::cout << BOLD_Bright_Red << "Either too little or too much arguments\n" << Color_CLEAR;
	return 1;
}
			