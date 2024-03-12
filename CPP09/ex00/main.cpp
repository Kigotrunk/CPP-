/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 14:35:02 by marvin            #+#    #+#             */
/*   Updated: 2024/01/04 14:35:02 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

void displayMap(const std::map<std::string, double>& myMap) {
    std::map<std::string, double>::const_iterator it; // Itérateur constant
    for (it = myMap.begin(); it != myMap.end(); ++it) {
        std::cout << "Date: " << it->first << ", Value: " << it->second << std::endl;
    }
}


int main() {
    std::string file_name = "input.txt";
    Bitcoin* bitcoinData = filetxt(file_name);


    if (bitcoinData != NULL) 
    {
        return 1;
    }
    return 0;
}