/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:21:09 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/17 13:30:06 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"
# include <iostream>

class Cat : public Animal
{
	public:
		Cat();
		Cat(Cat const &old);
		Cat &operator=(const Cat &old);
		virtual ~Cat();
		void makeSound();
};

#endif