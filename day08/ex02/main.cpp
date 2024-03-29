/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 13:22:40 by mel-kora          #+#    #+#             */
/*   Updated: 2023/02/03 10:47:44 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.tpp"

int	main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "\033[1;93m-----------------------------------------------------------\033[0m\n";
	std::cout << "top of mstack: " <<mstack.top() << std::endl;
	std::cout << "size of mstack: " << mstack.size() << std::endl;
	std::cout << "\033[1;93m-----------------------------------------------------------\033[0m\n";
	mstack.pop();
	std::cout << "top of mstack: " <<mstack.top() << std::endl;
	std::cout << "size of mstack: " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	// srand(time(NULL));
    // for (int i = 0; i < 5; i++)
    // {
    // 	const int value = rand();
	// 	mstack.push(value);
    // }
	std::cout << "\033[1;93m-----------------------------------------------------------\033[0m\n";
	std::cout << "top of mstack: " <<mstack.top() << std::endl;
	std::cout << "size of mstack: " << mstack.size() << std::endl;
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{          
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	std::cout << "\033[1;93m-----------------------------------------------------------\033[0m\n";
	
	MutantStack<int> mstack_copy(mstack);
	std::cout << "size of mstack_copy: " << mstack_copy.size() << std::endl;
	std::cout << "size of mstack: " << mstack.size() << std::endl;
	it = mstack_copy.begin();
	ite = mstack_copy.end();
	while (it != ite)
	{
		std::cout << *it << std::endl;
		mstack.pop();
		++it;
	}
	std::cout << "size of mstack_copy: " << mstack_copy.size() << std::endl;
	std::cout << "size of mstack: " << mstack.size() << std::endl;
	
	std::cout << "\033[1;93m-----------------------------------------------------------\033[0m\n";
	mstack = mstack_copy;
	std::cout << "size of mstack_copy: " << mstack_copy.size() << std::endl;
	std::cout << "size of mstack: " << mstack.size() << std::endl;
	it = mstack_copy.begin();
	ite = mstack_copy.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		mstack.pop();
		++it;
	}
	std::cout << "size of mstack_copy: " << mstack_copy.size() << std::endl;
	std::cout << "size of mstack: " << mstack.size() << std::endl;
	std::cout << "\033[1;93m-----------------------------------------------------------\033[0m\n";
	return 0;
}