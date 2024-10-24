/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:33:23 by kilchenk          #+#    #+#             */
/*   Updated: 2024/10/24 19:23:54 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef BITCOIN_EXCHANGE_HPP
#   define BITCOIN_EXCHANGE_HPP

#include <iostream>
#include <cmath>
#include <climits>
#include <cstdlib>
#include <vector>
#include <map>
#include <fstream>
#include <sstream>
#include <string>
#include <iomanip>

# define RED			"\033[0;31m"
# define GREEN			"\033[0;32m"
# define BLUE           "\033[1m\033[36m"
# define PURPLE         "\033[35m"
# define RESET_COLOR 	"\033[0m"
#define  BOLDRED        "\033[1m\033[31m"
# define RESET_LINE 	"\033[0m" << std::endl
# define RE_TERMINAL	std::cout << "\e[1;1H\e[2J"


class BitcoinExchange
{
    private:
        std::map<std::string, double> _data;
    public:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange &copy);
        BitcoinExchange &operator=(const BitcoinExchange &copy);
        ~BitcoinExchange();
    public:
        void                          initData();
        std::map<std::string, double>::iterator findData(std::string dat);
    class checkDB : public std::exception
    {
        const char* what() const throw();
    };
    class checkIF : public std::exception
    {
        virtual const char* what() const throw();
    };
};


#endif