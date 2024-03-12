/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:14:27 by kilchenk          #+#    #+#             */
/*   Updated: 2024/03/12 14:34:24 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::~Zombie()
{
    std::cout << RED << _name << ": RIP🪦" << std::endl;
}

Zombie::Zombie(std::string name)
{
    _name = name;
}

void    Zombie::out(void)
{
    std::cout << GREEN << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}