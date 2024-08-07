/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 15:13:15 by kilchenk          #+#    #+#             */
/*   Updated: 2024/08/05 14:14:27 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ITER_HPP
#   define ITER_HPP

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

template <typename T, typename Func>
void iter(T *arr, int len, Func func)
{
    for (int i = 0; i < len; ++i)
        func(arr[i]);
}

template <typename T>
void print(T t)
{
    std::cout << RED << "| " << GREEN << t << std::endl;   
}

#endif