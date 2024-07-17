/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 12:53:26 by kilchenk          #+#    #+#             */
/*   Updated: 2024/07/16 17:15:21 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("Default"), _gradeSign(150), _gradeExec(150)
{
    _signed = false;
}

AForm::AForm(const AForm &copy) : _name(copy._name), _gradeSign(copy._gradeSign), _gradeExec(copy._gradeExec)
{
    *this = copy;
}

AForm &AForm::operator=(const AForm &copy)
{
    _signed = copy._signed;
    return (*this);
}

AForm::~AForm()
{
}

AForm::AForm(const std::string &name, int gradeSign, int gradeExec) : _name(name), _gradeSign(gradeSign), _gradeExec(gradeExec)
{
    _signed = false;
    if (gradeSign < 1 || gradeExec < 1)
        throw AForm::GradeTooHighException();
    else if (gradeSign > 150 || gradeExec > 150)
        throw AForm::GradeTooLowException();
}

const std::string AForm::getName() const
{
    return (_name);
}

int AForm::getGradeSign() const
{
    return (_gradeSign);
}

int AForm::getGradeExec() const
{
    return (_gradeExec);
} 

bool AForm::getSigned() const
{
    return (_signed);
}

void AForm::beSigned(Bureaucrat &b)
{
    if (b.getGrade() > _gradeSign)
        throw AForm::GradeTooLowException();
    _signed = true;
}

const char *AForm::GradeTooHighException::what() const throw()
{
    return ("Grade is too high");
}

const char *AForm::GradeTooLowException::what() const throw()
{
    return ("Grade is too low");
}

std::ostream &operator<<(std::ostream &stream, AForm &AForm)
{
	stream << GREEN << AForm.getName() << " AForm is " << (AForm.getSigned()? "signed" : "not signed") << RESET_LINE ;
	stream << GREEN << "Grade required to sign it: " << AForm.getGradeSign() << RESET_LINE;
	stream << GREEN << "Grade required to execute it: " << AForm.getGradeExec() << RESET_LINE;
	return(stream);
}