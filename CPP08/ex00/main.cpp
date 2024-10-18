/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 16:43:07 by kilchenk          #+#    #+#             */
/*   Updated: 2024/10/17 16:50:23 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(){
	{
		try
		{
			std::vector<int> 				arr;
			std::vector<int>::iterator		iter;
			arr.reserve(5);
    		srand(time(NULL));
			for (int i = 0; i < 5; i++)
				arr.push_back(rand() % 5);
			std::vector<int>::const_iterator it = arr.begin();
			for (int i = 0; i < 5; i++)
				std::cout << BLUE << i << ": " << GREEN << *it++ << RESET_LINE;
			std::cout << RESET_LINE;
			iter = easyFind(arr, 4);
			std::cout << PURPLE << "Element "<< GREEN <<"'"<< *iter << "'";
			std::cout <<  PURPLE << " found on position " << BLUE << "'" << iter - arr.begin() << "'"<< RESET_LINE << RESET_LINE;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		try
		{
			std::vector<int> 				arr;
			std::vector<int>::iterator		iter;
			arr.reserve(5);
    		srand(time(NULL));
			for (int i = 0; i < 5; i++)
				arr.push_back(rand() % 5);
		
			iter = easyFind(arr, -1);
			std::cout << *iter << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		try
		{
			std::vector<int> 				arr;
			std::vector<int>::iterator		iter;
			arr.reserve(5);
    		srand(time(NULL));
			for (int i = 0; i < 5; i++)
				arr.push_back(rand() % 5);
		
			iter = easyFind(arr, 19);
			std::cout << *iter << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
}