/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 13:20:04 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/15 12:31:27 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"

class  FragTrap : virtual public ClapTrap
{
    public:
        FragTrap(std::string name);
        FragTrap(FragTrap const &old);
        virtual ~ FragTrap();
		FragTrap &operator=(const FragTrap &old);
        void highFivesGuys();
};

#endif