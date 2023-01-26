/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 13:16:23 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/26 16:33:15 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <limits.h>

int is_numerical(std::string input)
{
	unsigned long i = 0;
	
	while (i < input.length() && isspace(input[i]))
		i++;
	if (i == input.length())
		return(0);
	if ((input[i] == '-' || input[i] == '+') && i + 1 < input.length() && input[i + 1] >= '0' && input[i + 1] <= '9')
		i++;
	while (i < input.length() && input[i] >= '0' && input[i] <= '9')
		i++;
	if (i < input.length()){
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

double double_conv(char *input, int type)
{
	if (type == 1 || type == 2 || type == 3)
		return (std::strtod(input, NULL));
	return (static_cast<double>(input[0]));
}

void print_char(double value)
{
	if (value >= 32 && value <= 127)
		std::cout << "char: " << static_cast<char>(value) << std::endl;
	else if (value >= CHAR_MIN && value <= 255)
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
	std::cout << "float: " << static_cast<float>(value)  << (value < 1000000 && value > -1000000 && value == static_cast<int>(value) ? ".0" : "") << "f"<< std::endl;
	std::cout << "double: " << value << (value < 1000000 && value > -1000000 && value == static_cast<int>(value) ? ".0" : "") << std::endl;
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		std::string input = av[1];
		if (input.length() == 0)
		{
			std::cout << "\033[1;91m" << "Nothing to convert\n" << "\033[0m";
			return (1);
		}
		int type = is_numerical(input);
		if (!type && (input == "-inff" || input == "+inff" || input == "inff" || input == "nanf"))
			type = 2;
		else if (!type && (input == "-inf" || input == "+inf" || input == "inf" || input == "nan"))
			type = 3;
		else if (!type &&(input.length() == 1))
			type = 4;
		else if (!type)
		{
			std::cout << "char: " << "impossible" << std::endl;
			std::cout << "int: " << "impossible" << std::endl;
			std::cout << "float: " << "impossible" << std::endl;
			std::cout << "double: " << "impossible" << std::endl;
			return (0);
		}
		double value = double_conv(av[1], type);
		print_char(value);
		print_int(value);
		print_float_nd_double(value);
	}
	else
		std::cout << "\033[1;91m" << "Either too little or too much arguments\n" << "\033[0m";
	return 1;
}
			