/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 13:22:59 by kilchenk          #+#    #+#             */
/*   Updated: 2024/04/10 15:24:45 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef HARL_HPP
#   define HARL_HPP
# include <iostream>
# include <string>
# define RED			"\033[0;31m"
# define GREEN			"\033[0;32m"
# define RESET_LINE 	"\033[0m" << std::endl
# define RE_TERMINAL	std::cout << "\e[1;1H\e[2J"

class Harl
{
private:
    void    _debug(void);
    void    _info(void);
    void    _warning(void);
    void    _error(void);
public:
    Harl();
    ~Harl();
    void    complain(std::string level);
};

#endif
