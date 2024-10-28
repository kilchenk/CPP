/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 13:30:23 by kilchenk          #+#    #+#             */
/*   Updated: 2024/10/28 17:02:55 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cerr << BOLDRED << "Error: " << BLUE << "insufficient arguments." << RESET_LINE;
        return -1;    
    }
    if (inputValidation(argv[1]))
    {
        std::cerr << BOLDRED << "Error: " << BLUE << "Wrong input." << RESET_LINE;
        return -1;
    }
    if (!reversePolishNotation(argv[1]))
    {
        std::cerr << BOLDRED << "Error: " << BLUE << "RPN." << RESET_LINE;
        return -1;
    }
    return 0;
}