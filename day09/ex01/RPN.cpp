/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 11:35:16 by mel-kora          #+#    #+#             */
/*   Updated: 2023/03/24 18:01:39 by mel-kora         ###   ########.fr       */
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
	int i = 0;

	while (input && input[i])
	{
		if (isdigit(input[i]))
			this->numbers.push(input[i] - '0');
		else if (input[i] == '*' || input[i] == '/' || input[i] == '+' || input[i] == '-')
			calculate(input[i]);
		else if (!isspace(input[i]))
			ft_exit("Error: bad token 🤡");
		i++;
	}
	if (this->numbers.size() != 1)
		ft_exit("Error: invalid input, not enough operations 🤡");
}

RPN::RPN(const RPN &src): numbers(src.numbers)
{
}

RPN::~RPN()
{
}

RPN	&RPN::operator=(RPN const &rhs)
{
	if ( this != &rhs )
		this->numbers = rhs.numbers;
	return *this;
}

void	RPN::calculate(char operation)
{
	long double operand1;
	long double operand2;
	
	if (this->numbers.size() < 2)
		ft_exit("Error: invalid input, not enough operands to perform an operation 🤡");
	operand2 = this->numbers.top();
	this->numbers.pop();
	operand1 = this->numbers.top();
	this->numbers.pop();
	// std::cout << "calculating (" << operand1 << ") " << operation  << " ("<< operand2 << ")";
	switch (operation)
	{
		case '+':
			operand1 += operand2;
			break;
		case '-':
			operand1 -= operand2;
			break;
		case '*':
			operand1 *= operand2;
			break;
		case '/':
			operand1 /= operand2;
			break;
	}
	// std::cout << " = " << operand1 << "\n";
	if (operand1 > INT_MAX || operand1 < INT_MIN)
		ft_exit("Error: the result is not an integer 🤯 >> " + std::to_string(operand1));
	this->numbers.push((int)operand1);
}

int	RPN::get_result()
{
	return (this->numbers.top());
}
