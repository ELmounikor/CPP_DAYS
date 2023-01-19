/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 16:53:34 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/19 14:47:24 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	for (unsigned long i = 0; i < 100; i++)
		this->ideas[i] = ""; 
	std::cout << "\033[0;94mBrain has been created\n\033[0m";
}

Brain::Brain(Brain const &old)
{
	for (unsigned long i = 0; i < 100; i++)
		this->ideas[i] = old.ideas[i]; 
	std::cout << "\033[0;94mBrain has been created\n\033[0m";
}

Brain &Brain::operator=(const Brain &old)
{
	if (this != &old)
	{
		for (unsigned long i = 0; i < 100; i++)
			this->ideas[i] = old.ideas[i]; 
	}
    return (*this);
}

Brain::~Brain()
{
	std::cout << "\033[0;34mBrain has been destroyed\n\033[0m";
}

std::string *Brain::getIdeas(void)
{
	return (this->ideas);
}

std::string Brain::getIdea(int i) const
{
	if (i >= 0 && i < 100)
		return (this->ideas[i]);
	std::cout << "wrong index\n";
	return (NULL);
}

void Brain::setIdea(int i, std::string idea)
{
	if (i >= 0 && i < 100)
		this->ideas[i] = idea;
	else
		std::cout << "wrong index\n";
}
