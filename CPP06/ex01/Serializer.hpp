/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 14:29:40 by kilchenk          #+#    #+#             */
/*   Updated: 2024/07/29 15:10:41 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef SERIALIZER_HPP
#  define SERIALIZER_HPP

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <climits>
#include <stdint.h>
# define RED			"\033[0;31m"
# define GREEN			"\033[0;32m"
# define RESET_COLOR 	"\033[0m"
# define RESET_LINE 	"\033[0m" << std::endl
# define RE_TERMINAL	std::cout << "\e[1;1H\e[2J"

typedef struct s_data
{
    int valueOne;
    int valueTwo;
} Data;

class Serializer
{
    private:
        Serializer();
        Serializer(const Serializer &copy);
        Serializer  &operator=(const Serializer &copy);
        ~Serializer();
    public:
        static uintptr_t	serialize(Data *ptr);
        static Data		    *deserialize(uintptr_t raw);
};

#endif