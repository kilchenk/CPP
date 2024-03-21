/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 16:25:23 by kilchenk          #+#    #+#             */
/*   Updated: 2024/03/21 16:50:40 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
    Harl    harl;
    if (argc != 2)
    {
        out("WRONG ARGUMENT COUNT");
        return 0;
    }
    harl.complain(argv[1]);
    return 0;
}
