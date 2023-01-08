/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 14:46:47 by mounikor          #+#    #+#             */
/*   Updated: 2023/01/08 19:06:26 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void){

    // initializing variables
    std::string stringVAR = "HI THIS IS BRAIN";
    std::string *stringPTR = &stringVAR;
    std::string &stringREF = stringVAR;
    
    // viewing memory addresses
    std::cout << &stringVAR <<std::endl;
    std::cout << stringPTR <<std::endl;
    std::cout << &stringREF <<std::endl;
    
    // viewing values
    std::cout << stringVAR <<std::endl;
    std::cout << *stringPTR <<std::endl;
    std::cout << stringREF <<std::endl;
    
}