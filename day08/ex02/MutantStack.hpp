/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 14:44:10 by mel-kora          #+#    #+#             */
/*   Updated: 2023/02/02 15:17:51 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <iostream>
# include <stack>

template <typename T>
class MutantStack: public std::stack<T>
{
	public:
		typedef typename std::deque<T>::iterator iterator;
		typedef typename std::deque<T>::const_iterator const_iterator;
		typename MutantStack<T>::iterator begin();
		typename MutantStack<T>::iterator end();
		MutantStack();
		MutantStack( MutantStack<T> const &src );
		~MutantStack();
		MutantStack &operator=( MutantStack<T> const &rhs );
};
#endif /* ***************************************************** MUTANTSTACK_H */