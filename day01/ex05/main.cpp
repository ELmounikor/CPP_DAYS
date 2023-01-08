/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 17:47:45 by mounikor          #+#    #+#             */
/*   Updated: 2023/01/08 19:18:47 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl karen;
    std::string level = "bzav";//DEBUG  ERROR 
    karen.complain(level);
    karen.complain("INFO");
    karen.complain("WARNING");
}