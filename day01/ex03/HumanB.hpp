/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounikor <mounikor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 14:30:41 by mounikor          #+#    #+#             */
/*   Updated: 2023/01/03 16:15:02 by mounikor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"

class HumanB{
	private :
		std::string name;
		Weapon      *weapon = NULL;
	public :
		HumanB(std::string name);
		HumanB(std::string name, Weapon &the_weapon);
		void setWeapon( Weapon &new_weapon);
		void attack(void);
		~HumanB(void);
};

#endif