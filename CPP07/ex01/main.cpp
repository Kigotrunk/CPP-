/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 15:09:28 by marvin            #+#    #+#             */
/*   Updated: 2024/01/01 15:09:28 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"


int main()
{
    int intArray[] = { 1, 2, 3, 4, 5 };
    double doubleArray[] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
    char charArray[] = { 'a', 'b', 'c', 'd', 'e' };

    std::cout << "Int array: ";
    iter(intArray, 5, printElement<int>);
    std::cout << std::endl;

    std::cout << "Double array: ";
    iter(doubleArray, 5, printElement<double>);
    std::cout << std::endl;

    std::cout << "Char array: ";
    iter(charArray, 5, printElement<char>);
    std::cout << std::endl;

    return 0;
}