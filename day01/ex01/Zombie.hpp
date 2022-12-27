/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounikor <mounikor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 22:32:55 by mounikor          #+#    #+#             */
/*   Updated: 2022/12/27 12:13:18 by mounikor         ###   ########.fr       */
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
		Zombie(void);
		~Zombie(void);
		void set_name(std::string name);
        void announce( void );
};

#endif
