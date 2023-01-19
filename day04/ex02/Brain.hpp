/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 16:53:32 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/19 14:37:28 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>

class Brain
{
	protected:
		std::string ideas[100];
	public:
		Brain();
		Brain(Brain const &old);
		Brain &operator=(const Brain &old);
		std::string *getIdeas(void);
		std::string getIdea(int i) const;
		void setIdea(int i, std::string idea);
		virtual ~Brain();
};

#endif