/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 11:53:19 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/18 17:04:18 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CURE
# define CURE
# include "AMateria.hpp"

class Cure: public AMateria
{
    public:
        Cure();
        Cure(Cure const &old);
        Cure &operator=(const Cure &old);
        ~Cure();
        AMateria* clone() const;
};

#endif