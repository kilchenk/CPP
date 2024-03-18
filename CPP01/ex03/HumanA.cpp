/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 14:51:52 by kilchenk          #+#    #+#             */
/*   Updated: 2024/03/18 13:08:19 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"


HumanA::HumanA(const std::string &name, Weapon &newWeapon) : _weapon(newWeapon)
{
    _name = name;
}

HumanA::~HumanA()
{
}

void    HumanA::attack(void)
{
    std::cout << GREEN << _name << RED << " attacks with their " << GREEN << _weapon.getType() << RESET_LINE;
}