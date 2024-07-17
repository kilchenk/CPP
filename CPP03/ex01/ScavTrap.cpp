/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 14:26:30 by kilchenk          #+#    #+#             */
/*   Updated: 2024/04/12 14:54:39 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    _name = "ST Default";
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "Constructors of the - " << GREEN << _name << RESET_COLOR << " called" << RESET_LINE;
}

ScavTrap::~ScavTrap()
{
    std::cout << RED << "Destructor of the - " << GREEN << "ScavTrap" << RED << " called" << RESET_LINE;
}

ScavTrap::ScavTrap(const ScavTrap &copy)
{
    *this = copy;
    std::cout << "Copy constructor of the - " << GREEN << _name << RESET_COLOR << " called" << RESET_LINE;
}

ScavTrap::ScavTrap(std::string const &name)
{
    _name = name;
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "Constructors of the - " << GREEN << _name << RESET_COLOR << " called" << RESET_LINE;
}

ScavTrap    &ScavTrap::operator=(const ScavTrap &copy)
{
    _name = copy._name;
    _hitPoints = copy._hitPoints;
    _energyPoints = copy._energyPoints;
    _attackDamage = copy._attackDamage;
    std::cout << "Operator of the - " << GREEN << _name << RESET_COLOR << " called" << RESET_LINE;
    return (*this);
}

void    ScavTrap::attack(const std::string& target)
{
    if (_hitPoints > 0 && _energyPoints > 0)
    {
        std::cout << "ScavTrap " << GREEN << _name << RED << " attacks " << GREEN << target << RESET_COLOR << ", causing " << RED << _attackDamage << RESET_COLOR << " points of damage!" << RESET_LINE;
        _energyPoints -= 1;
    }
    else if (_hitPoints <= 0)
        std::cout << "ScavTrap " << GREEN << _name << RESET_COLOR << " cannot attacks, because" << RED << " DIED" << RESET_LINE; 
    else if (_energyPoints <= 0)
        std::cout << "ScavTrap " << GREEN << _name << RESET_COLOR << " cannot attacks, because his energy is :" << RED << " 0" << RESET_LINE;
}

void    ScavTrap::guardGate()
{
    if (_hitPoints > 0 && _energyPoints > 0)
    {
        std::cout << "ScavTrap " << GREEN << _name << RESET_COLOR << " now in Gate!" << RESET_LINE;
        _energyPoints -= 1;
    }
    else if (_hitPoints <= 0)
        std::cout << "ScavTrap " << GREEN << _name << RESET_COLOR << " cannot be in gate, because" << RED << " DIED" << RESET_LINE; 
    else if (_energyPoints <= 0)
        std::cout << "ScavTrap " << GREEN << _name << RESET_COLOR << " cannot be in gate, because his energy is :" << RED << " 0" << RESET_LINE;
}
