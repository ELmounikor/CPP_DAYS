/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 14:06:03 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/25 15:45:15 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void)
{
    int random;
    
	srand(time(NULL));
	random = rand() % 3;
    switch(random)
    {
        case 0: return(new A());
        break;
        case 1: return(new B());
        break;
        case 2: return(new C());
        break;
        default: return(new Base());
    }
}

void identify(Base* p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "A\n";
    else if (dynamic_cast<B*>(p))
        std::cout << "B\n";
    else if (dynamic_cast<C*>(p))
        std::cout << "C\n";
    else
        std::cout << "another type (an ordinary Base or NULL maybe)\n";
}

void identify(Base& p)
{
    Base tmp;
    // if (&p == (Base*)NULL)
    // {
    //     std::cout << "NULL?! Why would you check that!";
    //     return ;
    // }
    try
    {
        tmp = dynamic_cast<A&>(p);
        std::cout << "A\n";
        return ;
    } catch(std::bad_cast exp){
        try
        {
            tmp = dynamic_cast<B&>(p);
            std::cout << "B\n";
            return ; 
        }catch(std::bad_cast exp){
            try
            {
                tmp = dynamic_cast<C&>(p);
                std::cout << "C\n";
                return ;
            } catch(std::bad_cast exp){}
            std::cout << "another type (an ordinary Base maybe)\n";
        }
    }
}

int main()
{
    Base *Unknown = generate();
    identify(Unknown);
    identify(*Unknown);
    delete Unknown;
}