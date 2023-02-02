/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 14:44:10 by mel-kora          #+#    #+#             */
/*   Updated: 2023/02/02 13:31:38 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP
# include <iostream>
# include <stack>
# include <vector>

template <typename T>
class MutantStack: public std::stack<T>
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