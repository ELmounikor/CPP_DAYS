/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 17:02:07 by mel-kora          #+#    #+#             */
/*   Updated: 2022/11/18 00:33:25 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
	int i;
	int j;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	i = 0;
	while (++i < ac)
	{
		j = 0;
		while (av[i][j])
			std::cout << (char) toupper(av[i][j++]);
	}
	std::cout << std::endl;
	return(0);
}
