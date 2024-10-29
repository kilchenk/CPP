/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 13:30:20 by kilchenk          #+#    #+#             */
/*   Updated: 2024/10/29 11:17:39 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

bool    isToken(char token)
{
    if (token == '+' || token == '-' || token == '*' || token == '/')
        return true;
    return false;
}

bool    inputValidation(std::string str)
{
    int token = 0;
    int digit = 0;

    if (isToken(str[0]) || isToken(str[1]))
        return true;
    for (std::string::iterator it = str.begin(); it != str.end(); it++)
    {
        if (isdigit(*it) && *(it + 1) && isdigit(*(it + 1)))
            return true;
        if (!isdigit(*it) && !isToken(*it) && !(*it == ' '))
            return true;
        if (isdigit(*it))
            digit++;
        if (isToken(*it))
            token++;   
    }
        if (digit - token != 1 || digit == 1)
            return true;
    return false;
}

int stringToInt(const std::string &str) 
{
    std::istringstream iss(str);
    int num;
    iss >> num;
    return num;
}

bool    reversePolishNotation(std::string str)
{
    std::stack<int> stack;
    std::istringstream iss(str);
    std::string token;
    
    while (iss >> token) 
    {
        if (token == "+" || token == "-" || token == "*" || token == "/") 
        {
            if (stack.size() < 2)
                return false;
            int b = stack.top();
            stack.pop();
            int a = stack.top();
            stack.pop();

            if (token == "+")
                stack.push(a + b);
            else if (token == "-")
                stack.push(a - b);
            else if (token == "*")
                stack.push(a * b);
            else if (token == "/")
                stack.push(a / b);
        } else {
            stack.push(stringToInt(token));
        }
    }
    if (stack.size() != 1)
		return (false);
	std::cout << BOLDRED "Result: " BLUE << stack.top() <<  RESET_LINE;
	return (true);
}

const char *checkInput::what() const throw()
{
    return ("\033[1;31mError:\033[0m \033[1;34mWrong input.\033[0m");
}
