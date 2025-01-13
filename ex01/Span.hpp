/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efarhat <efarhat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 15:00:51 by efarhat           #+#    #+#             */
/*   Updated: 2023/12/26 15:10:31 by efarhat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <exception>

class Span
{
	private:
		std::vector<int>	con;
		unsigned int		N;
		unsigned int		added;
		Span();
	public:
		Span(unsigned int const &n);
		Span(const Span &cpy);
		Span& operator=(const Span &cpy);
		~Span();

		void addNumber(int const &nb);
		int shortestSpan() const;
		int longestSpan() const;
		void insertNumbers(std::vector<int>::iterator const &b, std::vector<int>::iterator const &e);
};

#endif
