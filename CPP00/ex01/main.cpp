/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 15:30:31 by kilchenk          #+#    #+#             */
/*   Updated: 2024/02/29 17:14:47 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

void	rules()
{
		std::cout << std::endl << "		+~~~~~~~~~~~~~~~~~~~~~~+" << std::endl;
		std::cout << "		|   " << "ENTER THE COMMAND" << "  |" << std::endl;
		std::cout << "		+~~~~~~~~~~~~~~~~~~~~~~+" << std::endl;
		std::cout << std::endl << "	+~~~~~~~+    +~~~~~~~~~~+    +~~~~~~~~+" << std::endl;
		std::cout << "	|  " << "Add" << "  |    |  " << "Saerch" << "  |    |  " << "Exit" << "  |" << std::endl;
		std::cout << "	+~~~~~~~+    +~~~~~~~~~~+    +~~~~~~~~+" << std::endl;
		std::cout << "	|  " << "-a" << "   |    |    " << "-s" << "    |    |   " << "-e " << "  |" << std::endl;
		std::cout << "	+~~~~~~~+    +~~~~~~~~~~+    +~~~~~~~~+" << std::endl;
}

int main()
{
	PhoneBook	Book;
	std::string input;
	RE_TERMINAL;
	while (1)
	{
		rules();
		while (input.empty())
			std::getline(std::cin, input);
		RE_TERMINAL;
		if (input == "-a")
			Book.addContact();
		if (input == "-s")
			Book.searchContakt(1);
		else if (input == "-e")
			break;
		input.clear();
	}
	return 0;
}
