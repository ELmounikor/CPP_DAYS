/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 12:43:58 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/17 16:50:43 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		Animal(Animal const &old);
		Animal &operator=(const Animal &old);
		std::string getType() const;
		virtual ~Animal();
		virtual void makeSound(void) const;
};

#endif