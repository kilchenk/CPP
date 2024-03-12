/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 13:38:29 by kilchenk          #+#    #+#             */
/*   Updated: 2024/03/04 15:46:12 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

Contact::Contact(const std::string fn, const std::string ln, const std::string nn, const std::string nb, const std::string ds) : _firstname(fn), _lastname(ln), _nickname(nn), _number(nb), _secret(ds) 
{
	
}

Contact::Contact()
{ 

}

Contact::~Contact()
{
    
}

void    Contact::printConatct()
{
    std::cout << "First Name:   |   " << _firstname << std::endl;
    std::cout << "Last Name:    |   " << _lastname << std::endl;
    std::cout << "Nick Name:    |   " << _nickname << std::endl;
    std::cout << "Number:       |   " << _number << std::endl;
    std::cout << "Secret:       |   " << _secret << std::endl;
}

void    Contact::Names( int i)
{
    i++;
    std::cout << "|" << std::setw(10) << i;
    std::cout << "|";
    if(_firstname.size() >= 10)
        std::cout << std::setw(10) << (_firstname.substr(0,9) + ".");
    else if(_firstname.size() < 10)
        std::cout << std::setw(10) << _firstname.substr(0,9);
    std::cout << "|";
    if(_lastname.size() >= 10)
        std::cout << std::setw(10) << (_lastname.substr(0,9) + ".");
    else if(_lastname.size() < 10)
        std::cout << std::setw(10) << _lastname.substr(0,9);
    std::cout << "|";
    if(_nickname.size() >= 10)
        std::cout << std::setw(10) << (_nickname.substr(0,9) + ".") << "|" << std::endl;
    else if(_nickname.size() < 10)
        std::cout << std::setw(10) << _nickname.substr(0,9) << "|" << std::endl;
    std::cout << "|----------|----------|----------|----------|" << std::endl;
}
