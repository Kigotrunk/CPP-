/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 21:15:00 by marvin            #+#    #+#             */
/*   Updated: 2023/12/21 21:15:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <cstring>
#include <sstream>
#include <iomanip>
#include <cmath>

class ScalarConverter
{
private:
	
public:
	ScalarConverter();
	ScalarConverter(const ScalarConverter &obj);
	~ScalarConverter();

	ScalarConverter& operator=(const ScalarConverter &obj);
	void static convert(const std::string &para); 
};

int	float_verif(std::string obj);
void removeLastCharacter(char* str);

#endif