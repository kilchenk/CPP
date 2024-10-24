/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:32:24 by kilchenk          #+#    #+#             */
/*   Updated: 2024/10/24 19:29:05 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

bool	dateCases(std::string date)
{
	std::istringstream iss(date);
	int year, month, day;
	char dash;

	if (!(iss >> year >> dash >> month >> dash >> day))
		return (false);
	if ((year == 2009 && (month == 1 && day < 2)))
		return (false);
	if (year == 2024 && month >= 2 && day > 15)
		return (false);
	if (((year < 2009 || year > 2024) || (month < 1 || month > 12) || (day < 1 || day > 31)))
		return (false);
	else if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
		return (false);
	if (month == 2)
	{
	   if ((year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)))
		{
			if (day > 29)
				return (false);
		}
		else
		{
		if (day > 28)
			return (false);
		}
	}
	return (true);
}

std::string trim(std::string str)
{
   size_t begin = str.find_first_not_of(" \t");
   if (begin == std::string::npos)
      return("");
   size_t end = str.find_last_not_of(" \t");
   return (str.substr(begin, end - begin + 1));
}

int main(int argc, char **argv)
{
   if (argc == 2)
   {
      BitcoinExchange data;
      try
      {
         data.initData();
      }
      catch(const std::exception& e)
      {
         std::cerr << e.what() << '\n';
         return 0;
      }
      std::ifstream inFile(argv[1]);
      if(!inFile.is_open())
      {
         throw BitcoinExchange::checkIF();
         return 1;
      }
      std::map<std::string, double>::iterator it; 
      std::map<std::string, double> map;
      std::string line;
      double value;
      while (std::getline(inFile, line))
      {
         std::istringstream iss(line);
         std::string date;
         if (std::getline(iss, date, '|'))
         {
            iss >> value;
            if (trim(date) == "date")
               continue ;
            else if (!dateCases(trim(date)))
               std::cerr << BOLDRED << "Error: " << BLUE << "bad input => " << GREEN << date << RESET_LINE;
            else if (value < 0)
               std::cerr << BOLDRED << "Error: " << BLUE << "not a positive number." << RESET_LINE;
            else if (value > INT_MAX)
               std::cerr << BOLDRED << "Error: " << BLUE << "too large number." << RESET_LINE;
            else
            {
               date = trim(date);
               it = data.findData(date);
               std::cout << date << " => " << value << " = " << value * it->second << std::endl;   
            }
         }
         else
			   std::cerr << "Error: bad input => " << date << std::endl;
      }
      inFile.close();  
   }
   else
   {
        std::cerr << BOLDRED << "Error: " << BLUE << "Could not open file." << RESET_LINE;
        return 1;
   } 
}