/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 14:41:49 by kilchenk          #+#    #+#             */
/*   Updated: 2024/03/27 16:45:54 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    _fixedPoint = 0;
    std::cout << GREEN << "Default constructor called" << RESET_LINE;
}

Fixed::Fixed(Fixed &copy)
{
    std::cout << GREEN << "Copy constructor called" << RESET_LINE; 
    *this = copy;
}

Fixed   &Fixed::operator=(Fixed &copy)
{
    std::cout << RED << "Copy assignment operator called" << RESET_LINE;
    _fixedPoint = copy.getRawBits();
    return  (*this);
}

Fixed::~Fixed()
{
    std::cout << RED << "Destructor called" << RESET_LINE;
}

int Fixed::getRawBits( void ) const
{
    std::cout << GREEN << "getRawBits member function called" << RESET_LINE;
    return (_fixedPoint);
}

void    Fixed::setRawBits( int const raw)
{
    _fixedPoint = raw;
}