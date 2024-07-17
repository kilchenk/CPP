/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 13:24:16 by kilchenk          #+#    #+#             */
/*   Updated: 2024/07/11 17:11:53 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat b("Kilchenko", 0);
    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        Bureaucrat b("Kilchenko", 151);
    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        Bureaucrat b("Kilchenko", 150);
        b.plusGrade();
    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        Bureaucrat b("Kilchenko", 1);
        b.minusGrade();
    }
        catch(const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
            Bureaucrat b("Kilchenko", 140);
            b.minusGrade();
            b.minusGrade();
            b.minusGrade();
            b.minusGrade();
            b.minusGrade();
            b.minusGrade();
            b.minusGrade();
            b.minusGrade();
            b.minusGrade();
            b.minusGrade();
            b.minusGrade();                                    
    }
    catch(const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    
    Bureaucrat billy("Billy", 98);
    std::cout << billy << std::endl;

    return 0;
}