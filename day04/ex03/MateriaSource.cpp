/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 15:29:32 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/19 15:52:37 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	this->num_of_materia = 0;
	for (int i = 0; i < 4 ; i++)
		this->materia[i] = NULL;
	// std::cout << "\033[0;93mMateriaSource has been created\n\033[0m";
}

MateriaSource::MateriaSource(MateriaSource const &old)
{
	this->num_of_materia = old.num_of_materia;
	for (int i = 0; i < 4 ; i++)
		this->materia[i] = old.materia[i];
	// std::cout << "\033[0;93mMateriaSource has been created\n\033[0m";
}

MateriaSource &MateriaSource::operator=(const MateriaSource &old)
{
	if (this != &old)
	{
		this->num_of_materia = old.num_of_materia;
		for (int i = 0; i < 4 ; i++)
			this->materia[i] = old.materia[i];
	}
	return(*this);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4 ; i++)
	{
		if (this->materia[i])
			delete this->materia[i];
	}
	// std::cout << "\033[0;33mMateriaSource has been Destroyed\n\033[0m";
}

void MateriaSource::learnMateria(AMateria* m)
{
	if (this->num_of_materia < 4)
	{
		int i = 0;
		while (this->materia[i])
			i++;
		if (m)
		{
			this->materia[i] = m;
			this->num_of_materia++;
		// std::cout << "\033[1;33m"<< m->getType() << " added succefully\n\033[0m";
		}
	}
	else
		std::cout << "\033[1;33m-> no more materia slots left in MateriaSource\n\033[0m";
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	int i = 0;
	while (i < this->num_of_materia && this->materia[i]->getType() != type)
		i++;
	if (i == this->num_of_materia)
	{
		std::cout << "\033[1;33m-> there is no "<< type <<" materia in MateriaSource learned yet\n\033[0m";
		return(NULL);	
	}
	return (this->materia[i]);
}

