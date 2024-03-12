/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 22:36:26 by marvin            #+#    #+#             */
/*   Updated: 2023/12/26 22:36:26 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

void* Serializer::serialize(Data *data)
{
	return (reinterpret_cast<uintptr_t*>(data));
}

Data* Serializer::deserialize(uintptr_t* ptr)
{
	return (reinterpret_cast<Data*>(ptr));
}