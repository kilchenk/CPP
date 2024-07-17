/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 17:15:49 by kilchenk          #+#    #+#             */
/*   Updated: 2024/07/12 15:31:06 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


# ifndef FORM_CPP
    #define FORM_CPP
# include "Bureaucrat.hpp"

class Form
{
    private:
        std::string const   _name;
        bool                _signed;
        const int           _gradeToSign;
        const int           _gradeToExecute;   
    public:
        Form();
        Form(const Form &copy);
        Form &operator=(const Form &copy);
        ~Form();
    public:
        Form(const std::string &name, int gradeToSign, int gradeToExecute);
        std::string getName() const;
        bool        getSigned();
        int         getGradeToSign();
        int         getGradeToExecute();
        void        beSigned(Bureaucrat &bureaucrat);
    class GradeTooHighException : public std::exception
    {
        const char *what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
        const char *what() const throw();
    };
};

std::ostream &operator<<(std::ostream &stream, Form &form);

#endif