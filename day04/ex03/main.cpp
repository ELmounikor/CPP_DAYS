/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 12:10:18 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/20 15:15:49 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "MateriaSource.hpp"
# include "Character.hpp"
# include "Ice.hpp"
# include "Cure.hpp"

int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
	
	ICharacter* me = new Character("me");
	
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	
    ICharacter* bob = new Character("bob");
	
    me->use(0, *bob);
    me->use(1, *bob);
	
    // ICharacter* alice = new Character("alice");
	
    // tmp = src->createMateria("ice");
    // alice->equip(tmp);
    // tmp = src->createMateria("cure");
    // alice->equip(tmp);
    // tmp = src->createMateria("ice");
    // alice->equip(tmp);
    // tmp = src->createMateria("ice");
    // alice->equip(tmp);
    // tmp = src->createMateria("cure");
    // alice->equip(tmp);
	
    // alice->use(2, *bob);
    // alice->use(3, *bob);
    // alice->use(4, *bob); 
    // tmp = src->createMateria("cure");
    // bob->equip(tmp);
    // tmp = src->createMateria("ice");
    // bob->equip(tmp);
    // tmp = src->createMateria("ice");
    // bob->equip(tmp);
    // bob->use(0, *alice);
    // bob->use(1, *alice);
    // bob->use(2, *alice);
    // bob->use(3, *alice);
    // bob->use(4, *alice);
    // delete alice;
    delete me;
    delete bob;
    delete src;
}
