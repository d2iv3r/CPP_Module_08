/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efarhat <efarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 16:03:14 by efarhat           #+#    #+#             */
/*   Updated: 2023/12/26 15:11:20 by efarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int generator()
{
	static int nb = 0;
	return (++nb);
}

int main()
{
	{Span sp = Span(2);
	try
	{
		sp.addNumber(5);
		sp.addNumber(2);
		sp.addNumber(10);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}}

	//////////// subject test ////////////
	{Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;}

	/////////////////////////////////////////////////
	{std::cout << "*****************************************" << std::endl;
	int size = 15000;
	std::vector<int> vec(size);
	std::generate(vec.begin(), vec.end(), generator);
	Span mySpan(size);
	try
	{
		mySpan.insertNumbers(vec.begin(), vec.end());
		std::cout << "----- shortest span -----" << std::endl;
		std::cout << mySpan.shortestSpan() << std::endl;
		std::cout << "----- longest span -----" << std::endl;
		std::cout << mySpan.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}}
}
