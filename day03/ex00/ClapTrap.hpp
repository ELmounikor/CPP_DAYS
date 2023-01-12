/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 12:21:35 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/12 12:31:29 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H
# include <iostream>

class ClapTrap
{
private:
    std::string name;
    int         hit_pts;
    int         energy_pts;
    int         attack_dmg;
public:
    ClapTrap(std::string name);
    ~ClapTrap();
};

ClapTrap::ClapTrap(std::string name)
{
    this->name = name;
}

ClapTrap::~ClapTrap()
{
}



#endif