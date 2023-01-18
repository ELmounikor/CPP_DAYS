/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 11:56:20 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/18 16:08:16 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER
# define CHARACTER
# include "Icharacter.hpp"
# include "IMateriaSource.hpp"

class Character: public ICharacter
{
	private:
		std::string name;
		AMateria	*skills[4];
		int			num_of_skills;
	public:
		Character();
		Character(std::string const & type);
		Character(Character const &old);
		Character &operator=(const Character &old);
		std::string const & getName() const;
		~Character();
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
		
};

#endif
