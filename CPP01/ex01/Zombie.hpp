/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 15:57:33 by kilchenk          #+#    #+#             */
/*   Updated: 2024/03/13 15:53:32 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ZOMBIE_HPP
#   define ZOMBIE_HPP
# include <iostream>
# include <string>
# define RED			"\033[0;31m"
# define GREEN			"\033[0;32m"
# define RESET_LINE 	"\033[0m" << std::endl
# define RE_TERMINAL	std::cout << "\e[1;1H\e[2J"

class Zombie
{
private:
    std::string _name;
public:
    Zombie();
    ~Zombie();
    void    zombieName(std::string name);
    void    out(void);
};

Zombie* zombieHorde( int N, std::string name );

#endif