/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 11:44:35 by mel-kora          #+#    #+#             */
/*   Updated: 2023/03/22 13:51:54 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av)
{
	if (ac == 2)
	{
		RPN rpn(av[1]);

		std::cout << rpn.get_result() << std::endl;
	}
	else
		std::cout << "Either too little or too much arguments";
}
