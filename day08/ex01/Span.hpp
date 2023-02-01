/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 17:08:50 by mel-kora          #+#    #+#             */
/*   Updated: 2023/02/01 12:34:03 by mel-kora         ###   ########.fr       */
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
		Span &operator=( Span const & rhs );
		void addNumber(int to_add);
		void addNumber(unsigned int range, int maxvalue);
		int shortestSpan();
		int longestSpan();
		// void print();
		class NotEnoughElements;
		class NoMoreSpaceLeft;
};

#endif /* ************************************************************ SPAN_H */