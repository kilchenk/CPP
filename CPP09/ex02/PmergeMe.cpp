/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 16:10:32 by kilchenk          #+#    #+#             */
/*   Updated: 2024/10/31 14:56:23 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

template <typename Container>
std::string getContainer();

template <>
std::string getContainer<std::vector<int> >()
{
    return "vector<int>";
}

template <>
std::string getContainer<std::deque<int> >()
{
    return "deque<int>";
}

template <typename Container>
void    PmergeMe<Container>::getTime()
{
    std::cout << BLUE << "Time to process a range of " << PURPLE << _data.size() << BLUE << " elements with " << PURPLE << "std::" 
    << getContainer<Container>() << BLUE << " : " << GREEN << std::fixed << std::setprecision(6) << _time << BLUE << " us" << RESET_LINE;  
}

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

template<typename Container>
void PmergeMe<Container>::sort()
{
    if (_data.size() == 1)
    {
        std::cout << PURPLE << "Nothing to sort!" << RESET_LINE;
        return ;
    }
    
    std::clock_t start = std::clock();
    typedef std::pair<int, int> pair_type;
    std::vector<pair_type> pair_array = this->presort_pairs();
    std::vector<int> j_index = jacobsenChain(_data.size());
    this->insertsort(pair_array);
    _data.clear();
    _data.push_back(pair_array[0].second);
    for (size_t i = 0; i < pair_array.size(); i++)
        _data.push_back(pair_array[i].first);
    int index = 0;
    for (size_t i = 0; i < j_index.size(); i++)
    {
        if (size_t(j_index[i]) >= pair_array.size())
            continue ;
        index = binarySearch(pair_array[j_index[i]].second);
        _data.insert(_data.begin() + index, pair_array[j_index[i]].second);
    }
    if (_last != -1)
    {
        index = binarySearch(_last);
        _data.insert(_data.begin() + index, _last);
    }
    _time = static_cast<double>(std::clock() - start) / static_cast<double>(CLOCKS_PER_SEC);
}

template<class Container>
int PmergeMe<Container>::binarySearch(int target)
{
    int l = 0;
    int r = _data.size() - 1;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (_data[m] == target)
            return m;
        if (_data[m] > target)
            r = m - 1;
        else
            l = m + 1;
    }
    return (l);
}

template<class Container>
void PmergeMe<Container>::insertsort(std::vector<std::pair<int, int>> &pair_array)
{
    if (pair_array.size() == 1)
        return ;
    for (size_t i = 1; i < pair_array.size(); i++)
    {
        _typePair tmp = pair_array[i];
        size_t j = i;
        while (j > 0 && pair_array[j - 1].first > tmp.first)
        {
            pair_array[j] = pair_array[j - 1];
            j--;
        }
        pair_array[j] = tmp;
    }
}

template<typename Container>
std::vector<int> PmergeMe<Container>::jacobsenChain(size_t size)
{
    std::vector<int> tmpIndex;
    std::vector<int> jIndex;
    tmpIndex.push_back(0);
    tmpIndex.push_back(1);
    int tmp;
    for (int i = 2; tmpIndex.back() < (int)size; i++)
        tmpIndex.push_back(tmpIndex[i - 1] + (tmpIndex[i - 2] * 2)); // J(n) = J(n−1) + 2 × J(n−2)
    for (size_t i = 1; i < tmpIndex.size() - 1; i++)
    {
        jIndex.push_back(tmpIndex[i + 1]);
        tmp = tmpIndex[i + 1];
        while (--tmp > tmpIndex[i])
            jIndex.push_back(tmp);
    }
    return (jIndex);
}

template<typename Container>
std::vector<std::pair<int, int>> PmergeMe<Container>::presort_pairs()
{
    std::vector<_typePair> pair_array;
    if (_data.size() % 2 != 0)
    {
        _last = _data.back();
        _data.pop_back();
    }
    else
        _last = -1;
    for (size_t i = 0; i < _data.size(); i += 2)
    {
        if (_data[i] < _data[i + 1])
            std::swap(_data[i], _data[i + 1]);
        pair_array.push_back(std::make_pair(_data[i], _data[i + 1]));
    }
    return (pair_array);   
}


template class PmergeMe<std::vector<int>>;
template class PmergeMe<std::deque<int>>;