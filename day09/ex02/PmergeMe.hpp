/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 11:35:19 by mel-kora          #+#    #+#             */
/*   Updated: 2023/03/24 16:40:03 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP
# include <iostream>
# include <limits.h>
# include <vector>
# include <deque>
# include <algorithm>
# include <sys/time.h>

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
		std::string sort_container1();
		std::string sort_container2();
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

#endif