/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 14:03:21 by kilchenk          #+#    #+#             */
/*   Updated: 2024/03/21 16:19:22 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
    Harl    harl;
    
    harl.complain("DEBUG");
    // harl.complain("LOL");
    // harl.complain("ERROR");
    // harl.complain("ERROR");
    harl.complain("INFO");
    harl.complain("WARNING");
    harl.complain("ERROR");
    // harl.complain("LOL");

    return 0;
}