/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:42:57 by kilchenk          #+#    #+#             */
/*   Updated: 2024/10/24 19:23:43 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

void    findDate(int &day, int &month, int &year){
    if (day != 1)
        day--;
    else if (day == 1 && month != 1){
        if (month == 5 || month == 7 || month == 10 || month == 12){
            day = 30;
            month--;
        }
        else{
            day = 31;
            month--;
        }
    }
    else if (day == 1 && month == 1){
        year--;
        day = 31;
        month = 12;
    }
}

BitcoinExchange::BitcoinExchange()
{
    
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy)
{
    _data = copy._data;
    *this = copy;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &copy)
{
    this->_data = copy._data;
    return(*this);
}

BitcoinExchange::~BitcoinExchange()
{
    
}

void BitcoinExchange::initData()
{
    std::ifstream inFile("data.csv");
    if (!inFile.is_open())
        throw BitcoinExchange::checkDB();
    std::string line;
    std::string date;
    double      value;
    while (getline(inFile, line))
    {
        std::istringstream iss(line);
        getline(iss, date, ',');
        iss >> value;
        _data[date] = value; 
    }
    inFile.close();
}

std::map<std::string, double>::iterator BitcoinExchange::findData(std::string dat)
{
    std::map<std::string, double>::iterator it = _data.find(dat);
    std::istringstream iss(dat);
    int year, month, day;
    char dash;
    iss >> year >> dash >> month >> dash >> day;
    std::string newDate;
    std::ostringstream oss;
    while (it == _data.end())
    {
        findDate(day, month, year);
        oss.str(""); //clear
        if (month < 10 && day >= 10)
            oss << year << "-0" << month << "-" << day;
        else if (month < 10 && day < 10)
            oss << year << "-0" << month << "-0" << day;
        else if (month >= 10 && day < 10)
            oss << year << "-" << month << "-0" << day;
        else
            oss << year << "-" << month << "-" << day;
        newDate = oss.str();
        it = _data.find(newDate);
    }
    return (it);
}


const char *BitcoinExchange::checkDB::what() const throw()
{
    return ("\033[1;31mError:\033[0m \033[1;34mcannot open data base file.\033[0m");
}

const char *BitcoinExchange::checkIF::what() const throw()
{
    return ("\033[1;31mError:\033[0m \033[1;34mcannot open txt file.\033[0m");
}