/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 18:04:34 by kilchenk          #+#    #+#             */
/*   Updated: 2024/04/11 14:59:02 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FIXED_HPP
#   define FIXED_HPP

# include <iostream>
#include <cmath>
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
        Fixed(const Fixed &copy);
        Fixed(int const num);
        Fixed(float const num);
        Fixed   &operator=(const Fixed &copy);
        ~Fixed();
        int     getRawBits( void ) const;
        void    setRawBits( int const raw );
        float   toFloat( void ) const;
        int     toInt( void ) const;
};

std::ostream &operator<<(std::ostream &streamy, Fixed const &num);

#endif