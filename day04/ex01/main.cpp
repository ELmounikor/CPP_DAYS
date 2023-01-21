/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:09:43 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/21 18:41:32 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
//     unsigned int n = 3;
//     Animal *array[n];
//     for (unsigned int i = 0 ; i < n ; i++)
//     {
//         if (i % 2)
//             array[i] = new Cat();
//         else
//             array[i] = new Dog();
//     }
//     for (unsigned int i = 0 ; i < n ; i++)
//         array[i]->makeSound();

//     for (unsigned int i = 0 ; i < n ; i++)
//         delete array[i];

    // const Animal* meta = new Animal();
    // const Animal* j = new Dog();
    // const Animal* i = new Cat();
    // std::cout << j->getType() << " " << std::endl;
    // std::cout << i->getType() << " " << std::endl;
    // i->makeSound(); //will output the cat sound!
    // j->makeSound(); //will output the dog sound!
    // delete i;
    // delete j;
    // delete meta;

    
    // Cat *a = new Cat();
    // a->getBrain()->setIdea(0, "hello");
    // Cat *b = new Cat(*a);
    // std::cout << a->getBrain()->getIdeas()[0] << std::endl;
    // std::cout << b->getBrain()->getIdeas()[0] << std::endl;
    // a->getBrain()->getIdeas()[0]  = "hey";
    // std::cout << a->getBrain()->getIdeas()[0]  << std::endl;
    // std::cout << b->getBrain()->getIdeas()[0]  << std::endl;
    // *a = *b;
    // std::cout << a->getBrain()->getIdeas()[0]  << std::endl;
    // std::cout << b->getBrain()->getIdeas()[0]  << std::endl;
    // a->getBrain()->getIdeas()[0]  = "mounia";
    // std::cout << a->getBrain()->getIdeas()[0]  << std::endl;
    // std::cout << b->getBrain()->getIdeas()[0]  << std::endl;
    // delete a;
    // delete b;
    Dog basic;
        std::cout<<"       start            "<<std::endl;
            {
                Dog tmp = basic;
            }
        std::cout<<" end                  "<<std::endl;
    return 0;
}
