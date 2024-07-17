/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 13:35:01 by kilchenk          #+#    #+#             */
/*   Updated: 2024/07/17 17:03:13 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat() : _name("Default")
{
    // std::cout << GREEN << "Default constructor called" << RESET_LINE;
    _grade = 150;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : _name(copy._name)
{
    // std::cout << GREEN << "Copy constructor called" << RESET_LINE;
    *this = copy;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &copy)
{
    // std::cout << RED << "Copy assignment operator called" << RESET_LINE;
    _grade = copy._grade;
    return *this;
}

Bureaucrat::~Bureaucrat()
{
    // std::cout << RED << "Destructor called" << RESET_LINE;
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : _name(name)
{
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    _grade = grade;
    // std::cout << "Bureaucrat " GREEN << getName() << RESET_COLOR << " is instantiated with grade - " << RED << getGrade() << RESET_COLOR " !" << std::endl;
}

void Bureaucrat::signForm(AForm &form)
{
    try
    {
        form.beSigned(*this);
    }
    catch(const std::exception& e)
    {
        std::cerr << RED << _name << RESET_COLOR << " cannot sign '" << RED << form.getName() << RESET_COLOR << "' form because " << RED << e.what() << RESET_LINE;
        std::cerr << e.what() << '\n';
        return ;
    }
    std::cout << GREEN << _name << RESET_COLOR << " signed '" << RED << form.getName() << RESET_COLOR << "' form" << RESET_LINE;
}

void Bureaucrat::plusGrade()
{
    if (_grade > 1)
    {
        _grade--;
        //  std::cout << "Bureaucrat " GREEN << getName() << RESET_COLOR << " is instantiated with grade - " << RED << getGrade() << RESET_COLOR << " !" << std::endl;    
    }
    else
        throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::minusGrade()
{
    if (_grade < 150)
    {
        _grade++;
        // std::cout << "Bureaucrat " GREEN << getName() << RESET_COLOR << " is instantiated with grade - " << RED << getGrade() << RESET_COLOR << " !" << std::endl;    
    }
    else
        throw Bureaucrat::GradeTooLowException();
}

std::string Bureaucrat::getName() const
{
    return _name;
}

int Bureaucrat::getGrade() const
{
    return _grade;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade is too high\n";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade is too low\n";
}

void Bureaucrat::executeForm(AForm const & form)
{
    try
    {
        form.execute(*this);
    }
    catch(const std::exception& e)
    {
        // std::cerr << RED << _name << RESET_COLOR << " cannot execute '" << RED << form.getName() << RESET_COLOR << "' form because " << RED << e.what() << RESET_LINE;
        std::cerr << e.what() << '\n';
        // return ;
    }
    // std::cout << GREEN << _name << RESET_COLOR << " executed '" << RED << form.getName() << RESET_COLOR << "' form" << RESET_LINE;
}

std::ostream &operator<<(std::ostream &stream, Bureaucrat &bureaucrat)
{
    stream << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
    return stream;
}
