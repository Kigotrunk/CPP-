/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 22:31:20 by marvin            #+#    #+#             */
/*   Updated: 2023/12/26 22:31:20 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP

# define SERIALIZER_HPP

#include <iostream>
#include <stdint.h>

struct Data
{
	int value;
	std::string value2;
};

class Serializer
{
public:
	static void* serialize(Data* data);
	static Data* deserialize(uintptr_t * ptr);
};

#endif