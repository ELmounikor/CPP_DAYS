/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 15:33:05 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/18 15:39:32 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MS
# define MS
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    public:
		MateriaSource();
		MateriaSource(MateriaSource const &old);
		MateriaSource &operator=(const MateriaSource &old);
        ~IMateriaSource() {}
        void learnMateria(AMateria*) = 0;
        AMateria* createMateria(std::string const & type) = 0;
};

#endif