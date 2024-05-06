/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 13:32:51 by kilchenk          #+#    #+#             */
/*   Updated: 2024/05/06 15:46:25 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FORM_HPP
#   define FORM_HPP
# include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{
    private:
        const std::string _name;
        bool              _signed;
        const int         _gradeToSign;
        const int         _gradeToExecute;
        
    public:
        Form();
        Form &operator=(const Form &copy);
        Form(const Form &copy);      
        ~Form();
    public:
        std::string getName() const;
        int         getToSign() const;
        int         getToExecute() const;
        bool        getSigned();
        Form(const std::string &name, int gradeToSign, int gradeToExecute);
        void    beSigned(Bureaucrat &bureaucrat);
    public:
        class  GradeTooHighException : public std::exception
        {
            const char *what() const throw();
        };

        class GradeTooLowException : public std::exception
        {
            const char *what() const throw();
        };
};

std::ostream    &operator<<(std::ostream &stream, Form &form);

#endif