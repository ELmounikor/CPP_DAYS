/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 11:44:35 by mel-kora          #+#    #+#             */
/*   Updated: 2023/03/24 16:41:47 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av)
{
	if (ac > 1)
	{
		PmergeMe	pm(av);
		
		std::cout << "Before:\t";
		pm.print_container1();
		std::string time1 = pm.sort_container1();
		std::string time2 = pm.sort_container2();
		std::cout << "After:\t";
		pm.print_container1();
		std::cout << "Time to process a range of " << pm.get_size() << " elements with std::vector : " << time1 << std::endl;
		std::cout << "Time to process a range of " << pm.get_size() << " elements with std::deque : " << time2 << std::endl;
	}
	else
		std::cout << "No arguments provided 💤\n";
}
