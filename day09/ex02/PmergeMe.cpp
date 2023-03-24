/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 11:35:16 by mel-kora          #+#    #+#             */
/*   Updated: 2023/03/24 18:00:52 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <iomanip>

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
			ft_exit("Error : invalid input 🧐");
		if (value > INT_MAX)
			ft_exit("Error : input out of range 🤯");
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

unsigned int	PmergeMe::get_size()
{
	return (this->container1.size());
}

void	PmergeMe::print_container1()
{
	print_it(this->container1);
}

void	PmergeMe::print_container2()
{
	print_it(this->container2);
}

std::string PmergeMe::sort_container1()
{
	struct timeval	start = {}, end = {};
	double			usec_elapsed = 0;
	gettimeofday(&start, NULL);
	merge_insert_sort1(this->container1);
	gettimeofday(&end, NULL);
	usec_elapsed = end.tv_usec - start.tv_usec;
	return(std::to_string(usec_elapsed) + " us");
}

std::string PmergeMe::sort_container2()
{
	struct timeval	start = {}, end = {};
	double			usec_elapsed = 0;
	gettimeofday(&start, NULL);
	merge_insert_sort2(this->container2);
	gettimeofday(&end, NULL);
	usec_elapsed = end.tv_usec - start.tv_usec;
	return(std::to_string(usec_elapsed) + " us");
}

void PmergeMe::merge_insert_sort1(std::vector<unsigned int> &container)
{
	if (container.size() <= 2)
	{
		std::sort(container.begin(), container.end());
		return;
	}
	std::vector<unsigned int>::iterator mid = container.begin() + container.size() / 2;
	std::vector<unsigned int> left(container.begin(), mid);
	std::vector<unsigned int> right(mid, container.end());

	merge_insert_sort1(left);
	merge_insert_sort1(right);
	std::merge(left.begin(), left.end(), right.begin(), right.end(), container.begin());
}

void PmergeMe::merge_insert_sort2(std::deque<unsigned int> &container)
{
	if (container.size() <= 2)
	{
		std::sort(container.begin(), container.end());
		return;
	}
	std::deque<unsigned int>::iterator mid = container.begin() + container.size() / 2;
	std::deque<unsigned int> left(container.begin(), mid);
	std::deque<unsigned int> right(mid, container.end());

	merge_insert_sort2(left);
	merge_insert_sort2(right);
	std::merge(left.begin(), left.end(), right.begin(), right.end(), container.begin());
}
