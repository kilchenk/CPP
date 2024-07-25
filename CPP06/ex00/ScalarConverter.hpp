/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 13:42:11 by kilchenk          #+#    #+#             */
/*   Updated: 2024/07/24 15:56:20 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <climits>
# define RED			"\033[0;31m"
# define GREEN			"\033[0;32m"
# define RESET_COLOR 	"\033[0m"
# define RESET_LINE 	"\033[0m" << std::endl
# define RE_TERMINAL	std::cout << "\e[1;1H\e[2J"
# define CHAR           1
# define INT            2
# define FLOAT          3
# define DOUBLE         4
# define T              true
# define F              false


class ScalarConverter
{
    private:
        ScalarConverter();
        ScalarConverter(const ScalarConverter &copy);
        ScalarConverter &operator=(const ScalarConverter &copy);
        ~ScalarConverter();
    public:
        static void    convert(std::string str);
};

#endif