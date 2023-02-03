/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 17:08:50 by mel-kora          #+#    #+#             */
/*   Updated: 2023/02/03 10:36:50 by mel-kora         ###   ########.fr       */
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
		int shortestSpan();
		int longestSpan();
		void print();
		class NotEnoughElements;
		class NoMoreSpaceLeft;
		class OverflowRisk;
		void addNumber(long long to_add);
		template <typename T> void addNumber(T start, T end);
		template <>void addNumber<int>(int range, int maxvalue)
		{
			if (range > INT_MAX || range < 0 || maxvalue > INT_MAX || maxvalue < INT_MIN)
				throw std::exception();
			srand(time(NULL));
			for (int i = 0; i < range; i++)
			{
				const int value = rand() % (maxvalue + 1);
				this->addNumber(value);
			}
		}
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
		return ("\033[1;91mOverflow Risk! only int values please..\033[0m");
	}
};

/*
** --------------------------------- TEMPLATE ---------------------------------
*/

template <class T>
void Span::addNumber(T start, T end)
{
	T i;
	for (i = start; i < end; i++)
		this->addNumber(*i);
}


#endif /* ************************************************************ SPAN_H */