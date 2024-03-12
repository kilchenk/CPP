/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 12:45:25 by kilchenk          #+#    #+#             */
/*   Updated: 2024/03/12 14:36:04 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie  Yura("Yura");
    Zombie  *Valera;

    Yura.out();
    Valera = newZombie("Valera");
    Valera->out();
    randomChump("Anton");
    delete Valera;
    return (0);
}
