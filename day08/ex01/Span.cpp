/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 17:08:45 by mel-kora          #+#    #+#             */
/*   Updated: 2023/02/01 11:37:26 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include "limits.h"

/*
** --------------------------------- NESTED CLASSES ---------------------------------
*/

class Span::NotEnoughElements: public std::exception
{
	const char* what() const throw()
	{
		return ("\033[1;91mNot Enough Elements!\033[0m");
	}
};

class Span::NoMoreSpaceLeft: public std::exception
{
	const char* what() const throw()
	{
		return("\033[1;91mNo More Space Left!\033[0m");
	}
};

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Span::Span()
{
}

Span::Span( const Span & src )
{
	this->N = src.N;
	// std::copy(src.elements.begin(), src.elements.end(), this->elements.begin());
}

Span::Span(unsigned int N): N(N)
{
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Span::~Span()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Span &Span::operator=( Span const & rhs )
{
	if (this != &rhs)
	{
		this->N = rhs.N;
		// std::copy(rhs.elements.begin(), rhs.elements.end(), this->elements.begin());
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Span::addNumber(int to_add)
{
	if (this->elements.size() == N)
		throw NoMoreSpaceLeft();
	this->elements.push_back(to_add);
	std::sort(elements.begin(), elements.end());
}

void Span::addNumber(unsigned int range, int maxval)
{
	srand(time(NULL));
	for (unsigned int i = 0; i < range; i++)
	{
    	const int value = rand() % (maxval + 1);
		this->addNumber(value);
	}
}

int Span::shortestSpan()
{
	if (this->elements.size() < 2)
		throw NotEnoughElements();
	long min = LONG_MAX;
	std::vector<int>::iterator i;
	for (i = elements.begin(); i < elements.end(); i++)
	{
		if (i + 1 < elements.end())
		{
			if (*(i + 1) - *i < min)
				min = *(i + 1) - *i;
		}
	}
	return min;
}

int Span::longestSpan()
{
	if (this->elements.size() < 2)
		throw NotEnoughElements();
	return (*(elements.end() - 1) - *(elements.begin()));
}

// void Span::print()
// {
// 	std::vector<int>::iterator i;
// 	for (i = elements.begin() ; i < elements.end() ; i++)
// 		std::cout << *i << "\t"; 
// 	std::cout << std::endl;
// }

/* ************************************************************************** */