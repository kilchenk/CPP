/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 15:01:59 by kilchenk          #+#    #+#             */
/*   Updated: 2024/07/29 17:45:08 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

#include <iostream>
#include <cmath>
#include <climits>
#include <cstdlib>  //rand(), srand()
#include <ctime>    //time()
# define RED			"\033[0;31m"
# define GREEN			"\033[0;32m"
#define  PURPLE         "\033[35m"
# define RESET_COLOR 	"\033[0m"
# define RESET_LINE 	"\033[0m" << std::endl
# define RE_TERMINAL	std::cout << "\e[1;1H\e[2J"


class Base
{
    public:
        virtual ~Base();
};

Base    *generate(void);
void    identify(Base* p);
void    identify(Base& p);

#endif