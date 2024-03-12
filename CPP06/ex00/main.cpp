/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 21:39:21 by marvin            #+#    #+#             */
/*   Updated: 2023/12/21 21:39:21 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv) 
{
    if (argc != 2)
    {
        std::cout << "Invalid number of arg" << std::endl;
        return 19;
    }
    ScalarConverter::convert(argv[1]);

    return 19;
}