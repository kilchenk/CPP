/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 15:56:27 by kilchenk          #+#    #+#             */
/*   Updated: 2024/07/17 17:03:19 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5)
{
    // std::cout << GREEN << "Default constructor of PresidentialPardonForm called" << RESET_LINE;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) : AForm(copy.getName(), 25, 5)
{
    // std::cout << GREEN << "Copy constructor of PresidentialPardonForm called" << RESET_LINE;
    *this = copy;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &copy)
{
    // std::cout << RED << "Copy assignment operator of PresidentialPardonForm called" << RESET_LINE;
    _target = copy._target;
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    // std::cout << RED << "Destructor of PresidentialPardonForm called" << RESET_LINE;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : AForm("PresidentialPardonForm", 25, 5)
{
    _target = target;
}

void PresidentialPardonForm::execute(const Bureaucrat &b) const
{
    if (b.getGrade() <= getGradeExec() && getSigned())
    {
        std::cout << GREEN << _target << " has been pardoned by Zafod Beeblebrox" << std::endl;
        std::cout << b.getName() << " executed " << getName() << std::endl;
    }
    else
    {
        if (!getSigned())
            std::cout << "This form '" << getName() << RED << "' is not signed!" << std::endl;
        else
            throw AForm::GradeTooLowException();
    }
}
