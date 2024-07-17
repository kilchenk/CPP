/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 16:10:00 by kilchenk          #+#    #+#             */
/*   Updated: 2024/07/16 17:05:24 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib> // Add this line to include the <cstdlib> header

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45)
{
    //std::cout << GREEN << "Default constructor of RobotomyRequestForm called" << RESET_LINE;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : AForm(copy.getName(), 72, 45)
{
    //std::cout << GREEN << "Copy constructor of RobotomyRequestForm called" << RESET_LINE;
    *this = copy;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &copy)
{
    //std::cout << RED << "Copy assignment operator of RobotomyRequestForm called" << RESET_LINE;
    _target = copy._target;
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    //std::cout << RED << "Destructor of RobotomyRequestForm called" << RESET_LINE;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : AForm("RobotomyRequestForm", 72, 45)
{
    _target = target;
}


void RobotomyRequestForm::execute(const Bureaucrat &b) const
{
    if (b.getGrade() <= getGradeExec() && getSigned())
    {
        srand(time(NULL)); // Uncomment this line to seed the random number generator
        if (rand() % 2)
        {
            std::cout << GREEN << " * Drilling Noise * " << RESET_LINE ;
            std::cout << GREEN << _target << " has been robotomized by " << GREEN << b.getName() << RESET_COLOR << "!" << std::endl;
        }
        else
            std::cout << RED << b.getName() << " tried to robotomize " << _target << " but failed!" << RESET_LINE;
    }
    else
    {
        if (!getSigned())
            std::cout << "This form '" << getName() << RED << "' is not signed!" << RESET_LINE;
        else
            throw AForm::GradeTooLowException();
    }
}