/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 19:10:34 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/31 12:56:56 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	try
	{
		std::array<int, 5> c1 = {1, 2, 3, 4, 5};
		print_it(c1);
		std::cout << ::easyfind(c1, 3) << std::endl;
		std::vector<int> c2(7, 0);
		print_it(c2);
		std::cout << ::easyfind(c2, 7) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}