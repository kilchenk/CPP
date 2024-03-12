/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 16:20:20 by kilchenk          #+#    #+#             */
/*   Updated: 2024/03/04 15:39:02 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
	#define PHONE_BOOK_HPP

# define RE_TERMINAL	std::cout << "\e[1;1H\e[2J"
#include <string>
#include <iostream>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact	_arrContact[8];
	public:
		void	out(std::string txt);
		void	outSearch(std::string txt);
		void	searchContakt(int indexnb);
		void	pushData(Contact &data);
		void	addContact();
		int		index;
	public:
		PhoneBook();
		~PhoneBook();
	
};

#endif