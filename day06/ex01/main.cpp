/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 16:49:33 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/26 15:26:26 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include "stdlib.h"

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
	uintptr_t  ptr;
	{
		Data data;
	
		data.a = 5;
		data.b = 18;
		data.c = 'M';
		data.d = 1;
		data.e = "Mounia";
		data.f = 1337.42f;
		ptr = serialize(&data);
		std::cout << "sizeof(data):" <<  sizeof(data) << std::endl;
		std::cout << "sizeof(ptr):" << sizeof(ptr) << std::endl;
	}
	Data *data_retrieving = deserialize(ptr);
	std::cout << "sizeof(data retrieving):" << sizeof(*data_retrieving) << std::endl;
	std::cout << "a = " << data_retrieving->a << std::endl;
	std::cout << "b = " << data_retrieving->b << std::endl;
	std::cout << "c = " << data_retrieving->c << std::endl;
	std::cout << "d = " << data_retrieving->d << std::endl;
	std::cout << "e = " << data_retrieving->e << std::endl;
	std::cout << "f = " << data_retrieving->f << std::endl;
}
