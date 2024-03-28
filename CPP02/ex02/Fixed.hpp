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
        ~Fixed();
        int     getRawBits( void ) const;
        void    setRawBits( int const raw );
        float   toFloat( void ) const;
        int     toInt( void ) const;
        //min
        static Fixed &min(Fixed &first, Fixed &second);
        static const Fixed &min(const Fixed &first, const Fixed &second);
        //max
        static Fixed &max(Fixed &first, Fixed &second);
        static const Fixed &max(const Fixed &first, const Fixed &second);

    public:
        Fixed   &operator=(const Fixed &copy);
        bool    operator>(const Fixed &num);
        bool    operator<(const Fixed &num);
        bool    operator>=(const Fixed &num);
        bool    operator<=(const Fixed &num);
        bool    operator==(const Fixed &num);
        bool    operator!=(const Fixed &num);
        Fixed   operator+(const Fixed &num);
        Fixed   operator-(const Fixed &num);
        Fixed   operator*(const Fixed &num);
        Fixed   operator/(const Fixed &num);
        Fixed   &operator++(void);
        Fixed   operator++(int);
        Fixed   &operator--(void);
        Fixed   operator--(int);
};

std::ostream &operator<<(std::ostream &streamy, Fixed const &num);

#endif