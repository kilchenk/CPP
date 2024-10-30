/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 16:01:44 by kilchenk          #+#    #+#             */
/*   Updated: 2024/10/30 17:22:04 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

bool wrongChar(char **argv)
{
    for (int i = 1; argv[i]; i++)
    {
        for (int j = 0; argv[i][j]; j++)
            if (isdigit(argv[i][j]) == 0)
                return true;
    }
    return false;
}

bool duplicates(char **argv)
{
    for (int i = 1; argv[i]; i++)
    {
        for (int j = i + 1; argv[j]; j++)
            if (strcmp(argv[i], argv[j]) == 0)
                return true;
    }
    return false;
}

bool    positiveInt(char **argv)
{
    char *e;
    for (int i = 1; argv[i]; i++)
    {
        long unsigned d = std::strtoul(argv[i], &e, 10);
        if (*e != '\0' || d > UINT_MAX)
            return true;
    }
    return false;
}

void    errorHandle(char **argv)
{
    if (wrongChar(argv))
        std::cerr << BOLDRED << "Error: " << BLUE << "Wrong symbols!" << RESET_LINE;
    else if (positiveInt(argv))
        std::cerr << BOLDRED << "Error: " << BLUE << "UINT limit reached!" << RESET_LINE;
    else if (duplicates(argv))
        std::cerr << BOLDRED << "Error: " << BLUE << "Duplicates digit's!" << RESET_LINE;
    else
        return ;
    exit(1);
}

int main(int argc, char **argv)
{
    if(argc > 1)
    {
        errorHandle(argv);
        PmergeMe<std::vector<int>> vector(argv + 1);
        PmergeMe<std::deque<int>> deque(argv + 1);
        std::cout << BLUE << "Before: ";
        vector.printRes();
        vector.sort();//sort vec
        deque.sort();//sort deque
        std::cout << BLUE << "After: ";
        vector.printRes();// print num
        //vec time
        //dec time
        return (0);
    }
    std::cerr << BOLDRED << "Error: " << BLUE << "insufficient arguments." << RESET_LINE;
    return (-1);
}