/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 13:25:42 by kilchenk          #+#    #+#             */
/*   Updated: 2024/03/04 17:06:57 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

void	PhoneBook::out(std::string txt)
{
	std::cout << std::endl << "+~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~+" << std::endl;
	std::cout << (txt.size() > 16 ? "	" : "		");
	std::cout << ">>>" << txt << "<<<" << std::endl;
	std::cout << "+~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~+" << std::endl << std::endl;
}

void	PhoneBook::outSearch(std::string txt)
{
	std::cout << std::endl << "+~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~+" << std::endl;
	std::cout << (txt.size() > 15 ? "	" : "		");
	std::cout << ">>>" << txt << "<<<" << std::endl;
	std::cout << "+~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~+" << std::endl;
}

PhoneBook::PhoneBook()
{
	this->index = 0;
}

PhoneBook::~PhoneBook()
{
}


void	PhoneBook::pushData(Contact &data)
{
	size_t i = this->index;

	if (i == 8)
		i--;
	while (i > 0)
	{
		_arrContact[i] = _arrContact[i - 1];
		i--;
	}
	_arrContact[0] = data;
	if(this->index < 8)
		this->index++;
}

void	PhoneBook::addContact()
{
	std::string	firstname;
	std::string	lastname;
	std::string	nickname;
	std::string	number;
	std::string	secret;

	out("Enter Name");
	while(firstname.empty())
		std::getline(std::cin, firstname);
	out("Enter Surname");
	while(lastname.empty())
		std::getline(std::cin, lastname);
	out("Enter Nickname");
	while(nickname.empty())
		std::getline(std::cin, nickname);
	out("Enter Number");
	while(number.empty())
		std::getline(std::cin, number);
	out("Enter Your Darkest Secret");
	while(secret.empty())
		std::getline(std::cin, secret);
	Contact data(firstname, lastname, nickname, number, secret);
	PhoneBook::pushData(data);
}

void	PhoneBook::searchContakt(int indexnb)
{
	std::string	input;

	if (this->index < indexnb)
	{
		out("No Contacts Yet");
		return ;
	}
	else
		outSearch("Phone Book");
	std::cout << "|" << std::setw(10) << "Index";
	std::cout << "|" << std::setw(10) << "First Name";
	std::cout << "|" << std::setw(10) << "Last Name";
	std::cout << "|" << std::setw(10) << "Nickname" << "|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	for (int i = 0; i < this->index && i < 8; i++)
		_arrContact[i].Names(i);
	outSearch("Enter The Index");
	while (!(std::cin >> indexnb) || indexnb > 8 || indexnb < 1 || indexnb > index)
	{
		std::cout << "Invalid input. Please enter an integer: ";
		std::cin.clear();
	}
	RE_TERMINAL;
	outSearch("Phone Book");
	_arrContact[index - 1].printConatct();
}
