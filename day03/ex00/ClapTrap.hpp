/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 12:21:35 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/12 14:33:02 by mel-kora         ###   ########.fr       */
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
    ClapTrap(ClapTrap const &old);
    ClapTrap &operator=(const ClapTrap &old);
    ~ClapTrap();
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

ClapTrap::ClapTrap(std::string name)
{
    this->name = name;
    hit_pts = 10;
    energy_pts = 10;
    attack_dmg = 0;
}

ClapTrap::ClapTrap(ClapTrap const &old)
{
    this->name = old.name;
    this->hit_pts = old.hit_pts;
    this->energy_pts = old.energy_pts;
    this->attack_dmg = old.attack_dmg;
}

ClapTrap::~ClapTrap()
{
}

ClapTrap &ClapTrap::operator=(const ClapTrap &old)
{
    this->name = old.name;
    this->hit_pts = old.hit_pts;
    this->energy_pts = old.energy_pts;
    this->attack_dmg = old.attack_dmg;
    return (*this);
}

void ClapTrap::attack(const std::string& target)
{
    
}

void ClapTrap::takeDamage(unsigned int amount)
{
    
}

void ClapTrap::beRepaired(unsigned int amount)
{
    
}

#endif