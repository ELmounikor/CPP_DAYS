/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 16:18:24 by mounikor          #+#    #+#             */
/*   Updated: 2023/01/09 11:04:38 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

std::string do_the_magic(std::string line, std::string to_find, std::string to_put){
	
	std::string new_line;
	long unsigned int i = 0;
	long unsigned int j = 0;
	
	while (i < line.length())
	{
		j = i;
		while (i < line.length() && line.substr(i, to_find.length()) != to_find)
			i++;
		if (j != i)
			new_line += line.substr(j, i - j);
		if (line.substr(i, to_find.length()) == to_find)
			new_line += to_put;
		i += to_find.length();
	}
	new_line += "\n";
	return (new_line);
}

int main(int ac, char **av){
	if (ac == 4)
	{
		std::string line;
		std::ifstream ifs(av[1]);
		char *s = strdup(av[1]);
		strcat(s,".replace");
		std::ofstream ofs(s);
		std::string to_find = av[2];
		std::string to_put = av[3];
		if (!ifs.is_open() || !ofs.is_open())
			std::cout << "file error\n";
		while (std::getline(ifs, line) && line.length() > 0)
			ofs << do_the_magic(line, to_find, to_put);
		ifs.close();
		ofs.close();
		free(s);
	}
	else
		std::cout << "Either too little or too much arguments >_<\n";
}
