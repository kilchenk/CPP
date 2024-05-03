/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 13:49:55 by kilchenk          #+#    #+#             */
/*   Updated: 2024/05/03 17:18:02 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void Bureaucrat::plusGrade()
{
    if (_grade < 150)
        {_grade++;
        std::cout << "Bureaucrat " GREEN << getName() << RESET_COLOR << " is instantiated with grade - " << RED << getGrade() << " !" << std::endl;
    }else
        throw GradeTooLowException();
}

void Bureaucrat::minusGrade()
{
    if (_grade > 1)
        {_grade--;
            std::cout << "Bureaucrat " GREEN << getName() << RESET_COLOR << " is instantiated with grade - " << RED << getGrade() << " !" << std::endl;}
    else
        throw GradeTooHighException();
}

Bureaucrat::Bureaucrat() : _name("Default")
{ 
    _grade = 10;
    // std::cout << "Bureaucrat constructor" << GREEN << " called" << RESET_LINE;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy)
{
    *this = copy;
    // std::cout << "Bureaucrat Animal constructor" << GREEN << " called" << RESET_LINE;
}

Bureaucrat  &Bureaucrat::operator=(const Bureaucrat &copy)
{
    _grade = copy._grade;
    return(*this);
}

Bureaucrat::~Bureaucrat()
{
    // std::cout << "Bureaucrat destructor" << RED << " called" << RESET_LINE;
}

std::string Bureaucrat::getName() const
{
    return(_name);
}

int Bureaucrat::getGrade() const
{
    return(_grade);
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : _name(name)
{
    if (grade > 150)
        throw GradeTooLowException();
    else if (grade < 1)
        throw GradeTooHighException();       
    _grade = grade;
    std::cout << "Bureaucrat " GREEN << getName() << RESET_COLOR << " is instantiated with grade - " << RED << getGrade() << " !" << std::endl;
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return("Grade too low\n");  
}

 const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return("Grade too high\n");
}

std::ostream &operator<<(std::ostream &stream, Bureaucrat &bureaucrat)
{
    stream << GREEN << bureaucrat.getName() << RESET_COLOR << ", bureaucrat grade " << RED << bureaucrat.getGrade() << RESET_LINE;
    return stream;
}
