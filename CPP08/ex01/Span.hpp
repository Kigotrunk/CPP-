/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 18:02:39 by marvin            #+#    #+#             */
/*   Updated: 2024/01/01 18:02:39 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP


#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>

class Span
{
private:
	std::vector<int> _container;
	unsigned int _max;
public:
	Span(unsigned int n);
	Span(const Span &obj);
	Span& operator=(const Span &obj);
	~Span();

	void addNumber(int x);
	int	shortestSpan();
	int	longestSpan();
	void range_iterator(std::vector<int>::iterator begin, std::vector<int>::iterator end);
};

#endif