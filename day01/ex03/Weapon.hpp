/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounikor <mounikor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 12:20:28 by mounikor          #+#    #+#             */
/*   Updated: 2023/01/03 15:48:45 by mounikor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>

class Weapon {
    private :
        std::string type;
    public :
        Weapon(std::string type);
        ~Weapon(void);
        std::string getType(void);
        void setType(std::string new_type);
};

#endif