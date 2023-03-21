/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 11:35:16 by mel-kora          #+#    #+#             */
/*   Updated: 2023/03/21 17:11:55 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{
}

void	ft_exit(std::string msg)
{
	std::cout << "\033[0;91m" << msg << "\033[0m\n";
	::exit(1);
}

RPN::RPN(char *input)
{
	char *token;

	token = strtok(input, " ");
	while (token)
	{
		if (token[1] != 0)
			ft_exit("Error: bad token 🤡");
		if (isdigit(token[0]))
			this->expression.push_back(token[0] - '0');
		else if (token[0] == '*' || token[0] == '/' || token[0] == '+' || token[0] == '-')
			this->expression.push_back(token[0]);
		else
			ft_exit("Error: bad token 🤡");
		token = strtok(NULL, " ");
	}
	if (this->expression.size() == 0)
		ft_exit("Error: invalid input 🤡");
	std::list<int>::iterator i = this->expression.begin();
	unsigned int j = 0;
	while (i != this->expression.end())
	{
		if (*i > 10)
		{
			if (!j || j % 2)
				ft_exit("Error: parse error 🤡");
		}
		else
		{
			if (j && j % 2 == 0)
				ft_exit("Error: parse error 🤡");
		}
		i++;
		j++;
	}
	if (this->expression.size() > 1 && (*(--i)) < 10)
		ft_exit("Error: parse error 🤡");
}

RPN::RPN(const RPN &src): expression(src.expression)
{
}

RPN::~RPN()
{
}

RPN	&RPN::operator=(RPN const &rhs)
{
	if ( this != &rhs )
		this->expression = rhs.expression;
	return *this;
}

void	RPN::print_tokens()
{
	std::list<int>::iterator i = this->expression.begin();
	while (i != this->expression.end())
	{
		std::cout << (*i) << std::endl;
		i++;
	}
}

int	RPN::calculate()
{
	std::list<int>::iterator i = this->expression.begin();
	int result = *i;

	while (++i != this->expression.end())
	{
		int	operand = *i;
		int operation = *(++i);
		switch (operation)
		{
			case '+':
				result += operand;
				break;
			case '-':
				result -= operand;
				break;
			case '*':
				result *= operand;
				break;
			case '/':
				result /= operand;
				break;
		}
	}
	return (result);
}
