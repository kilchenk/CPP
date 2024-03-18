/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 14:52:07 by kilchenk          #+#    #+#             */
/*   Updated: 2024/03/18 13:08:05 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
    _type = "default";
}


Weapon::Weapon(const std::string &newType)
{
    setType(newType);
}

Weapon::~Weapon()
{

}

const std::string   &Weapon::getType()
{
    return(_type);
}

void    Weapon::setType(const std::string &newType)
{
    _type = newType;
}
