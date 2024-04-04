/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 16:52:35 by kilchenk          #+#    #+#             */
/*   Updated: 2024/04/04 17:51:26 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    _name = "DT Default";
    _hitPoints = FragTrap::_hitPoints;
    _energyPoints = ScavTrap::_energyPoints;
    _attackDamage = FragTrap::_attackDamage;
    std::cout << "Constructors of the - " << GREEN << _name << RESET_COLOR << " called" << RESET_LINE;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << RED << "Destructor of the - " << GREEN << "DiamondTrap" << RED << " called" << RESET_LINE;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy)
{
    *this = copy;
    std::cout << "Copy constructor of the - " << GREEN << _name << RESET_COLOR << " called" << RESET_LINE;
}

DiamondTrap::DiamondTrap(std::string const &name)
{
    _name = name;
    ClapTrap::_name = name + "_clap_name";
    _hitPoints = FragTrap::_hitPoints;
    _energyPoints = ScavTrap::_energyPoints;
    _attackDamage = FragTrap::_attackDamage;
    std::cout << "Constructors with name of the - " << GREEN << "DiamondTrap" << RESET_COLOR << " called" << RESET_LINE;
}

DiamondTrap     &DiamondTrap::operator=(const DiamondTrap &copy)
{
    _name = copy._name;
    _hitPoints = copy._hitPoints;
    _energyPoints = copy._energyPoints;
    _attackDamage = copy._attackDamage;
    std::cout << "Operator of the - " << GREEN << _name << RESET_COLOR << " called" << RESET_LINE;
    return (*this);
}

void    DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}

void    DiamondTrap::whoAmI(void)
{
    std::cout << "DiamondTrap name: " << GREEN << _name << RESET_LINE;
    std::cout << "ClapTrap name: " << GREEN << ClapTrap::_name << RESET_LINE;
}


