/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 14:51:58 by kilchenk          #+#    #+#             */
/*   Updated: 2024/03/18 13:08:55 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(const std::string &name)
{
    _name = name;
}

HumanB::~HumanB()
{
    
}

void    HumanB::setWeapon(Weapon &newWeapon)
{
    _weapon = &newWeapon;
}

void    HumanB::attack(void)
{
    std::cout << GREEN << _name << RED << " attacks with their " <<  GREEN << _weapon->getType() << RESET_LINE;
}
