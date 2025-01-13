/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efarhat <efarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 16:59:08 by efarhat           #+#    #+#             */
/*   Updated: 2023/12/26 15:21:48 by efarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

int main()
{
	/// subject test
	{MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);}
	//// list /////
	std::cout << "++++++++++++++++++++++++++++++++++++++++" << std::endl;
	{std::list<int> lis;
	lis.push_back(5);
	lis.push_back(17);
	std::cout << lis.back() << std::endl;
	lis.pop_back();
	std::cout << lis.size() << std::endl;
	lis.push_back(3);
	lis.push_back(5);
	lis.push_back(737);
	//[...]
	lis.push_back(0);
	std::list<int>::iterator it = lis.begin();
	std::list<int>::iterator ite = lis.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}}

	// ////// iterators ///////
	std::cout << "++++++++++++++++++++++++++++++++++++++++" << std::endl;
	MutantStack<int>mystack;
	mystack.push(10);
	mystack.push(20);
	mystack.push(30);
	mystack.push(40);
	mystack.push(50);
	MutantStack<int>::iterator it = mystack.begin();
	MutantStack<int>::iterator itend = mystack.end();
	while (it != itend)
	{
		if (*it == 30)
			*it = 300;
		it++;
	}
	it = mystack.begin();
	while (it != itend)
	{
		std::cout << *it << std::endl;
		it++;
	}
	//////////////strings stack///////////////////
	std::cout << "++++++++++++++++++++++++++++++++++++++++" << std::endl;
	MutantStack<std::string>strstack;
	strstack.push("hello");
	strstack.push("this");
	strstack.push("is");
	strstack.push("strings");
	strstack.push("stack");
	MutantStack<std::string>::iterator sit = strstack.begin();
	MutantStack<std::string>::iterator sitend = strstack.end();
	while (sit != sitend)
	{
		std::cout << *sit << std::endl;
		sit++;
	}
	return 0;
}
