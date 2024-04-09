/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 14:13:11 by kilchenk          #+#    #+#             */
/*   Updated: 2024/04/09 14:41:48 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
	#define CONTACT_HPP

#include <string>
#include <iostream>

class Contact
{
	public:
	    Contact();
        ~Contact();
		Contact(const std::string fn, const std::string ln, const std::string nn, const std::string nb, const std::string ds);
		void	Names(int i);
		void	printConatct();

	private:
		std::string _index;
		std::string _firstname;
		std::string _lastname;
		std::string _nickname;
		std::string _number;
		std::string _secret;
	
};

#endif