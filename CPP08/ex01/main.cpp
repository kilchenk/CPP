/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kilchenk <kilchenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 17:06:41 by kilchenk          #+#    #+#             */
/*   Updated: 2024/10/18 19:13:49 by kilchenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <climits>
#include "Span.hpp"

int main()
{
	srand(time(NULL));
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	try
	{
		std::cout << BLUE << "/* Trying to add more than MAX amount of numbers */" << RESET_LINE;
		std::cout << BLUE << std::string(49,'-') << RESET_LINE;
		sp.addNumber(12);
		sp.addNumber(12);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << BLUE << std::string(49,'-') << RESET_LINE << RESET_LINE;
	std::cout << PURPLE << "Shortest Span:   " << GREEN << sp.shortestSpan() << std::endl;
	std::cout << PURPLE << "Longest Span:    " << GREEN << sp.longestSpan() << std::endl;
	std::vector<int> array;
	array.reserve(20);
	std::cout << BLUE << "/* Adding an array of numbers to the span */" << RESET_LINE;
	std::cout << BLUE << std::string(49,'-') << RESET_LINE;
	for (size_t i = 0; i < 20; i++)
	{
		int num = rand()%100;
		array.push_back(num);
		std::cout << GREEN << num << RED << (i < 19 ? ", ": "\n") << RESET_LINE;
	}
	std::cout << BLUE << std::string(49,'-') << std::endl <<RESET_LINE;

	Span intSpan(20);
	intSpan.addSpan(array.begin(), array.end());
	std::cout << PURPLE << "Shortest Span:   " << GREEN << intSpan.shortestSpan() << std::endl;
	std::cout << PURPLE << "Longest Span:    " << GREEN << intSpan.longestSpan() << std::endl;
	/* over span */
	Span overSpan(10);
	std::cout << BLUE << std::endl << "/* Trying to add more than MAX amount of numbers */" << RESET_LINE;
	std::cout << BLUE << std::string(49,'-') << RESET_LINE;
	try
	{
		overSpan.addSpan(array.begin(), array.end());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << BLUE << std::string(49,'-') << RESET_LINE;

	std::cout << BLUE << std::endl << "/* Trying to create and fill an empty Array */" << RESET_LINE;
	std::cout << BLUE << std::string(49,'-') << RESET_LINE;

	try
	{
		Span emptySpan(0);
		emptySpan.addNumber(6);
		emptySpan.addNumber(3);
		emptySpan.addNumber(17);
		emptySpan.addNumber(9);
		emptySpan.addNumber(11);
		std::cout << PURPLE << "Shortest Span:   " << GREEN << emptySpan.shortestSpan() << std::endl;
		std::cout << PURPLE << "Longest Span:    " << GREEN << emptySpan.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << BLUE << std::string(49,'-') << RESET_LINE;
	std::cout << BLUE << std::endl << "/* Trying to get span from not populated array */" << RESET_LINE;
	std::cout << BLUE << std::string(49,'-') << RESET_LINE;

	try
	{
		Span anotherSpan(5);
		anotherSpan.shortestSpan();
		anotherSpan.longestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << BLUE << std::string(49,'-') << RESET_LINE;	

	return 0; 
}