/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 12:29:38 by kilchenk          #+#    #+#             */
/*   Updated: 2024/04/02 17:31:04 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    // // test 1 with const and hp
	
    ClapTrap constraction;

    constraction.attack("Boss");
    constraction.beRepaired(10);
    constraction.takeDamage(25);
    constraction.takeDamage(25);
    constraction.beRepaired(10);
    constraction.attack("Boss");

    // // test 2 with name and power
    
    // ClapTrap name("Kyrylo");

    // name.attack("Boss");
    // name.beRepaired(10);
    // name.takeDamage(2);
    // name.takeDamage(17);
    // name.beRepaired(10);
    // name.beRepaired(10);
    // name.beRepaired(10);
    // name.beRepaired(10);
    // name.beRepaired(10);
    // name.beRepaired(10);
    // name.beRepaired(10);
    // name.beRepaired(10);
    // name.beRepaired(10);
    // name.beRepaired(10);
    // name.attack("Boss");
    // name.attack("Boss");
    
    // // test 3 with operator

    // ClapTrap catto("Catto");
    // ClapTrap doggo("Doggo");
    
    // catto.attack("Mouse");
    // catto.beRepaired(2);
    // doggo.attack("Birdy");
    // doggo = catto;
    // doggo.attack("Birdy");
    // catto = doggo;
    // doggo.takeDamage(5);
    // doggo.beRepaired(2);

	return (0);
}
