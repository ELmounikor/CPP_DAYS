/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 13:16:23 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/23 18:14:18 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "header.hpp"

int is_numerical(std::string input)
{
	unsigned long i = 0;
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

void print_char(std::string input)
{
	if (input.length() == 1)
		return;
}

void print_int(std::string input)
{
	if (input.length() == 1)
		return;
}

void print_float(std::string input)
{
	if (input.length() == 1)
		return;
}

void print_double(std::string input)
{
	if (input.length() == 1)
		return;
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
		std::cout << is_numerical(input) << std::endl;
		if (is_numerical(input))
		{
			std::cout << BOLD_Bright_White << "char: " << (char) std::stoi(input) << std::endl;
			std::cout << BOLD_Bright_White << "int: " << std::stoi(input) << std::endl;
			std::cout << BOLD_Bright_White << "float: " << std::stof(input) << std::endl;
			std::cout << BOLD_Bright_White << "double: " << std::stod(input) << std::endl;
		}
	}
	else
		std::cout << BOLD_Bright_Red << "Either too little or too much arguments\n" << Color_CLEAR;
}