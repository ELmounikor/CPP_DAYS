/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 21:16:07 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/27 13:59:48 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ARRAY_HPP
# define _ARRAY_HPP
# include <iostream>

template <typename T> 
class Array
{
	private:
		T *elements;
		unsigned int num_of_elements;
	public:
		Array();
		Array(unsigned int N);
		Array(Array<T> const &old);
		~Array();
		Array<T> &operator=(const Array<T> &old);
		T& operator[](unsigned int index);
		unsigned int size() const;
		class  IndexIsOutOfBounds;
};

template <class T> void print_me(T *array, unsigned int length)
{
	for (unsigned int i = 0 ; i < length ; i++)
		std::cout << array[i] << "\t"; 
	std::cout << std::endl;
}

#endif