/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 16:33:29 by kilchenk          #+#    #+#             */
/*   Updated: 2024/04/05 17:02:47 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    _type = "WrongCat";
    std::cout << "WrongCat constructor " << GREEN << "called" << RESET_LINE;
}

WrongCat::WrongCat(const WrongCat &copy)
{
    *this = copy;
    std::cout << "Copy WrongCat constructor " << GREEN << "caleld" << RESET_LINE;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor " << RED << "called" << RESET_LINE;
}

WrongCat &WrongCat::operator=(const WrongCat &copy)
{
    _type = copy._type;
    return (*this);
}

void    WrongCat::makeSound() const
{
    std::cout << "* " << GREEN << "WrongCat" << RESET_COLOR << " sounds *" << RESET_LINE;
}
