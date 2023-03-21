/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 11:35:19 by mel-kora          #+#    #+#             */
/*   Updated: 2023/03/21 16:54:42 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP
# include <iostream>
# include <string>
# include <list>

class RPN
{
	private:
		std::list<int> expression;
		RPN();
		RPN(RPN const &src);
	public:
		RPN(char *input);
		~RPN();
		RPN		&operator=(RPN const &rhs);
		void	print_tokens();
		int		calculate();
};

#endif