/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 11:38:55 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/18 15:15:29 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA
# define AMATERIA
# include "Icharacter.hpp"
# include <iostream>

class AMateria
{
	protected:
		std::string type;
	public:
	AMateria();
	AMateria(std::string const & type);
	AMateria(AMateria const &old);
	virtual AMateria &operator=(const AMateria &old);
	virtual ~AMateria() = 0;
	std::string const & getType() const; //Returns the materia type
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif