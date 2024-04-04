/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 12:29:44 by kilchenk          #+#    #+#             */
/*   Updated: 2024/04/04 17:35:38 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    _name = "Default";
    _hitPoints = 10;
    _energyPoints = 10;
    _attackDamage = 0;
    std::cout << "Constructors of the - " << GREEN << _name << RESET_COLOR << " called" << RESET_LINE;
}

ClapTrap::~ClapTrap()
{
    std::cout << RED << "Destructor of the - " << GREEN << "ClapTrap" << RED << " called" << RESET_LINE;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
    *this = copy;
    std::cout << "Copy constructor of the - " << GREEN << _name << RESET_COLOR << " called" << RESET_LINE;
}

ClapTrap    &ClapTrap::operator=(const ClapTrap &copy)
{
    _name = copy._name;
    _hitPoints = copy._hitPoints;
    _energyPoints = copy._energyPoints;
    _attackDamage = copy._attackDamage;
    std::cout << "Operator of the - " << GREEN << _name << RESET_COLOR << " called" << RESET_LINE;
    return(*this);
}

ClapTrap::ClapTrap(std::string  const &name)
{
    _name = name;
    _hitPoints = 10;
    _energyPoints = 10;
    _attackDamage = 0;
}

void    ClapTrap::attack(const std::string& target)
{
    if (_hitPoints > 0 && _energyPoints > 0)
    {
        std::cout << "ClapTrap " << GREEN << _name << RED << " attacks " << GREEN << target << RESET_COLOR << ", causing " << RED << _attackDamage << RESET_COLOR << " points of damage!" << RESET_LINE;
        _energyPoints -= 1;
    }
    else if (_hitPoints <= 0)
        std::cout << "ClapTrap " << GREEN << _name << RESET_COLOR << " cannot attacks, because" << RED << " DIED" << RESET_LINE; 
    else if (_energyPoints <= 0)
        std::cout << "ClapTrap " << GREEN << _name << RESET_COLOR << " cannot attacks, because his energy is :" << RED << " 0" << RESET_LINE;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (_hitPoints > 0)
    {
        _hitPoints -= amount;
        std::cout << "ClapTrap " << GREEN << _name << RESET_COLOR << " took " << RED << amount << RESET_COLOR << " damage!" << RESET_LINE;
        std::cout << "Current hitPoints: " << RED << _hitPoints << RESET_LINE;
    }
    else
        std::cout << "He's already" << RED << " DEAD!" << RESET_LINE;
}



void ClapTrap::beRepaired(unsigned int amount)
{    
    if (_hitPoints > 0 && _energyPoints > 0)
    {
        _hitPoints += amount;
        std::cout << "ClapTrap " << GREEN << _name << RESET_COLOR << " healed " << GREEN << amount << RESET_COLOR << " hit point!" << RESET_LINE;
        std::cout << "Current hitPoints: " << GREEN << _hitPoints << RESET_LINE;
        _energyPoints -= 1;
    }
    else if (_hitPoints <= 0)
        std::cout << "ClapTrap " << GREEN << _name << RESET_COLOR << " cannot heals, because" << RED << " DIED" << RESET_LINE; 
    else if (_energyPoints <= 0)
        std::cout << "ClapTrap " << GREEN << _name << RESET_COLOR << " cannot heals, because his energy is :" << RED << " 0" << RESET_LINE;
}
