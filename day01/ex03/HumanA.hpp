/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 14:11:12 by mounikor          #+#    #+#             */
/*   Updated: 2023/01/08 19:06:38 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"

class HumanA{
	private :
		std::string name;
		Weapon      &weapon;
	public :
		HumanA(std::string name, Weapon &the_weapon);
		void setWeapon(Weapon &new_weapon);
		void attack(void);
		~HumanA(void);
};

#endif