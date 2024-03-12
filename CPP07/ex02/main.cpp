/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 15:38:51 by marvin            #+#    #+#             */
/*   Updated: 2024/01/01 15:38:51 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

int main() 
{
    Array<int> intArray(5);
    for (unsigned int i = 0; i < intArray.size(); ++i) {
        intArray[i] = i * 2;
    }

    std::cout << "Contenu de intArray : ";
    for (unsigned int i = 0; i < intArray.size(); ++i) {
        std::cout << intArray[i] << " ";
    }
    std::cout << std::endl;

    Array<double> doubleArray(3);
    doubleArray[0] = 1.5;
    doubleArray[1] = 2.7;
    doubleArray[2] = 3.14;

    std::cout << "Contenu de doubleArray : ";
    for (unsigned int i = 0; i < doubleArray.size(); ++i) {
        std::cout << doubleArray[i] << " ";
    }
    std::cout << std::endl;

	Array<double> doubleArrayCopy(doubleArray);

    std::cout << "Contenu de doubleArrayCopy (copie de doubleArray) : ";
    for (unsigned int i = 0; i < doubleArrayCopy.size(); ++i) {
        std::cout << doubleArrayCopy[i] << " ";
    }
    std::cout << std::endl;



    return 0;
}