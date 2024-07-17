/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 13:17:37 by kilchenk          #+#    #+#             */
/*   Updated: 2024/05/03 15:38:44 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ANIMAL_HPP
#   define ANIMAL_HPP
# include <iostream>
# include <string>
# define RED			"\033[0;31m"
# define GREEN			"\033[0;32m"
# define RESET_COLOR 	"\033[0m"
# define RESET_LINE 	"\033[0m" << std::endl
# define RE_TERMINAL	std::cout << "\e[1;1H\e[2J"

class Animal
{
    protected:
        std::string _type;
    public:
        Animal();
        Animal(const Animal &copy);
        Animal &operator=(const Animal &copy);
        virtual ~Animal();

        virtual void    makeSound() const = 0;
        const std::string   &getType() const;
};



#endif