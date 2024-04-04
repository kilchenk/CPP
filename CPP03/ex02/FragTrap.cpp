/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 16:07:51 by kilchenk          #+#    #+#             */
/*   Updated: 2024/04/04 16:37:10 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"


FragTrap::FragTrap()
{
    _name = "FT Default";
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "Constructors of the - " << GREEN << _name << RESET_COLOR << " called" << RESET_LINE;
}

FragTrap::~FragTrap()
{
    std::cout << RED << "Destructor of the - " << GREEN << "FragTrap" << RED << " called" << RESET_LINE;
}

FragTrap::FragTrap(const FragTrap &copy)
{
    *this = copy;
    std::cout << "Copy constructor of the - " << GREEN << _name << RESET_COLOR << " called" << RESET_LINE;
}

FragTrap    &FragTrap::operator=(const FragTrap &copy)
{
    _name = copy._name;
    _hitPoints = copy._hitPoints;
    _energyPoints = copy._energyPoints;
    _attackDamage = copy._attackDamage;
    std::cout << "Operator of the - " << GREEN << _name << RESET_COLOR << " called" << RESET_LINE;
    return(*this);
}

FragTrap::FragTrap(std::string  const &name)
{
    _name = name;
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
}

void    FragTrap::attack(const std::string& target)
{
    if (_hitPoints > 0 && _energyPoints > 0)
    {
        std::cout << "FragTrap " << GREEN << _name << RED << " attacks " << GREEN << target << RESET_COLOR << ", causing " << RED << _attackDamage << RESET_COLOR << " points of damage!" << RESET_LINE;
        _energyPoints -= 1;
    }
    else if (_hitPoints <= 0)
        std::cout << "FragTrap " << GREEN << _name << RESET_COLOR << " cannot attacks, because" << RED << " DIED" << RESET_LINE; 
    else if (_energyPoints <= 0)
        std::cout << "FragTrap " << GREEN << _name << RESET_COLOR << " cannot attacks, because his energy is :" << RED << " 0" << RESET_LINE;
}


void    FragTrap::highFivesGuys(void)
{
    if (_hitPoints > 0 && _energyPoints > 0)
    {
        std::cout << "FragTrap " << GREEN << _name << RESET_COLOR <<  " want's to high five you!" << RESET_LINE;
        _energyPoints -= 1;
    }
    else if (_hitPoints <= 0)
        std::cout << "FragTrap " << GREEN << _name << RESET_COLOR << " cannot high u five, because" << RED << " DIED" << RESET_LINE; 
    else if (_energyPoints <= 0)
        std::cout << "FragTrap " << GREEN << _name << RESET_COLOR << " cannot high u five, because his energy is :" << RED << " 0" << RESET_LINE;    
}