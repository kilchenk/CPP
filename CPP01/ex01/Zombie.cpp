/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 16:35:32 by kilchenk          #+#    #+#             */
/*   Updated: 2024/03/13 16:29:26 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{

}

Zombie::~Zombie()
{
    std::cout << RED << _name << ": RIP🪦" << RESET_LINE;
}

void    Zombie::zombieName(std::string name)
{
    _name = name;
}

void    Zombie::out(void)
{
    std::cout << GREEN << _name << ": BraiiiiiiinnnzzzZ..." << RESET_LINE;
}
