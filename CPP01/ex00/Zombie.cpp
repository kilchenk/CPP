/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:14:27 by kilchenk          #+#    #+#             */
/*   Updated: 2024/03/13 15:54:19 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::~Zombie()
{
    std::cout << RED << _name << ": RIP🪦" << RESET_LINE;
}

Zombie::Zombie(std::string name)
{
    _name = name;
}

void    Zombie::out(void)
{
    std::cout << GREEN << _name << ": BraiiiiiiinnnzzzZ..." << RESET_LINE;
}