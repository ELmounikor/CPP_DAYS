/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 14:44:14 by mel-kora          #+#    #+#             */
/*   Updated: 2023/02/02 15:32:28 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

template <typename T>
MutantStack<T>::MutantStack()
{
}

template <typename T>
MutantStack<T>::MutantStack( const MutantStack<T> &src ): std::stack<T>(src)
{
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

template <typename T>
MutantStack<T>::~MutantStack()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

template <typename T>
MutantStack<T> &MutantStack<T>::operator=( MutantStack<T> const &rhs )
{
	if ( this != &rhs )
	{
		this->c = rhs.c;
	}
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::begin()
{
	return(this->c.begin());
}

template <typename T>
typename MutantStack<T>::iterator	MutantStack<T>::end()
{
	return(this->c.end());
}

/* ************************************************************************** */