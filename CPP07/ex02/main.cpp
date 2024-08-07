/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 14:16:17 by kilchenk          #+#    #+#             */
/*   Updated: 2024/08/07 14:44:29 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

struct Point 
{
    int x, y;
// Constructor with parameters with initialization inside the constructor body
    Point(int a = 0, int b = 0) 
    {
        x = a;
        y = b;
    }
};

int main(void)
{
    try {
        std::cout << RED << '|' << std::string(70, '-')  << RED << '|' << RESET_LINE;
        std::cout << RED << '|' << PURPLE << "Test 1 - Default constructor (creating an empty array)                " << RED << '|' << RESET_LINE;
        std::cout << RED << '|' << std::string(70, '-')  << RED << '|' << RESET_LINE;
        Array<int> emptyArray;
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
        std::cout << RED << '|' << std::string(70, '-')  << RED << '|' << RESET_LINE;
        std::cout << RED << '|' << PURPLE << "Test 2 - Constructor with parameter (creating an array of n elements) " << RED << '|' << RESET_LINE;
        std::cout << RED << '|' << std::string(70, '-')  << RED << '|' << RESET_LINE;  
              
        unsigned int n = 5;
        Array<int> arrayWithElements(n);
        std::cout << RED << '|' << BLUE << "Array with - " << GREEN << n << BLUE << " elements" << RED << "                                               |" << RESET_LINE;
        std::cout << RED << '|' << std::string(70, '-')  << RED << '|' << RESET_LINE;    
        
        for (unsigned int i = 0; i < n; ++i)
        {
            std::cout << RED << '|' << std::string(70, '-')  << RED << '|' << RESET_LINE;   
            std::cout << RED << '|' << BLUE << "Element " << i << " - " << GREEN << arrayWithElements[i] << RED << "                                                         |" << RESET_LINE;
        }
        std::cout << RED << '|' << std::string(70, '-')  << RED << '|' << RESET_LINE;   
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------        
        std::cout << RED << '|' << std::string(70, '-')  << RED << '|' << RESET_LINE;
        std::cout << RED << '|' << PURPLE << "Test 3 - Assignment operator                                          " << RED << '|' << RESET_LINE;
        std::cout << RED << '|' << std::string(70, '-')  << RED << '|' << RESET_LINE;
        
        Array<int> arrayCopy;
        arrayCopy = arrayWithElements;
        arrayWithElements[0] = 42;
        std::cout << RED << '|' << BLUE << "Original array first element - " << GREEN << arrayWithElements[0] << RED << "                                     |" << RESET_LINE;
        std::cout << RED << '|' << std::string(70, '-')  << RED << '|' << RESET_LINE;   
        std::cout << RED << '|' << BLUE << "Copied array first element - " << GREEN << arrayCopy[0] << RED << "                                        |" << RESET_LINE;

        std::cout << RED << '|' << std::string(70, '-')  << RED << '|' << RESET_LINE;   
        std::cout << RED << '|' << BLUE << "Element 0" << " - " << GREEN << arrayWithElements[0] << RED << "                                                        |" << RESET_LINE;
        std::cout << RED << '|' << std::string(70, '-')  << RED << '|' << RESET_LINE;   
        std::cout << RED << '|' << BLUE << "Element 1" << " - " << GREEN << arrayWithElements[1] << RED << "                                                         |" << RESET_LINE;
        std::cout << RED << '|' << std::string(70, '-')  << RED << '|' << RESET_LINE;   
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
        std::cout << RED << '|' << std::string(70, '-')  << RED << '|' << RESET_LINE;
        std::cout << RED << '|' << PURPLE << "Test 4 - Copy constructor                                             " << RED << '|' << RESET_LINE;
        std::cout << RED << '|' << std::string(70, '-')  << RED << '|' << RESET_LINE;
        
        Array<int> arrayCopied(arrayWithElements);
        arrayWithElements[1] = 24;
        std::cout << RED << '|' << BLUE << "Original array first element - " << GREEN << arrayWithElements[1] << RED << "                                     |" << RESET_LINE;
        std::cout << RED << '|' << std::string(70, '-')  << RED << '|' << RESET_LINE;   
        std::cout << RED << '|' << BLUE << "Copied array first element - " << GREEN << arrayCopy[1] << RED << "                                        |" << RESET_LINE;

        std::cout << RED << '|' << std::string(70, '-')  << RED << '|' << RESET_LINE;   
        std::cout << RED << '|' << BLUE << "Element 0" << " - " << GREEN << arrayWithElements[0] << RED << "                                                        |" << RESET_LINE;
        std::cout << RED << '|' << std::string(70, '-')  << RED << '|' << RESET_LINE;   
        std::cout << RED << '|' << BLUE << "Element 1" << " - " << GREEN << arrayWithElements[1] << RED << "                                                        |" << RESET_LINE;
        std::cout << RED << '|' << std::string(70, '-')  << RED << '|' << RESET_LINE;
        std::cout << RED << '|' << BLUE << "Element 2" << " - " << GREEN << arrayWithElements[2] << RED << "                                                         |" << RESET_LINE;
        std::cout << RED << '|' << std::string(70, '-')  << RED << '|' << RESET_LINE;      
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
        std::cout << RED << '|' << std::string(70, '-')  << RED << '|' << RESET_LINE;
        std::cout << RED << '|' << PURPLE << "Test 5 - Checking for array overruns                                  " << RED << '|' << RESET_LINE;
        std::cout << RED << '|' << std::string(70, '-')  << RED << '|' << RESET_LINE;
        
        try { 
        std::cout << RED << '|' << BLUE << "Out of bounds element" << " - " << GREEN << arrayWithElements[n + 1] << RED << "                                                        |" << RESET_LINE;
        std::cout << RED << '|' << std::string(70, '-')  << RED << '|' << RESET_LINE;   
        } catch (const std::exception &e) {
            std::cerr << BLUE << "Exception caught: " << e.what() << RED << " |" << RESET_LINE;
        }
        std::cout << RED << '|' << std::string(70, '-')  << RED << '|' << RESET_LINE;   
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
        std::cout << RED << '|' << std::string(70, '-')  << RED << '|' << RESET_LINE;
        std::cout << RED << '|' << PURPLE << "Test 6 - Working with an array of other data types (strings)          " << RED << '|' << RESET_LINE;
        Array<std::string> stringArray(3);
        stringArray[0] = "Hello";
        stringArray[1] = "World";
        stringArray[2] = "!    ";
        for (unsigned int i = 0; i < 3; ++i) 
        {
            std::cout << RED << '|' << std::string(70, '-')  << RED << '|' << RESET_LINE;   
            std::cout << RED << '|' << BLUE << "String element " << i << " - " << GREEN << stringArray[i] << RED << "                                              |" << RESET_LINE;
        }
        std::cout << RED << '|' << std::string(70, '-')  << RED << '|' << RESET_LINE;   
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
        std::cout << RED << '|' << std::string(70, '-')  << RED << '|' << RESET_LINE;
        std::cout << RED << '|' << PURPLE << "Test 7 - Working with an array of a custom type                       " << RED << '|' << RESET_LINE;

        Array<Point> pointsArray(2);
        pointsArray[0] = Point(1, 2);
        pointsArray[1] = Point(3, 4);

        for (unsigned int i = 0; i < 2; ++i) 
        {
            std::cout << RED << '|' << std::string(70, '-')  << RED << '|' << RESET_LINE;   
            std::cout << RED << '|' << BLUE << "Point " << i << " - (" << GREEN << pointsArray[i].x << BLUE <<", " << GREEN << pointsArray[i].y << BLUE << ")" << RED << "                                                      |" << RESET_LINE;
        }
        std::cout << RED << '|' << std::string(70, '-')  << RED << '|' << RESET_LINE;
        }
    catch (const std::exception &e) 
    {
            std::cerr << "Exception caught: " << e.what() << std::endl;
    }
}
