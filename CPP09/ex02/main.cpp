/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 16:01:44 by kilchenk          #+#    #+#             */
/*   Updated: 2024/10/29 16:47:39 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
    if(argc > 1)
    {
        //error handle
        PmergeMe<std::vector<int>> vector(argv + 1);
        PmergeMe<std::deque<int>> deque(argv + 1);
        std::cout << BLUE << "Before: ";
        vector.printRes();
        //sort vec
        //sort deque
        std::cout << BLUE << "After: ";
        //print num
        //vec time
        //dec time
        return (0);
    }
    std::cerr << BOLDRED << "Error: " << BLUE << "insufficient arguments." << RESET_LINE;
    return (-1);
}