/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 16:35:27 by kilchenk          #+#    #+#             */
/*   Updated: 2024/03/13 16:37:30 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie  *callZombie = new Zombie[N];
    for(int i = 0; i < N; i++)
    {
        callZombie[i].zombieName(name);
        std::cout << i + 1 << ".";
        callZombie[i].out();
    }
    return (callZombie);
}
