/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 16:06:48 by kilchenk          #+#    #+#             */
/*   Updated: 2024/04/05 16:16:35 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    _type = "Cat";
    std::cout << "Cat constructor " << GREEN << "called" << RESET_LINE;
}

Cat::Cat(const Cat &copy)
{
    *this = copy;
    std::cout << "Copy Cat constructor " << GREEN << "caleld" << RESET_LINE;
}

Cat::~Cat()
{
    std::cout << "Cat destructor " << RED << "called" << RESET_LINE;
}

Cat &Cat::operator=(const Cat &copy)
{
    _type = copy._type;
    return (*this);
}

void    Cat::makeSound() const
{
    std::cout << "* " << GREEN << "Cat" << RESET_COLOR << " sounds *" << RESET_LINE;
}