/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 10:25:00 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/15 12:29:58 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"

class  ScavTrap : public ClapTrap
{
    public:
        ScavTrap(std::string name);
        ScavTrap(ScavTrap const &old);
        ~ ScavTrap();
		ScavTrap &operator=(const ScavTrap &old);
		void attack(const std::string& target);
        void guardGate();
};

#endif
