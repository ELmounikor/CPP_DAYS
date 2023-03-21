/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 11:35:19 by mel-kora          #+#    #+#             */
/*   Updated: 2023/03/21 19:08:27 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP
# include <iostream>
# include <limits.h>
# include <vector>
# include <deque>

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
		void print_container1();
		void print_container2();
};

#endif