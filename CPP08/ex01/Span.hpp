/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 17:02:12 by kilchenk          #+#    #+#             */
/*   Updated: 2024/10/18 17:11:59 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef SPAN_HPP
#   define SPAN_HPP

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

class Span
{
    private:
        unsigned int _N;
        int _longestSpan;
        int _shortestSpan;
        std::vector<int> _value;
    public:
        Span(); 
        Span(const Span &copy);
        Span    &operator=(const Span &copy);
        ~Span();
    public:
        void    addNumber(int num);
        void    addSpan(std::vector<int>::iterator start, std::vector<int>::iterator end);
        int     shortestSpan();
        int     longestSpan();
        Span(unsigned int N);
        

class tooManyElements: public std::exception
{
	const char *what() const throw()
    {
		return ("\033[0;33m\t* There are too many Elements! *\033[0m");
    }
};

class emptyArray: public std::exception
{
	const char *what() const throw()
    {
		return ("\033[0;33m\t* There are no Elements! *\033[0m");
    }
};

class noSpanFind: public std::exception
{
	const char *what() const throw()
    {
		return ("\033[0;33m\t* There are span can not be find! *\033[0m");
    }
};

};

#endif