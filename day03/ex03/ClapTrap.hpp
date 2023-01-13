/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 12:21:35 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/13 12:01:31 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
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
		std::string getName(void);
		int getHit_pts(void);
		int getEnergy_pts(void);
		int getAttack_dmg(void);
		void setName(std::string name);
		void setHit_pts(int amount);
		void setEnergy_pts(int amount);
		void setAttack_dmg(int amount);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif