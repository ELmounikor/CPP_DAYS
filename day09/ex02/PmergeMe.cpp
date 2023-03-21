/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 11:35:16 by mel-kora          #+#    #+#             */
/*   Updated: 2023/03/21 19:13:04 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

long	to_long(char *input)
{
	unsigned long i = 0;

	if (!input)
		return (-1);
	while (input[i] && isspace(input[i]))
		i++;
	if (!input[i])
		return (-1);
	if ((input[i] == '-' || input[i] == '+') && input[i + 1] && input[i + 1] >= '0' && input[i + 1] <= '9')
		i++;
	while (input[i] && input[i] >= '0' && input[i] <= '9')
		i++;
	while (input[i] && isspace(input[i]))
		i++;
	if (input[i])
		return (-1);
	return (std::strtol(input, NULL, 10));
}

void	ft_exit(std::string msg)
{
	std::cout << "\033[0;91m" << msg << "\033[0m\n";
	::exit(1);
}

PmergeMe::PmergeMe()
{
}

PmergeMe::PmergeMe(char **input)
{
	long int		value;
	unsigned int	i = 1;
	
	while (input[i])
	{
		value = to_long(input[i]);
		if (value < 0)
			ft_exit("Error : invalid input");
		if (value > INT_MAX)
			ft_exit("Error : input out of range");
		this->container1.push_back(value);
		this->container2.push_back(value);
		i++;
	}
}

PmergeMe::PmergeMe(const PmergeMe &src): container1(src.container1), container2(src.container2)
{
}

PmergeMe::~PmergeMe()
{
}

PmergeMe	&PmergeMe::operator=(PmergeMe const &rhs)
{
	if ( this != &rhs )
	{
		this->container1 = rhs.container1;
		this->container2 = rhs.container2;
	}
	return *this;
}

void PmergeMe::print_container1()
{
	std::vector<unsigned int>::iterator i = this->container1.begin();
	while (i != this->container1.end())
	{
		std::cout << (i != this->container1.begin() ? " " : "") << *i;
		i++;
	}
	std::cout << std::endl;
}

void PmergeMe::print_container2()
{
	std::deque<unsigned int>::iterator i = this->container2.begin();
	while (i != this->container2.end())
	{
		std::cout << (i != this->container2.begin() ? " " : "") << *i;
		i++;
	}
	std::cout << std::endl;
}
