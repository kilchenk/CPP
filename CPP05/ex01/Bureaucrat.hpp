/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 13:47:47 by kilchenk          #+#    #+#             */
/*   Updated: 2024/05/06 15:46:47 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef BUREAUCRAT_HPP
#   define BUREAUCRAT_HPP
# include <iostream>
# include <string>
# include "Form.hpp"
# define RED			"\033[0;31m"
# define GREEN			"\033[0;32m"
# define RESET_COLOR 	"\033[0m"
# define RESET_LINE 	"\033[0m" << std::endl
# define RE_TERMINAL	std::cout << "\e[1;1H\e[2J"
# define B              "\033[1m"

class Form;
class Bureaucrat
{
    private:
        const   std::string _name;
        int         _grade;
    public:
        Bureaucrat();
        Bureaucrat(const Bureaucrat &copy);
        Bureaucrat &operator=(const Bureaucrat &copy);
        ~Bureaucrat();
    public:
        Bureaucrat(const std::string &name, int grade);
        std::string getName() const;
        int         getGrade() const;
        void    plusGrade();
        void    minusGrade();
        void    signForm(Form &form);
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


std::ostream    &operator<<(std::ostream &stream, Bureaucrat &bureaucrat);


#endif