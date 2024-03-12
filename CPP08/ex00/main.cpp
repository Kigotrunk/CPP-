/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 15:53:11 by marvin            #+#    #+#             */
/*   Updated: 2024/01/01 15:53:11 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

#include <list>

int main() {
    std::list<int> vec;
    vec.push_back(2);
    vec.push_back(4);
    vec.push_back(6);
    vec.push_back(8);
    vec.push_back(10);

    int valueToFind = 10;
    int index = easyfind(vec, valueToFind);
    if (index != -19) {
        std::cout << "La valeur " << valueToFind << " a été trouvée à la position : " << index + 1 << std::endl;
    } else {
        std::cout << "La valeur " << valueToFind << " n'a pas été trouvée dans le conteneur." << std::endl;
    }

    int valueNotPresent = 5;
    int indexNotFound = easyfind(vec, valueNotPresent);
    if (indexNotFound != -19) {
        std::cout << "La valeur " << valueNotPresent << " a été trouvée à la position : " << indexNotFound + 1 << std::endl;
    } else {
        std::cout << "La valeur " << valueNotPresent << " n'a pas été trouvée dans le conteneur." << std::endl;
    }
    return 0;
}