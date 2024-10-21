/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 13:30:21 by kilchenk          #+#    #+#             */
/*   Updated: 2024/10/21 14:31:11 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef MUTANT_STACK_HPP
#   define MUTANT_STACK_HPP

#include <algorithm>
#include <iostream>
#include <cmath>
#include <climits>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <stack>
# define RED			"\033[0;31m"
# define GREEN			"\033[0;32m"
#define  BLUE           "\033[0;34m"
#define  PURPLE         "\033[35m"
# define RESET_COLOR 	"\033[0m"
# define RESET_LINE 	"\033[0m" << std::endl
# define RE_TERMINAL	std::cout << "\e[1;1H\e[2J"

template <typename T>
class MutantStack:public std::stack<T>
{
    private:
        
    public:
        MutantStack();
        MutantStack(const MutantStack &copy);
        MutantStack &operator=(const MutantStack &copy);
        ~MutantStack();
        
        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator begin();
        iterator end();
};

template <typename T>
MutantStack<T>::MutantStack()
{
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack &copy)
{
    *this = copy;
}

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack &copy)
{
    return(copy);
}

template <typename T>
MutantStack<T>::~MutantStack()
{
}

template<typename T> 
typename std::stack<T>::container_type::iterator MutantStack<T>::begin()
{
    return (std::stack<T>::c.begin());
}

template<typename T> 
typename std::stack<T>::container_type::iterator MutantStack<T>::end()
{
    return (std::stack<T>::c.end());
}

#endif