/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 14:47:25 by kilchenk          #+#    #+#             */
/*   Updated: 2024/03/21 16:17:27 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
    
}

Harl::~Harl()
{
    
}

void    out(std::string txt)
{
	std::cout << std::endl << "+~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~+" << std::endl;
	std::cout << (txt.size() > 16 ? "	" : "		");
	std::cout << ">>>" << txt << "<<<" << std::endl;
	std::cout << "+~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~+" << std::endl << std::endl;
}

void    Harl::_debug(void)
{
    out("DEBUG");
    std::cout << RED << "I love having extra bacon for my 7XL-double-cheese-" << std::endl;
    std::cout << "triple-pickle-special-ketchup burger. I really do!" << RESET_LINE;
}

void    Harl::_info(void)
{
    out("INFO");
    std::cout << GREEN << "I cannot believe adding extra bacon costs more mone." << std::endl;
    std::cout << "You didn’t put enough bacon in my burger! If you did," << std::endl; 
    std::cout << "I wouldn’t be asking for more!" << RESET_LINE;
}

void    Harl::_warning(void)
{
    out("WARNING");
    std::cout << RED <<  "I think I deserve to have some extra bacon for free." << std::endl;
    std::cout << "I’ve been coming for years whereas you started" << std::endl;
    std::cout << "working here since last month." << RESET_LINE;
}

void    Harl::_error(void)
{
    out("ERROR");
    std::cout << GREEN << "This is unacceptable! I want to speak to the manager" << std::endl;
    std::cout << "now." << RESET_LINE;
}

void    Harl::complain(std::string level)
{
    void (Harl::*complainClass[])(void) = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
    std::string (complainInit[4]) = {"DEBUG", "INFO", "WARNING", "ERROR"};

    for(int i = 0; i < 4; i++)
    {
        if (level.compare(complainInit[i]) == 0)
        {
            (this->*complainClass[i])();
            return ;
        }
    }
    out("WRONG LEVEL");
}