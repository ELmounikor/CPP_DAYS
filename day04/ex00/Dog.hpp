/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:27:03 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/17 13:31:38 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"
# include <iostream>

class Dog : public Animal
{
	public:
		Dog();
		Dog(Dog const &old);
		Dog &operator=(const Dog &old);
		virtual ~Dog();
		void makeSound();
};

#endif