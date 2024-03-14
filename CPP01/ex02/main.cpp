/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 12:49:30 by kilchenk          #+#    #+#             */
/*   Updated: 2024/03/14 14:42:47 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
# define RED			"\033[0;31m"
# define GREEN			"\033[0;32m"
# define RESET_LINE 	"\033[0m" << std::endl

int main()
{
    std::string string = "HI THIS IS BRAIN";
    std::string *stringPTR = &string;
    std::string &stringREF = string;

    std::cout << GREEN << "     The memory address of the string variable = " << &string << std::endl;
    std::cout << "     The memory address held by stringPTR = " << stringPTR << std::endl;
    std::cout << "     The memory address held by stringREF = " << &stringREF << RESET_LINE;
    
    std::cout << std::endl << RED << "     The value of the string variable = " << string << std::endl;
    std::cout << "     The value pointed to by stringPTR = " << *stringPTR << std::endl; 
    std::cout << "     The value pointed to by stringREF = " << stringREF << RESET_LINE;

    return 0;
}