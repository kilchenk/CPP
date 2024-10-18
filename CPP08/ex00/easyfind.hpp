/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 15:39:04 by kilchenk          #+#    #+#             */
/*   Updated: 2024/10/17 16:44:11 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef EASY_FIND_HPP
#  define EASY_FIND_HPP

#include <algorithm>
#include <iostream>
#include <cmath>
#include <climits>
#include <cstdlib>
#include <ctime>
#include <vector>
# define RED			"\033[0;31m"
# define GREEN			"\033[0;32m"
#define  BLUE           "\033[0;34m"
#define  PURPLE         "\033[35m"
# define RESET_COLOR 	"\033[0m"
# define RESET_LINE 	"\033[0m" << std::endl
# define RE_TERMINAL	std::cout << "\e[1;1H\e[2J"

template <typename T>
typename T::iterator easyFind(T &numb, int element)
{
    typename T::iterator it;

    it = std::find(numb.begin(), numb.end(), element);
    
    if (it != numb.end())
        return it;
    else
        throw std::invalid_argument("No such element!");
}

#endif