/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 11:35:19 by mel-kora          #+#    #+#             */
/*   Updated: 2023/03/27 15:23:49 by mel-kora         ###   ########.fr       */
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
};

template <class T> void print_it(T container)
{
	typename T::iterator i;
	for (i = container.begin() ; i < container.end() ; i++)
		std::cout << " " << *i ; 
	std::cout << std::endl;
}

template <class T>void merge_combine(T &container, T &c1, T &c2)
{
	typename T::iterator	j1 = c1.begin(), j2 = c2.begin();

	container.clear();
	while (j1 != c1.end() && j2 != c2.end())
	{
		if (j1 == c1.end())
			container.push_back(*(j2++));
		else if (j2 == c2.end())
			container.push_back(*(j1++));
		else 
		{
			if (*j1 < *j2)
				container.push_back(*(j1++));
			else
				container.push_back(*(j2++));
		}
	}
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

template <class T>void merge_insert_sort(T &container)
{
	if (container.size() <= 10)
	{
		insertion_sort(container);
		return;
	}
	typename T::iterator mid = container.begin() + container.size() / 2;
	T left(container.begin(), mid);
	T right(mid, container.end());

	merge_insert_sort(left);
	merge_insert_sort(right);
	merge_combine(container, right, left);
	// std::merge(left.begin(), left.end(), right.begin(), right.end(), container.begin());
}

// //recursive insertion_sort
// template <class T>void insertion_sort(T &container, typename T::iterator &i)
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