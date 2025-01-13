/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efarhat <efarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 16:00:23 by efarhat           #+#    #+#             */
/*   Updated: 2023/12/26 15:10:49 by efarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int const &n) : N(n), added(0)
{
}

Span::Span(const Span &cpy)
{
	*this = cpy;
}

Span& Span::operator=(const Span &cpy)
{
	if (this != &cpy)
	{
		this->N = cpy.N;
		this->added = cpy.added;
		this->con = cpy.con;
	}
	return (*this);
}

void Span::addNumber(int const &nb)
{
	if (added == N)
		throw std::logic_error("Exception: The span is full!");
	con.push_back(nb);
	added++;
}

int Span::shortestSpan() const
{
	if (added <= 1)
		throw std::logic_error("Exception: add new numbers and retry!");
	int	shortest;
	std::vector<int> tmp = con;
	std::sort(tmp.begin(), tmp.end());
	shortest = tmp[1] - tmp[0];
	for (size_t i = 0; i < tmp.size() - 1; i++)
	{
		int sub = tmp[i + 1] - tmp[i];
		shortest = std::min(sub, shortest);
	}
	return (shortest);
}

int Span::longestSpan() const
{
	if (added <= 1)
		throw std::logic_error("Exception: add new numbers and retry!");
	std::vector<int> tmp = con;
	std::sort(tmp.begin(), tmp.end());
	return (tmp.back() - tmp.front());
}

Span::~Span()
{
}

void Span::insertNumbers(std::vector<int>::iterator const &b, std::vector<int>::iterator const &e)
{
	unsigned int dis = std::distance(b, e);
	if ((N - con.size()) < dis)
		throw std::logic_error("Exception: The span is full!");
	con.insert(con.end(), b, e);
	added += dis;
}
