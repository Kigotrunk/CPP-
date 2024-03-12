/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 15:13:59 by marvin            #+#    #+#             */
/*   Updated: 2024/01/01 15:13:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

# include <stdexcept>

template<typename T>
class Array
{
private:
	T *array;
	unsigned int arr_size;
public:
	Array() : arr_size(0)
	{
		array = new T[0];
	}
	Array(unsigned int n) : arr_size(n)
	{
		array = new T[n];
	}
	Array(const Array &obj) : arr_size(obj.arr_size)
	{
		array = new T[arr_size];
		for (unsigned int i = 0; i < arr_size; i++)
			array[i] = obj.array[i];
	}
	Array& operator=(const Array &obj)
	{
		if (this != &obj)
		{
			delete[] array;
			arr_size = obj.arr_size;
			array = new T[arr_size];
			for (unsigned int i = 0; i < arr_size; i++)
				array[i] = obj.array[i];
		}
	}
	T& operator[](unsigned int n)
	{
		if (n > arr_size)
			throw std::exception();
		return array[n];
	}
	unsigned int size()
	{
		return arr_size;
	}
	~Array(){
		delete[] array;
	}
};
#endif