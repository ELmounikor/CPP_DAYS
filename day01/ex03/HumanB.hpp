/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 14:30:41 by mounikor          #+#    #+#             */
/*   Updated: 2023/01/08 19:11:37 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"

class HumanB{
	private :
		std::string name;
		Weapon      *weapon;
	public :
		HumanB(std::string name);
		HumanB(std::string name, Weapon &the_weapon);
		void setWeapon( Weapon &new_weapon);
		void attack(void);
		~HumanB(void);
};

#endif