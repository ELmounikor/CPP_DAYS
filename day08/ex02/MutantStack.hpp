/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 14:44:10 by mel-kora          #+#    #+#             */
/*   Updated: 2023/02/01 15:04:51 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <iostream>
# include <stack>

template <typename T>
class MutantStack<T>: public std::stack<T>
{
	public:
		typename MutantStack<T>::iterator	begin();
		typename MutantStack<T>::iterator	end();
		MutantStack();
		MutantStack( MutantStack const & src );
		~MutantStack();
		MutantStack &operator=( MutantStack const & rhs );
};
#endif /* ***************************************************** MUTANTSTACK_H */