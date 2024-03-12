/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 18:12:58 by marvin            #+#    #+#             */
/*   Updated: 2024/01/01 18:12:58 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <numeric>

Span::Span(unsigned int n) : _max(n)
{

}

Span::Span(const Span &obj)
{
	*this = obj;
}

Span& Span::operator=(const Span &obj)
{
	if (this != &obj)
	{
		_max = obj._max;
		_container = obj._container;
	}
	return *this;
}

Span::~Span()
{}

void Span::addNumber(int x)
{
	if (_container.size() < _max)
		_container.push_back(x);
	else
		throw std::exception();
}

int	Span::shortestSpan()
{
	if (_container.size() < 2)
		throw std::exception();
	std::vector<int> cpy = _container;
	std::sort(cpy.begin(), cpy.end());
	int min = std::numeric_limits<int>::max();
	for (size_t i = 0; i < cpy.size() ; i++)
	{
		int tmp = cpy[i] - cpy[i - 1];
		if (tmp < min)
			min = tmp;
	}
	return (min);
}

int Span::longestSpan()
{
	if (_container.size() < 2)
		throw std::exception();
	std::vector<int>cpy = _container;
	std::sort(cpy.begin(), cpy.end());
	return (cpy[cpy.size() - 1] - cpy[0]);
}

void Span::range_iterator(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	for (std::vector<int>::iterator i = begin; i != end; i++)
		addNumber(*i);
}