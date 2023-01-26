/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 19:18:48 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/26 10:49:31 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WHATEVER_HPP
# define _WHATEVER_HPP

template <class T> void swap (T &a, T &b)
{
    T tmp;
    tmp = a;
    a = b;
    b = tmp;
}

template <class T> T min (T a, T b)
{
    if (a < b)
        return (a);
    return (b);
}

template <class T> T max (T a, T b)
{
    return (a > b ? a : b);
}
#endif