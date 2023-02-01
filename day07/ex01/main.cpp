/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 20:43:30 by mel-kora          #+#    #+#             */
/*   Updated: 2023/02/01 16:21:31 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void    double_it(int &i)
{
    i *= 2;
}

void    toupper_it(char &i)
{
    i = toupper(i);
}

void	print_it(std::string const &word)
{
	std::cout << word << "\t";
}

int main()
{
    int array1[] = {1, 2, 3, 4, 5, 6, 7};
    print_me(array1, 7);
    ::iter(array1, 7, &double_it);
    print_me(array1, 7);
	std::cout << "\033[1;93m-----------------------------------------------------------\033[0m\n";
    char array2[] = {'a', 'b', 'c', 'd', 'e'};
    print_me(array2, 5);
    ::iter(array2, 5, &toupper_it);
    print_me(array2, 5);
	std::cout << "\033[1;93m-----------------------------------------------------------\033[0m\n";
    std::string array3[] = {"salam", "labas", "Bikhir"};
    ::iter(array3, 3, &print_it);
}

// using namespace std;

// template <class T>
// void print_that(T size)
// {
//       cout << size;
// }
 
// template <class T>
// void sort(T arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//       cout << arr[i];
// }
 
// template <>
// void sort<char>(char arr[], int size)
// {
//     for (int i = size - 1 ; i >=0 ; i--)
//       cout << arr[i];
// }

// int main() {
//   int array1[] = {1, 2, 3, 4, 5, 6, 7};
//     sort(array1, 7);
//     std::cout << "\033[1;93m-----------------------------------------------------------\033[0m\n";
//     char array2[] = {'a', 'b', 'c', 'd', 'e'};
//     sort(array2, 5);
//     ::iter(array2, 5, &print_that);
//   return 0;
// }