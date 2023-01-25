/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 16:49:33 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/24 18:00:56 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t serialize(Data* ptr)
{
    return(reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
    return(reinterpret_cast<Data *>(raw));
}

int main()
{
    Data data;
    std::cout << sizeof(data) << std::endl;
    std::cout << data.a << std::endl;
    std::cout << data.b << std::endl;
    std::cout << data.c << std::endl;
    std::cout << data.d << std::endl;
    uintptr_t  ptr = serialize(&data);
    
}