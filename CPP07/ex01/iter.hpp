/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 15:05:03 by marvin            #+#    #+#             */
/*   Updated: 2024/01/01 15:05:03 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

# include <iostream>

template <typename T>
void iter(T *array, int size, void (*f)(T&))
{
	for (int x = 0; x < size; x++)
		f(array[x]);
}

template <typename T>
void printElement(T& element)
{
    std::cout << element << " ";
}

#endif