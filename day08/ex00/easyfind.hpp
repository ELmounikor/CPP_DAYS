/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 19:10:25 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/30 16:50:20 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _easyfind_hpp 
# define _easyfind_hpp
# include <iostream>
# include <algorithm>
# include <array>
# include <list>
# include <vector>

class ElementNotFound: public std::exception
{
	const char* what() const throw()
	{
		return ("\033[1;91mElement Not Found!\033[0m");
	}
};

template <class T>
int &easyfind(T container, int to_find)
{
    typename T::iterator i;
    for (i = container.begin(); i != container.end(); i++)
    {
        if (*i == to_find)
            return(*i);
    }
    throw ElementNotFound();
}



#endif