/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 15:13:18 by kilchenk          #+#    #+#             */
/*   Updated: 2024/08/05 14:15:44 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
    int intArray[] = { 1, 42, 3, 4, 5, 6, 7, 89, 4215, 3456 };

    int intLength = sizeof(intArray) / sizeof(intArray[0]);

    std::string strArray[] = {"hello", "world", "template", "function", "in", "C++"};
    int strLength = sizeof(strArray) / sizeof(strArray[0]);
    std::cout << RED << '|' << std::string(49, '-') << RESET_LINE;
    iter(strArray, strLength, print<std::string>);

    std::cout << RED << '|' << std::string(49, '-') << RESET_LINE;

    iter(intArray, intLength, print<int>);

    return 0;
}