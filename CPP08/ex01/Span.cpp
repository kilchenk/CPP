/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 16:17:48 by kilchenk          #+#    #+#             */
/*   Updated: 2024/10/18 19:20:25 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{

}

Span::Span(const Span &copy)
{
    *this = copy;
}

Span    &Span::operator=(const Span &copy)
{
    if (_value.empty() == false)
        _value.clear();
    _value = copy._value;
    _N = copy._N;
    _longestSpan = copy._longestSpan;
    _shortestSpan = copy._shortestSpan;
    return *this;
}

Span::~Span()
{
    
}

Span::Span(unsigned int N)
{
    if (N > 0)
    {
        _N = N;
        _value.reserve(_N);
        _longestSpan = 0;
        _shortestSpan = 0;        
    }
    else
        throw emptyArray();
}

void    Span::addNumber(int num)
{
    if (_N > 0)
    {
        if (_value.size() < _N)
            _value.push_back(num);
        else
            throw tooManyElements();
    }
    else
        throw emptyArray();
}

void    Span::addSpan(std::vector<int>::iterator start, std::vector<int>::iterator end)
{
    if (_N > 0)
    {
        while (start != end)
        {
            try
            {
                addNumber(*start);
            }
            catch(const std::exception& e)
            {
                std::cerr << e.what() << '\n';
                break;
            }
            start++;
        }
        
    }
    else
        throw emptyArray();
}

int Span::longestSpan()
{
    if (_value.empty())
        throw noSpanFind();
    else if (_N > 0)
    {
        std::sort(_value.begin(), _value.end());
        _longestSpan = *(_value.end() - 1) - *(_value.begin());
        return(_longestSpan);
    }
    else if (_N == 0)
        throw emptyArray();
    else if (_value.size() < 2)
        throw noSpanFind();
    return (_longestSpan);
}

int Span::shortestSpan()
{
    int min;
    if (_value.empty())
        throw  noSpanFind();
    else if (_N > 0)
    {
        std::vector<int>::iterator begin = _value.begin();
        std::vector<int>::iterator end = _value.end();
        std::sort(begin, end);
        while (begin != end)
        {
            if ((begin + 1) != end && *(begin + 1) - *begin < min)
                min = *(begin + 1) - *begin;
            begin++;
        }
        return (_shortestSpan = min);
    }
    else if (_N == 0)
        throw emptyArray();
    return (_shortestSpan);
}