/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 14:16:14 by kilchenk          #+#    #+#             */
/*   Updated: 2024/08/07 13:38:07 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <cmath>
#include <climits>
#include <cstdlib>
#include <ctime>   
# define RED			"\033[0;31m"
# define GREEN			"\033[0;32m"
#define  BLUE           "\033[0;34m"
#define  PURPLE         "\033[35m"
# define RESET_COLOR 	"\033[0m"
# define RESET_LINE 	"\033[0m" << std::endl
# define RE_TERMINAL	std::cout << "\e[1;1H\e[2J"

template <typename T> class Array
{
    private:
        unsigned int _size;
        T            *_dynamicArray;
    public:
        Array();
        Array(unsigned int s);
        Array(const Array<T> &copy);
        Array   &operator=(const Array<T> &copy);
        T       &operator[](unsigned int index);
        ~Array();
	class OutOfBoundsException: public std::exception
	{
		const char *what() const throw()
		{
			return ("\033[0;33m* Index is out of bounds! *\033[0m");
		}
	};   
};

template <typename T>
Array<T>::Array() : _size(0), _dynamicArray(NULL)
{

}

template <typename T>
Array<T>::Array(unsigned int size)
{
    _size = size;
    _dynamicArray = new T[_size];
}

template <typename T>
Array<T>::Array(const Array<T> &copy) : _size(0), _dynamicArray(NULL)
{
    *this = copy;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array<T> &copy)
{
    if(_dynamicArray)
    {
        delete[] _dynamicArray;
        _dynamicArray = NULL;
    }
    _size = copy._size;
    _dynamicArray = new T[_size];
    if (_size > 0)
        for (unsigned int i; i < _size; i++)
            _dynamicArray[i] = copy._dynamicArray[i];
    return (*this); 
}

template <typename T> 
T &Array<T>::operator[](unsigned int index)
{
    if (_size == 0 || _size - 1 < index)
        throw OutOfBoundsException();
    return(_dynamicArray[index]);
}

template<class T> 
Array<T>::~Array()
{
    if(_dynamicArray)
        delete[] _dynamicArray;
}

// template <typename T>
// void print(T t)
// {
//     std::cout << RED << "| " << GREEN << t << std::endl;   
// }

#endif