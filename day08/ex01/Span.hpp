/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 17:08:50 by mel-kora          #+#    #+#             */
/*   Updated: 2023/02/02 18:11:21 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <iostream>
# include <algorithm>
# include <vector>

class Span
{
	private:
		unsigned int		N;
		std::vector<int>	elements;
		Span();
	public:
		Span( Span const & src );
		Span(unsigned int N);
		~Span();
		Span &operator=( Span const &rhs );
		void addNumber(int to_add);
		// void addNumber(unsigned int range, int maxvalue);
		template <typename T> void addNumber(T start, T end);
		int shortestSpan();
		int longestSpan();
		void print();
		class NotEnoughElements;
		class NoMoreSpaceLeft;
		class OverflowRisk;
};

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

class Span::OverflowRisk: public std::exception
{
	const char* what() const throw()
	{
		return ("\033[1;91mOverflow Risk!\033[0m");
	}
};

/*
** --------------------------------- TEMPLATE ---------------------------------
*/

template <class T>
void Span::addNumber(T start, T end)
{
	std::vector<const int>::iterator i;
	for (i = start; i < end; i++)
		this->addNumber(*i);
}

template <>
void Span::addNumber(unsigned int range, unsigned int maxval)
{
	
	srand(time(NULL));
	for (unsigned int i = 0; i < range; i++)
	{
		const unsigned int value = rand() % (maxval + 1);
		this->addNumber(value);
	}
}

#endif /* ************************************************************ SPAN_H */