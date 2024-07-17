/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 17:13:40 by kilchenk          #+#    #+#             */
/*   Updated: 2024/04/08 15:22:07 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << RED << "Brain" << RESET_COLOR << " costructor " << GREEN << "called" << RESET_LINE;
}

Brain::Brain(const Brain &copy)
{
    *this = copy;
    std::cout << "Coppy " << RED << "Brain" << RESET_COLOR << " costructor " << GREEN << "called" << RESET_LINE;
}

Brain   &Brain::operator=(const Brain &copy)
{
    for(int i = 0; i <= 100; i++)
        _ideas[i] = copy._ideas[i];
    return (*this);
}

Brain::~Brain()
{
    std::cout << RED << "Brain" << RESET_COLOR << " destructor " << RED << "called" << RESET_LINE;
}
