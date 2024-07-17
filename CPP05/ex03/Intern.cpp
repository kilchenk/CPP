/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 15:14:05 by kilchenk          #+#    #+#             */
/*   Updated: 2024/07/17 15:30:48 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern()
{
    //std::cout << "Intern default constructor" << std::endl;
}

Intern::Intern(const Intern &copy)
{
    //std::cout << "Intern copy constructor" << std::endl;
    *this = copy;
}

Intern &Intern::operator=(const Intern &copy)
{
    //std::cout << "Intern copy assignment operator" << std::endl;
    (void)copy;
    return (*this);
}

Intern::~Intern()
{
    //std::cout << "Intern destructor" << std::endl;
}

AForm	*Intern::makeForm(std::string name, std::string target)
{
	std::string forms[3] = 
	{
		"presidential Pardon",
		"robotomy request",
		"shrubbery creation"
	};
	size_t i = 0;
	for (; i < 3; i++)
	{
		if (name.compare(forms[i]) == 0)
		{
			switch (i)
			{
				case 0:
					std::cout << "Intern created " << forms[0] << RESET_LINE;
					return(new PresidentialPardonForm(target));
				case 1:
					std::cout << "Intern created " << forms[1] << RESET_LINE;
					return(new RobotomyRequestForm(target));
				case 2:
					std::cout << "Intern created " << forms[2] << RESET_LINE;
					return(new ShrubberyCreationForm(target));
			}
			break;
		}
	}
	if (i >= 3)
		std::cout << "* No such form *" << std::endl;
	return(NULL);
}