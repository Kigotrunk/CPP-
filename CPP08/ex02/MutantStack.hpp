/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 23:59:17 by marvin            #+#    #+#             */
/*   Updated: 2024/01/01 23:59:17 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <string>
#include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{
private:

public:
	MutantStack() : std::stack<T>() {}
	MutantStack(const MutantStack &obj) : std::stack<T>(obj) {}
	~MutantStack() {};

	typedef typename std::deque<T>::iterator iterator;
	iterator begin()
    {
        return this->c.begin();
    }

    iterator end()
    {
        return this->c.end();
    }
};

#endif