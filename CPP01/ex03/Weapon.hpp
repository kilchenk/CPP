/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 14:52:09 by kilchenk          #+#    #+#             */
/*   Updated: 2024/03/18 12:58:20 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef WEAPON_HPP
#   define WEAPON_HPP
# include <iostream>
# include <string>
// # include "HumanA.hpp"
// # include "HumanB.hpp"
# define RED			"\033[0;31m"
# define GREEN			"\033[0;32m"
# define RESET_LINE 	"\033[0m" << std::endl
# define RE_TERMINAL	std::cout << "\e[1;1H\e[2J"

class Weapon
{
    private:
        std::string _type;
    public:
        Weapon();
        Weapon(const std::string &newType);
        ~Weapon();
        const std::string   &getType();
        void                setType(const std::string &newType);
};


#endif
