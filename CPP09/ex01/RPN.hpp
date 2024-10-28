/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 13:44:38 by kilchenk          #+#    #+#             */
/*   Updated: 2024/10/28 16:58:25 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef RPN_HPP
#   define RPN_HPP

#include <iostream>
#include <cmath>
#include <stack>
#include <climits>
#include <cstdlib>
#include <vector>
#include <map>
#include <fstream>
#include <sstream>
#include <string>
#include <iomanip>

# define RED			"\033[0;31m"
# define GREEN			"\033[0;32m"
# define BLUE           "\033[1m\033[36m"
# define PURPLE         "\033[35m"
# define RESET_COLOR 	"\033[0m"
#define  BOLDRED        "\033[1m\033[31m"
# define RESET_LINE 	"\033[0m" << std::endl
# define RE_TERMINAL	std::cout << "\e[1;1H\e[2J"


        bool    inputValidation(std::string str);
        bool    isToken(char token);
        bool    reversePolishNotation(std::string str);
        
    class checkInput : public std::exception
    {
        const char* what() const throw();
    }; 

#endif