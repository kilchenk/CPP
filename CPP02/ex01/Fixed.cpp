/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 18:04:31 by kilchenk          #+#    #+#             */
/*   Updated: 2024/03/28 16:45:14 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    _fixedPoint = 0;
    std::cout << GREEN << "Default constructor called" << RESET_LINE;
}

Fixed::Fixed(const Fixed &copy)
{
    std::cout << GREEN << "Copy constructor called" << RESET_LINE; 
    *this = copy;
}

Fixed::Fixed(int const num)
{
    _fixedPoint = num << _bit;
    std::cout << RED << "Int constructor called" << RESET_LINE;
}

Fixed::Fixed(float const num)
{
    _fixedPoint = roundf(num * (1 << _bit));
    std::cout << GREEN << "Float constructor called" << RESET_LINE;
}

Fixed   &Fixed::operator=(const Fixed &copy)
{
    std::cout << RED << "Copy assignment operator called" << RESET_LINE;
    _fixedPoint = copy._fixedPoint;
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

float   Fixed::toFloat( void ) const
{
    return((float)(_fixedPoint) / (float)(1 << _bit));
}

int     Fixed::toInt( void ) const
{
    return(_fixedPoint >> _bit);
}

std::ostream &operator<<(std::ostream &streamy, Fixed const &num)
{
	streamy << num.toFloat();
	return (streamy);
}