/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 10:25:00 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/17 18:18:31 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"

class  ScavTrap : virtual public ClapTrap
{
    protected:
        unsigned int energy_pts;
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(ScavTrap const &old);
        virtual ~ ScavTrap();
		ScavTrap &operator=(const ScavTrap &old);
		void attack(const std::string& target);
        void guardGate();
};

#endif
