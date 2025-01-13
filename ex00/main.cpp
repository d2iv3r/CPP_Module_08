/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efarhat <efarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 11:15:17 by efarhat           #+#    #+#             */
/*   Updated: 2023/12/26 12:03:07 by efarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <deque>
#include <list>

int main()
{
	///////////////////// vector ////////////////////////
	std::cout << "********************* VECTOR *********************" << std::endl;
	int arr[] = {12, 5, 60, 3, 1, 8, 16, 0, 6};
	int size = sizeof(arr) / sizeof(int);

	std::vector<int> vec;
	for (int i = 0; i < size; i++)
		vec.push_back(arr[i]);
	if (easyfind(vec, 6))
		std::cout << "found" << std::endl;
	else
		std::cout << "Not found!" << std::endl;

	// ///////////////////// deque /////////////////////////
	std::cout << "********************* DEQUE *********************" << std::endl;
	std::deque<int> deq;
	for (size_t i = 0; i < 10; i++)
		deq.push_back(i + 1);
	if (easyfind(deq, 6))
		std::cout << "found" << std::endl;
	else
		std::cout << "Not found!" << std::endl;

	// ////////////////// list ///////////////////////////
	std::cout << "********************* LIST *********************" << std::endl;
	std::list<int> l;
	for (size_t i = 0; i < 10; i++)
		l.push_back(i + 1);
	if (easyfind(l, 12))
		std::cout << "found" << std::endl;
	else
		std::cout << "Not found!" << std::endl;
}
