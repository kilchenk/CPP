/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 14:29:43 by kilchenk          #+#    #+#             */
/*   Updated: 2024/07/29 14:58:44 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <assert.h>

int main() {
    Data data;
    Data *input;
    Data *output;
    uintptr_t ser;

    data.valueOne = 141;
    data.valueTwo = 88;
    input = &data;

    std::cout << input << std::endl;
    std::cout << std::endl;

    ser = Serializer::serialize(input);
    std::cout << ser << std::endl;
    std::cout << std::endl;

    output = Serializer::deserialize(ser);
    std::cout << output << std::endl;
    std::cout << std::endl;
    
    return 0;
}
