/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 16:16:58 by kilchenk          #+#    #+#             */
/*   Updated: 2024/04/05 16:21:57 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    _type = "Dog";
    std::cout << "Dog constructor " << GREEN << "called" << RESET_LINE;
}

Dog::Dog(const Dog &copy)
{
    *this = copy;
    std::cout << "Copy Dog constructor " << GREEN << "caleld" << RESET_LINE;
}

Dog::~Dog()
{
    std::cout << "Dog destructor " << RED << "called" << RESET_LINE;
}

Dog &Dog::operator=(const Dog &copy)
{
    _type = copy._type;
    return (*this);
}

void    Dog::makeSound() const
{
    std::cout << "* " << GREEN << "Dog" << RESET_COLOR << " sounds *" << RESET_LINE;
}
