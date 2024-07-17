/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 13:17:40 by kilchenk          #+#    #+#             */
/*   Updated: 2024/05/03 15:37:59 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    _type = "Animal";
    std::cout << "Animal constructor" << GREEN << " called" << RESET_LINE;
}

Animal::~Animal()
{
    std::cout << "Animal destructor" << RED << " called" << RESET_LINE;
}

Animal::Animal(const Animal &copy)
{
    *this = copy;
    std::cout << "Copy Animal constructor" << GREEN << " called" << RESET_LINE;
}

Animal  &Animal::operator=(const Animal &copy)
{
    _type = copy._type;
    return (*this);
}

void   Animal::makeSound() const
{
    std::cout << "* " << GREEN << "Animal " << RESET_COLOR << "sounds *" << RESET_LINE;
}

const std::string &Animal::getType() const
{
    return(_type);
}
