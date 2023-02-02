/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 17:08:45 by mel-kora          #+#    #+#             */
/*   Updated: 2023/02/02 22:11:14 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include "limits.h"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Span::Span() : N(0), elements(0)
{
}

Span::Span( const Span & src )
{
	this->N = src.N;
	std::copy(src.elements.begin(), src.elements.end(), this->elements.begin());
}

Span::Span(unsigned int N): N(N), elements(0)
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

Span &Span::operator=( Span const & old )
{
	if (this != &old)
	{
		this->N = old.N;
		std::copy(old.elements.begin(), old.elements.end(), this->elements.begin());
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Span::addNumber(long long to_add)
{
	if (this->elements.size() == N)
		throw NoMoreSpaceLeft();
	if (to_add > INT_MAX || to_add < INT_MIN)
		throw OverflowRisk();
	this->elements.push_back(to_add);
	std::sort(elements.begin(), elements.end());
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

void Span::print()
{
	std::vector<int>::iterator i;
	for (i = elements.begin() ; i < elements.end() ; i++)
		std::cout << *i << "\t"; 
	std::cout << std::endl;
}

/* ************************************************************************** */