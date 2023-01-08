/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 22:32:55 by mounikor          #+#    #+#             */
/*   Updated: 2023/01/08 19:05:57 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H
# include <iostream>
# include <stdlib.h>

class Zombie {
	
	private:
		std::string	name;
	
	public:
		Zombie(std::string name);
		~Zombie(void);
        void announce( void );
};

#endif
