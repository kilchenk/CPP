/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 17:15:47 by kilchenk          #+#    #+#             */
/*   Updated: 2024/07/12 15:53:48 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("Default"), _gradeToSign(150), _gradeToExecute(150)
{
    // std::cout << GREEN << "Default constructor called" << RESET_LINE;
    _signed = false;
}

Form::Form(const Form &copy) : _name(copy._name), _gradeToSign(copy._gradeToSign), _gradeToExecute(copy._gradeToExecute)
{
    // std::cout << GREEN << "Copy constructor called" << RESET_LINE;
    _signed = copy._signed;
    *this = copy;
}

Form::Form(const std::string &name, int gradeToSign, int gradeToExecute) :_name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
    _signed = false;
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw Form::GradeTooHighException();
    if (gradeToSign > 150 || gradeToExecute > 150)
        throw Form::GradeTooLowException();
    // std::cout << "Form " GREEN << getName() << RESET_COLOR << " is instantiated with grade to sign - " << RED << getGradeToSign() << RESET_COLOR << " and grade to execute - " << RED << getGradeToExecute() << RESET_COLOR << " !" << std::endl;
}

Form &Form::operator=(const Form &copy)
{
    // std::cout << RED << "Copy assignment operator called" << RESET_LINE;
    _signed = copy._signed;
    return *this;
}

Form::~Form()
{
    // std::cout << RED << "Destructor called" << RESET_LINE;
}


std::string Form::getName() const
{
    return _name;
}

bool Form::getSigned()
{
    return _signed;
}

int Form::getGradeToSign()
{
    return _gradeToSign;
}

int Form::getGradeToExecute()
{
    return _gradeToExecute;
}

void Form::beSigned(Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() <= getGradeToSign())
        _signed = true;
    else
        throw Form::GradeTooLowException();
}

const char *Form::GradeTooHighException::what() const throw()
{
    return "Grade is too high!";
}

const char *Form::GradeTooLowException::what() const throw()
{
    return "Grade is too low!";
}

std::ostream &operator<<(std::ostream &stream, Form &form)
{
    stream << GREEN << form.getName() << RESET_COLOR << " form is " << RED << (form.getSigned() ? "signed" : "not signed") << RESET_LINE;
    stream << "Grade required to sign it: " << RED << form.getGradeToSign() << RESET_LINE;
    stream << "Grade required to execute it: " << RED << form.getGradeToExecute() << RESET_LINE;
    return stream;
}
