/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 12:56:10 by kilchenk          #+#    #+#             */
/*   Updated: 2024/07/16 15:50:50 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP
# include "Bureaucrat.hpp"

class AForm
{
    private:
        const std::string _name;
        bool              _signed;
        const int         _gradeSign;
        const int         _gradeExec;
    public:
        AForm();
        AForm(const AForm &copy);
        AForm &operator=(const AForm &copy);
        virtual ~AForm();
    public:
        AForm(const std::string &name, int gradeSign, int gradeExec);
        virtual void        execute(Bureaucrat const &b) const = 0;
        const std::string   getName() const;
        int                 getGradeSign() const;  
        int                 getGradeExec() const;
        bool                getSigned() const;
        void                beSigned(Bureaucrat &b);
        class GradeTooHighException : public std::exception
        {
            const char *what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            const char *what() const throw();
        };
};

std::ostream &operator<<(std::ostream &stream, AForm &form);

#endif