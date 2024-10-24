/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 15:02:02 by kilchenk          #+#    #+#             */
/*   Updated: 2024/07/30 13:12:22 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base()
{
}

Base *generate(void)
{
    std::srand(static_cast<unsigned int>(std::time(NULL)));
    int i = std::rand() % 3;
    if (i == 0)
    {
        std::cout << RED << '+' << std::string(40, '-') << '+' << RESET_LINE;
        std::cout << RED << '|' << RESET_COLOR << " Randomly instantiated" << GREEN << std::string(7, ' ') << "->" << std::string(7, ' ') << PURPLE << 'A' << RED << " |" << RESET_LINE;
        std::cout << RED << '+' << std::string(40, '-') << '+' << RESET_LINE;
        return (new A);
    }
    else if (i == 1)
    {
        std::cout << RED << '+' << std::string(40, '-') << '+' << RESET_LINE;
        std::cout << RED << '|' << RESET_COLOR << " Randomly instantiated" << GREEN << std::string(7, ' ') << "->" << std::string(7, ' ') << PURPLE << 'B' << RED << " |" << RESET_LINE;
        std::cout << RED << '+' << std::string(40, '-') << '+' << RESET_LINE;
        return (new B);
    }
    else if (i == 2)
    {
        std::cout << RED << '+' << std::string(40, '-') << '+' << RESET_LINE;
        std::cout << RED << '|' << RESET_COLOR << " Randomly instantiated" << GREEN << std::string(7, ' ') << "->" << std::string(7, ' ') << PURPLE << 'C' << RED << " |" << RESET_LINE;
        std::cout << RED << '+' << std::string(40, '-') << '+' << RESET_LINE;
        return (new C);
    }
    return (NULL);
}

void identify(Base *p)
{
    if (dynamic_cast<A*>(p))
    {
        std::cout << RED << '|' << RESET_COLOR << "identify type by \"*\" " << GREEN << std::string(7, ' ') << " ->" << std::string(7, ' ') << PURPLE << 'A' << RED << " |" << RESET_LINE;
        std::cout << RED << '+' << std::string(40, '-') << '+' << RESET_LINE;        
    }
    else if (dynamic_cast<B*>(p))
    {
        std::cout << RED << '|' << RESET_COLOR << "identify type by \"*\" " << GREEN << std::string(7, ' ') << " ->" << std::string(7, ' ') << PURPLE << 'B' << RED << " |" << RESET_LINE;
        std::cout << RED << '+' << std::string(40, '-') << '+' << RESET_LINE;       
    }
    else if (dynamic_cast<C*>(p))
    {
        std::cout << RED << '|' << RESET_COLOR << "identify type by \"*\" " << GREEN << std::string(7, ' ') << " ->" << std::string(7, ' ') << PURPLE << 'C' << RED << " |" << RESET_LINE;
        std::cout << RED << '+' << std::string(40, '-') << '+' << RESET_LINE;      
    }
    else
    {
        std::cout << RED << "!1!1!1!1 ErR0R !1!1!1!!!111" << std::endl;
        return ;
    }
}

void identify(Base &p)
{
    try
    {
        A& a = dynamic_cast<A&>(p);
        std::cout << RED << '|' << RESET_COLOR << "identify type by \"&\" " << GREEN << std::string(7, ' ') << " ->" << std::string(7, ' ') << PURPLE << 'A' << RED << " |" << RESET_LINE;
        std::cout << RED << '+' << std::string(40, '-') << '+' << RESET_LINE;
        return ;
    }
    catch(const std::bad_cast& e){}
    
    try
    {
        B& b = dynamic_cast<B&>(p);
        std::cout << RED << '|' << RESET_COLOR << "identify type by \"&\" " << GREEN << std::string(7, ' ') << " ->" << std::string(7, ' ') << PURPLE << 'B' << RED << " |" << RESET_LINE;
        std::cout << RED << '+' << std::string(40, '-') << '+' << RESET_LINE;
        return ;
    }
    catch(const std::bad_cast& e){}
    
    try
    {
        C& c = dynamic_cast<C&>(p);
        std::cout << RED << '|' << RESET_COLOR << "identify type by \"&\" " << GREEN << std::string(7, ' ') << " ->" << std::string(7, ' ') << PURPLE << 'C' << RED << " |" << RESET_LINE;
        std::cout << RED << '+' << std::string(40, '-') << '+' << RESET_LINE;   
        return ;
    }
    catch(const std::bad_cast& e){std::cout << RED << "!1!1!1!1 ErR0R !1!1!1!!!111" << std::endl;}
}