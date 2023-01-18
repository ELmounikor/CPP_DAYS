/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 11:53:53 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/18 17:04:23 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE
# define ICE
# include "AMateria.hpp"

class Ice: public AMateria
{
    public:
        Ice();
        Ice(Ice const &old);
        Ice &operator=(const Ice &old);
        ~Ice();
        AMateria* clone() const;
};

#endif
