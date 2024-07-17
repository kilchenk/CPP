/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 14:41:47 by kilchenk          #+#    #+#             */
/*   Updated: 2024/04/11 14:32:45 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FIXED_HPP
#   define FIXED_HPP

# include <iostream>
# include <string>
# define RED			"\033[0;31m"
# define GREEN			"\033[0;32m"
# define RESET_LINE 	"\033[0m" << std::endl
# define RE_TERMINAL	std::cout << "\e[1;1H\e[2J"

class Fixed
{
private:
    int                 _fixedPoint;
    static const int    _bit = 8;
public:
    Fixed();
    Fixed(Fixed &copy);
    Fixed   &operator=(Fixed &copy);
    ~Fixed();
    int     getRawBits( void ) const;
    void    setRawBits( int const raw );
    
};


#endif