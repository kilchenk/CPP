/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 13:55:35 by kilchenk          #+#    #+#             */
/*   Updated: 2024/07/25 17:33:15 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
    // std::cout << GREEN << "Default constructor of ScalaraConverter called" << RESET_LINE;
}

ScalarConverter::ScalarConverter(const ScalarConverter &copy)
{
    // std::cout << GREEN << "Copy constructor called" << RESET_LINE;
    *this = copy;  
}


ScalarConverter &ScalarConverter::operator=(const ScalarConverter &copy)
{
    // std::cout << RED << "Copy assignment operator called" << RESET_LINE;
    (void)copy;
    return *this;
}

ScalarConverter::~ScalarConverter()
{
    // std::cout << RED << "Destructor called" << RESET_LINE;
}



static int countChar(std::string str, char c)
{
    int count = 0;
    for(std::string::const_iterator it = str.begin(); it != str.end(); ++it)
    {
        if (*it == c)
            count++;
    }
    return count;
}

static void ifPseudo(std::string str)
{
    if (str.compare("nan") == 0 || str.compare("-inf") == 0 || str.compare("+inf") == 0 || str.compare("nanf") == 0 || str.compare("-inff") == 0 || str.compare("+inff") == 0)
    {
        std::cout << GREEN << "char:   " << RED << "impossible" << RESET_LINE;
        std::cout << GREEN << "int:    " << RED << "impossible" << RESET_LINE;
        std::cout << GREEN << "float:  " << RED << str << "f" << RESET_LINE;
        std::cout << GREEN << "double: " << RED << str << RESET_LINE;
        exit(0);
    }
}

static bool isInt(std::string str)
{
    for(std::string::const_iterator it = str.begin(); it != str.end(); ++it)
    {
        if(!isdigit(*it))
            return (F);
    }
    return (T);
}

static bool isFloat(std::string str)
{
    for(std::string::const_iterator it = str.begin(); it != str.end(); ++it)
    {
        if((!isdigit(*it) && *it != 'f' && *it != '.'))
            return (F);
    }
    return (T);    
}

static bool isDouble(std::string str)
{
    for(std::string::const_iterator it = str.begin(); it != str.end(); ++it)
    {
        if((!isdigit(*it) && *it != '.'))
            return (F);
    }
    return (T);    
}

static bool     detectChar(std::string str)
{
    if (str.size() == 1)
    {
        if (isascii(str[0]) && !isdigit(str[0]))
            return (T);
    }
    return (F);
}

static bool     detectInt(std::string str)
{
    if (str[0] == '-' || str[0] == '+')
        str = str.substr(1);
    if (isInt(str))
        return (T);
    return (F);
}    

static bool     detectFloat(std::string str)
{
    if (str[0] == '-' || str[0] == '+')
        str = str.substr(1);
    if ((countChar(str, '.') == 1) && (countChar(str, 'f') == 1) && (str[str.size() - 1] == 'f') && isFloat(str))
        if ((str[0] != '.') && str[str.find('.') + 1] != 'f')
            return (T);
    return (F);
}

static bool     detectDouble(std::string str)
{
    if (str[0] == '-' || str[0] == '+')
        str = str.substr(1);
    if ((countChar(str, '.') == 1) && isDouble(str))
        if ((str[0] != '.' && str[str.size() - 1] != '.'))
            return (T);
    return (F);   
}

static int      checkType(std::string str)
{
    if (detectChar(str))
        return (CHAR);
    if (detectInt(str))
        return (INT);
    if (detectFloat(str))
        return (FLOAT);
    if (detectDouble(str))
        return (DOUBLE);
    return 0;
}

static void     charPrint(std::string str, double value)
{
    if (checkType(str) == CHAR)
        std::cout << GREEN << "char:   " << RED << "'" << str[0] << "'" << RESET_LINE;
    else if (value >= 33 && value <= 126)
        std::cout << GREEN << "char:   " << RED << "'" << static_cast<char>(value) << "'" << RESET_LINE;
    else
        std::cout << GREEN << "char:   " << RED << "Non displayable" << RESET_LINE;
}

static void     intPrint(std::string str, double value)
{
    if (checkType(str) == CHAR)
        std::cout << GREEN << "int:    " << RED << static_cast<int>(str[0]) << RESET_LINE;
	else if (value >= INT_MIN && value <= INT_MAX)
        std::cout << GREEN << "int:    " << RED << static_cast<int>(value) << RESET_LINE;
    else
        std::cout << GREEN << "int:    " << RED << "impossible" << RESET_LINE;          
}

static void     floatPrint(std::string str, double value)
{
    if (checkType(str) == CHAR)
        std::cout << GREEN << "float:  " << RED << static_cast<float>(str[0]) << ".0f" << RESET_LINE;
    else if (checkType(str) == INT)
        std::cout << GREEN << "float:  " << RED << value << ".0f" << RESET_LINE;
    else if (checkType(str) == FLOAT)
        std::cout << GREEN << "float:  " << RED << str << RESET_LINE;
    else if (checkType(str) == DOUBLE)
        std::cout << GREEN << "float:  " << RED << str << "f" RESET_LINE;        
}

static void     doublePrint(std::string str, double value)
{
    if (checkType(str) == CHAR)
        std::cout << GREEN << "double: " << RED << static_cast<double>(str[0]) << ".0" << RESET_LINE;
    else if (checkType(str) == INT)
        std::cout << GREEN << "double: " << RED << value << ".0" << RESET_LINE;
    else if (checkType(str) == FLOAT)
        std::cout << GREEN << "double: " << RED << static_cast<double>(value) << RESET_LINE;
    else if (checkType(str) == DOUBLE)
        std::cout << GREEN << "double: " << RED << str << RESET_LINE;        
}

void    ScalarConverter::convert(std::string str)
{
    double value;
    
    ifPseudo(str);
    if (checkType(str) == 0)
    {
        std::cout << "|=====================================================|" << std::endl;
        std::cout << "|" << RED << "                  💀 INVALID INPUT 💀                " << RESET_COLOR << "|" << RESET_LINE;
        std::cout << "|=====================================================|" << std::endl;
        return ;
    }
    std::cout << checkType(str) << std::endl;
    value = strtod(str.c_str(), NULL);
    charPrint(str, value);
    intPrint(str,value);
    floatPrint(str, value);
    doublePrint(str, value);
}
