/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 15:45:39 by kilchenk          #+#    #+#             */
/*   Updated: 2024/04/10 13:11:16 by kilchenk         ###   ########.fr       */
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
    
    Zombie(std::string name);
    ~Zombie();
    void    out(void);
};

Zombie  *newZombie( std::string name );
void    randomChump( std::string name );

#endif