/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 12:20:28 by mounikor          #+#    #+#             */
/*   Updated: 2023/01/09 16:59:34 by mel-kora         ###   ########.fr       */
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
        const std::string &getType(void);
        void setType(std::string new_type);
};

#endif