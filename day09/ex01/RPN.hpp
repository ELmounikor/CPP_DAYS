/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 11:35:19 by mel-kora          #+#    #+#             */
/*   Updated: 2023/03/22 15:45:30 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP
# include <iostream>
# include <limits.h>
# include <stack>

class RPN
{
	private:
		std::stack<double> numbers;
		RPN(RPN const &src);
		RPN();
	public:
		RPN(char *input);
		~RPN();
		RPN		&operator=(RPN const &rhs);
		void 	calculate(char operation);
		int		get_result();
};

#endif