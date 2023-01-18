/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 11:53:53 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/18 13:43:09 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE
# define ICE
# include "AMateria.hpp"

class Ice: public AMateria
{
    public:
        Ice();
        Ice(std::string const & type);
        Ice(Ice const &old);
        Ice &operator=(const Ice &old);
        ~Ice();
        AMateria* clone() const;
};

#endif
