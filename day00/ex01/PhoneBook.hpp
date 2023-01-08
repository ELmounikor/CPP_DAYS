/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mel-kora <mel-kora@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 23:35:48 by mel-kora          #+#    #+#             */
/*   Updated: 2023/01/08 11:53:08 by mel-kora         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_H
# define PHONE_BOOK_H
# include "Contact.hpp"

class PhoneBook {
	private:
		Contact	contacts[8];
		int		index;
		int		adding;
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void	add(void);
		void	display(void);
		void	display_info(int i);
		void	print_column(std::string str);
		void	search(void);
		void	exit(void);
};

#endif
