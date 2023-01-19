/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 12:10:18 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/19 15:59:48 by mel-kora         ###   ########.fr       */
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
    ICharacter* Alice = new Character("Alice");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    Alice->equip(tmp);
    tmp = src->createMateria("cure");
    Alice->equip(tmp);
    Alice->equip(tmp);
    Alice->equip(tmp);
    Alice->equip(tmp);
    Alice->equip(tmp);
    Alice->equip(tmp);
    tmp = src->createMateria("ice");
    tmp = src->createMateria("ice");
    tmp = src->createMateria("ice");
    tmp = src->createMateria("ice");
    tmp = src->createMateria("ice");
    tmp = src->createMateria("ice");
    ICharacter* bob = new Character("bob");
    Alice->use(0, *bob);
    Alice->use(1, *bob);
    Alice->use(2, *bob);
    Alice->use(3, *bob);
    Alice->use(4, *bob); 
    tmp = src->createMateria("cure");
    bob->equip(tmp);
    tmp = src->createMateria("ice");
    bob->equip(tmp);
    tmp = src->createMateria("ice");
    bob->equip(tmp);
    bob->use(0, *Alice);
    bob->use(1, *Alice);
    bob->use(2, *Alice);
    bob->use(3, *Alice);
    bob->use(4, *Alice); 
    delete bob;
    delete Alice;
    delete src;
    // system("leaks BloodyWar");
}
