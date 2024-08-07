/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 13:40:24 by kilchenk          #+#    #+#             */
/*   Updated: 2024/08/01 14:58:16 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//template typename
# ifndef WHATEVER_HPP
#   define WHATEVER_HPP

#include <iostream>
#include <cmath>
#include <climits>
#include <cstdlib>
#include <ctime>   
# define RED			"\033[0;31m"
# define GREEN			"\033[0;32m"
#define  PURPLE         "\033[35m"
# define RESET_COLOR 	"\033[0m"
# define RESET_LINE 	"\033[0m" << std::endl
# define RE_TERMINAL	std::cout << "\e[1;1H\e[2J"

template <typename T>
void swap(T &x, T &y) 
{
    T i;
    i = x;
    x = y;
    y = i;
}

template <typename T>
T min(T x, T y)
{
    if (x == y)
        return y;
    else if (x < y)
        return x;
    else
        return y;
}

template <typename T>
T max(T x, T y)
{
    if (x == y)
        return y;
    else if (x > y)
        return x;
    else
        return y;
}

#endif