/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 21:52:49 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/27 14:01:30 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ARRAY_TPP
# define _ARRAY_TPP
#include "Array.hpp"

template <typename T> Array<T>::Array()
{
	this->num_of_elements = 0;
	this->elements = new T[0];
}

template <typename T> Array<T>::Array(unsigned int N)
{
	this->num_of_elements = N;
	this->elements = new T[N];
	T  *tmp = new T();
	for (unsigned int i = 0 ; i < N ; i++)
		this->elements[i] = *tmp;
	delete tmp;
}

template <typename T> Array<T>::Array(Array<T> const &old)
{
	this->num_of_elements = old.num_of_elements;
	this->elements = new T[old.num_of_elements];
	for (unsigned int i = 0 ; i < old.num_of_elements ; i++)
		this->elements[i] = old.elements[i];
}

template <typename T> Array<T>::~Array()
{
	delete [] this->elements;
}


template <typename T> 
Array<T> & Array<T>::operator=(const Array<T> &old)
{
	if (this != &old)
	{
		delete [] this->elements;
		this->num_of_elements = old.num_of_elements;
		this->elements = new T[old.num_of_elements];
		for (unsigned int i = 0 ; i < old.num_of_elements ; i++)
			this->elements[i] = old.elements[i];
	}
	return (*this);
}

template <typename T> unsigned int Array<T>::size() const
{
	return (this->num_of_elements);
}

template <typename T> 
T& Array<T>::operator[](unsigned int index)
{
	if (index >= this->num_of_elements)
		throw IndexIsOutOfBounds();
	return (this->elements[index]);
}

template <typename T> 
class Array<T>::IndexIsOutOfBounds: public std::exception
{
	const char* what() const throw()
	{
		return ("\033[1;91mIndex Is Out Of Bounds!\033[0m");
	}
};

#endif