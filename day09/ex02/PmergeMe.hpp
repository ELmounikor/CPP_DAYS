/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 11:35:19 by mel-kora          #+#    #+#             */
/*   Updated: 2023/03/25 18:01:31 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP
# include <iostream>
# include <limits.h>
# include <vector>
# include <deque>
# include <algorithm>

class PmergeMe
{
	private:
		std::vector<unsigned int>	container1;
		std::deque<unsigned int>	container2;
		PmergeMe();
		PmergeMe(PmergeMe const &src);
	public:
		PmergeMe(char **input);
		~PmergeMe();
		PmergeMe &operator=(PmergeMe const &rhs);
		unsigned int get_size();
		void print_container1();
		void print_container2();
		long double sort_container1();
		long double sort_container2();
		void merge_insert_sort1(std::vector<unsigned int> &container);
		void merge_insert_sort2(std::deque<unsigned int> &container);
};

template <class T> void print_it(T container)
{
	typename T::iterator i;
	for (i = container.begin() ; i < container.end() ; i++)
		std::cout << " " << *i ; 
	std::cout << std::endl;
}

template <class T>void insertion_sort(T &container)
{
	typename T::iterator	i = container.begin() + 1, j;
	unsigned int			tmp;

	while (i != container.end())
	{
		j = i;
		while (j != container.begin() && *j < *(j - 1))
		{
			tmp = *j;
			*j = *(j - 1);
			*(j-- - 1) = tmp;
		}
		i++;
	}
}

// template <class T>void insertion_sort(T &container, typename T::iterator i)
// {
// 	if (i == container.end())
// 		return ;
// 	typename T::iterator j = i;
// 	while (j != container.begin() && *j < *(j - 1))
// 	{
// 		unsigned int tmp = *j;
// 		*j = *(j - 1);
// 		*(j-- - 1) = tmp;
// 	}
// 	insertion_sort(container, ++i);
// }

#endif