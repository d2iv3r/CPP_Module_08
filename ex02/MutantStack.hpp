/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efarhat <efarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 10:25:00 by efarhat           #+#    #+#             */
/*   Updated: 2023/12/26 15:04:13 by efarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template <class T>
class MutantStack : public std::stack<T>
{
	public:
		typedef typename std::deque<T>::iterator iterator;

		MutantStack() : std::stack<T>() {};
		MutantStack(std::stack<T> const &cpy) : std::stack<T>(cpy) {};
		MutantStack& operator=(MutantStack<T> const &cpy) { std::stack<T>::operator=(cpy); return(*this); };
		~MutantStack() {};

		iterator begin() { return (this->c.begin()); }
		iterator end() { return (this->c.end()); }
};

#endif
