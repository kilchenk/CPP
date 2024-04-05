/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 16:33:22 by kilchenk          #+#    #+#             */
/*   Updated: 2024/04/05 17:01:50 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    _type = "WrongAnimal";
    std::cout << "WrongAnimal constructor" << GREEN << " called" << RESET_LINE;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor" << RED << " called" << RESET_LINE;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
    *this = copy;
    std::cout << "Copy WrongAnimal constructor" << GREEN << " called" << RESET_LINE;
}

WrongAnimal  &WrongAnimal::operator=(const WrongAnimal &copy)
{
    _type = copy._type;
    return (*this);
}

void   WrongAnimal::makeSound() const
{
    std::cout << "* " << GREEN << "WrongAnimal " << RESET_COLOR << "sounds *" << RESET_LINE;
}

const std::string &WrongAnimal::getType() const
{
    return(_type);
}
