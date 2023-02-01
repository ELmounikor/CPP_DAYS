/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 20:44:11 by mel-kora          #+#    #+#             */
/*   Updated: 2023/02/01 16:21:36 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ITER_HPP
# define _ITER_HPP
#include <iostream>

template <typename T> void iter (T *array, unsigned long length, void (*fct)(const T&))
{
	if (!array || !length || !fct)
		return ;
	for (unsigned long i = 0 ; i < length ; i++)
		fct(array[i]);
}

template <typename T> void iter (T *array, unsigned long length, void (*fct)(T&))
{
	if (!array || !length || !fct)
		return ;
	for (unsigned long i = 0 ; i < length ; i++)
		fct(array[i]);
}

template <class T> void print_me(T *array, unsigned long length)
{
	for (unsigned long i = 0 ; i < length ; i++)
		std::cout << array[i] << "\t"; 
	std::cout << std::endl; 
}

#endif