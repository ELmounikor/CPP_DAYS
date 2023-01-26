/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 20:44:11 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/26 15:59:41 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ITER_HPP
# define _ITER_HPP
#include <iostream>

template <typename T> void iter (T *array, unsigned long length, void (*fct)(T&))
{
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