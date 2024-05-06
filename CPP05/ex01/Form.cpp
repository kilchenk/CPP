/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 13:51:17 by kilchenk          #+#    #+#             */
/*   Updated: 2024/05/06 15:53:15 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("DefaultF"), _gradeToSign(150), _gradeToExecute(150)
{
    _signed = false;
    // std::cout << "Form constructor" << GREEN << " called" << RESET_LINE;
}

Form::~Form()
{
    // std::cout << "Form destructor" << RED << " called" << RESET_LINE;
}

Form::Form(const Form &copy) : _name(copy._name), _gradeToSign(copy._gradeToSign), _gradeToExecute(copy._gradeToExecute)
{
    *this = copy;
    // std::cout << "Form constructor" << GREEN << " called" << RESET_LINE;
}

Form &Form::operator=(const Form &copy)
{
    _signed = copy._signed;
    return(*this);
}

std::string Form::getName() const
{
    return(_name);
}

int Form::getToSign() const
{
    return(_gradeToSign);
}
int Form::getToExecute() const
{
    return(_gradeToExecute);
}

bool Form::getSigned()
{
    return(_signed);
}

Form::Form(const std::string &name, int gradeToSign, int gradeToExecute) : _name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
    _signed = false;
    if (gradeToExecute < 1|| gradeToSign < 1)
        throw GradeTooHighException();
    else if (gradeToExecute > 150 || gradeToSign > 150)
        throw GradeTooLowException();
}

void Form::beSigned(Bureaucrat &bureaucrat)
{
    if(bureaucrat.getGrade() <= _gradeToSign)
        _signed = true;
    else
        throw GradeTooLowException();
}

const char *Form::GradeTooLowException::what() const throw()
{
    return("Grade too low\n");  
}

 const char *Form::GradeTooHighException::what() const throw()
{
    return("Grade too high\n");
}

std::ostream &operator<<(std::ostream &stream, Form &form)
{
    if (form.getSigned() == true)
        stream << form.getName() << " form is signed " << std::endl;
    else
        stream << form.getName() << " form is not signed " << std::endl;
    stream << "Grade required to sign it " << form.getToSign() << std::endl;
    stream << "Grade required to execute it " << form.getToExecute() << std::endl;
    return stream;
}