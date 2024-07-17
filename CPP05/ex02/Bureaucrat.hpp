/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 13:24:42 by kilchenk          #+#    #+#             */
/*   Updated: 2024/07/16 17:19:02 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef BUREAUCRAT_HPP
#  define BUREAUCRAT_HPP
# include <iostream>
# include <string>
# include <fstream>
// # include "Form.hpp"
# define RED			"\033[0;31m"
# define GREEN			"\033[0;32m"
# define RESET_COLOR 	"\033[0m"
# define RESET_LINE 	"\033[0m" << std::endl
# define RE_TERMINAL	std::cout << "\e[1;1H\e[2J"

class AForm;
class Bureaucrat
{
    private:
        std::string const _name;
        int _grade;
    public:
        Bureaucrat();
        Bureaucrat(const Bureaucrat &copy);
        Bureaucrat &operator=(const Bureaucrat &copy);
        ~Bureaucrat();
    public:
        Bureaucrat(const std::string &name, int grade);
        std::string getName() const;
        int         getGrade() const;
        void        plusGrade();
        void        minusGrade();
        void        signForm(AForm &form);
		void        executeForm(AForm const & form);
    class GradeTooHighException : public std::exception
    {
        const char *what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
        const char *what() const throw();
    };
};

std::ostream &operator<<(std::ostream &stream, Bureaucrat &bureaucrat);

#endif