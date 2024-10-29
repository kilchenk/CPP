/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 16:10:32 by kilchenk          #+#    #+#             */
/*   Updated: 2024/10/29 16:50:11 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

template <typename Container>
PmergeMe<Container>::PmergeMe()
{
    
}

template <typename Container>
PmergeMe<Container>::PmergeMe(const PmergeMe &copy)
{
    *this = copy;
}

template <typename Container>
PmergeMe<Container> &PmergeMe<Container>::operator=(const PmergeMe &copy)
{
    return (*this);
}

template <typename Container>
PmergeMe<Container>::~PmergeMe()
{
   
}

template <typename Container>
PmergeMe<Container>::PmergeMe(char **argv)
{
    int num;
    for (int i = 0; argv[i]; i++)
    {
        std::istringstream iss(argv[i]);
        iss >> num;
        _data.push_back(num);
    }
}

template<typename Container> 
void PmergeMe<Container>::printRes()
{
    for (typename Container::iterator it = _data.begin(); it != _data.end(); it++)
        std::cout << GREEN << *it << ' ';
    std::cout << std::endl;
}

template class PmergeMe<std::vector<int>>;
template class PmergeMe<std::deque<int>>;