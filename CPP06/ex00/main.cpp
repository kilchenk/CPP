/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 14:31:35 by kilchenk          #+#    #+#             */
/*   Updated: 2024/07/24 15:27:22 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "|=====================================================|" << std::endl;
        std::cout << "|" << RED << "                  💀 WRONG INPUT 💀                  " << RESET_COLOR << "|" << RESET_LINE;
        std::cout << "|=====================================================|" << std::endl;
        return 0;
    }
    ScalarConverter::convert(argv[1]);
    return 0;
}