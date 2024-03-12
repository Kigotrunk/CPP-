/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 22:40:12 by marvin            #+#    #+#             */
/*   Updated: 2023/12/26 22:40:12 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main()
{
	Data data;
	data.value = 19;
	data.value2 = "test";

	uintptr_t* Seria_data = reinterpret_cast<uintptr_t*>(Serializer::serialize(&data));
	Data* deseria_data = Serializer::deserialize(Seria_data);

	if (deseria_data == &data)
	{
		std::cout << "All is ok" << std::endl;
		return 19;
	}
	std::cout << "Problem with deserializer..." << std::endl;
	return 19;
}