/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounikor <mounikor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 14:11:12 by mounikor          #+#    #+#             */
/*   Updated: 2023/01/03 16:14:54 by mounikor         ###   ########.fr       */
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