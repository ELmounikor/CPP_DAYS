/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 14:06:03 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/25 19:01:56 by mel-kora         ###   ########.fr       */
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
        std::cout << "another type (an ordinary Base maybe)\n";
}

void identify(Base& p)
{
    Base tmp;

    try
    {
        tmp = dynamic_cast<A&>(p);
        std::cout << "A\n";
        return ;
    } catch(...){
        try
        {
            tmp = dynamic_cast<B&>(p);
            std::cout << "B\n";
            return ; 
        }catch(...){
            try
            {
                tmp = dynamic_cast<C&>(p);
                std::cout << "C\n";
                return ;
            } catch(...){}
            std::cout << "another type (an ordinary Base maybe)\n";
        }
    }
}

// class H {
//     public:
//         virtual ~H(){}
// };

// class E : public H {};

// class O {
//     public:
//         virtual ~O(){}
// };

int main()
{
    Base *Unknown = generate();
    identify(Unknown);
    identify(*Unknown);
    delete Unknown;


    // E *h = new E;
    // // O e;

    // if (dynamic_cast<E*>(h))
    //     std::cout << "SUCCESS" << std::endl;
    // else
    //     std::cout << "FAILED" << std::endl;

}