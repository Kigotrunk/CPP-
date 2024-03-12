/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 21:17:44 by marvin            #+#    #+#             */
/*   Updated: 2023/12/21 21:17:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
	std::cout << "Scalar Constructor call" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter &obj)
{
	std::cout << "Scalar Constructor by copy call" << std::endl;
	*this = obj;
}

ScalarConverter::~ScalarConverter()
{
	std::cout << "Scalar Destructor call" << std::endl;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter &obj)
{
	(void) obj;
	return (*this);
}

bool isInt(const char *str) {
    int length = std::strlen(str);
    for (int i = 0; i < length; ++i) {
        if (!std::isdigit(str[i])) {
            return false;
        }
    }
    return true;
}

void ScalarConverter::convert(const std::string &obj) {
    char* str = new char[obj.length() + 1];
    std::strcpy(str, obj.c_str());
    if (obj == "+inf" || obj == "-inf" || obj == "nan" || obj == "+inff" || obj == "-inff" || obj == "nanf") {
        std::cout << "Char : Impossible" << std::endl;
    }
    else if (obj.length() == 1) 
    {
        std::cout << "Char : " << obj << std::endl;
    }
    else
    {
        char* conv;
        int convert = (int)strtod(str, &conv);
        if (convert >= 32 && convert <= 127)
            std::cout << "Char : " << static_cast<char>(convert) << std::endl;
        else
            std::cout << "Char : Invalid " << std::endl;
    }
    char* end;
    if (str[std::strlen(str) - 1] == 'f')
		removeLastCharacter(str);
    int verif = 0;
    if (obj.length() == 1 && !isdigit(obj[0]))
    {
        verif = 1;
        std::cout << "Int : " << static_cast<int>(obj[0]) << std::endl;
    }
    else {
    int intValue = (int)strtod(str, &end);
    if (end != str && *end == '\0') {
        if (std::strcmp(str, "-inff") == 0 || std::strcmp(str, "+inff") == 0 || std::strcmp(str, "nanf") == 0 ||
        std::strcmp(str, "-inf") == 0 || std::strcmp(str, "+inf") == 0 || std::strcmp(str, "nan") == 0) {
            std::cout << "Int : Impossible" << std::endl;
    } else
        std::cout << "Int : " << intValue << std::endl;
    } else
        std::cout << "Int : Invalid " << std::endl;
    }
    end = NULL;
    if (verif == 1)
        std::cout << "Float : " << static_cast<int>(obj[0]) << ".0f" << std::endl;
    else {
        float floatValue = strtof(str, &end);
        if (end != str && *end == '\0') {
            if (std::strcmp(str, "-inff") == 0 || std::strcmp(str, "+inff") == 0 || std::strcmp(str, "nanf") == 0)
                std::cout << "Float : " << str << std::endl;
            else if (std::strcmp(str, "-inf") == 0 || std::strcmp(str, "+inf") == 0 || std::strcmp(str, "nan") == 0)
                std::cout << "Float : " << str << "f" << std::endl;
            else {
            double integerPart;
            double decimalPart = modf(floatValue, &integerPart);

            if (std::fabs(decimalPart) < 0.01 || std::fabs(decimalPart - 1.0) < 0.01) {
                std::cout << "Float : " << std::fixed << std::setprecision(1) << integerPart << "f" << std::endl;
            } else {
                std::cout << "Float : " << floatValue << "f" << std::endl;
            }
            }
        }
        else
            std::cout << "Float : Invalid " << std::endl;
    }
    end = NULL;
    if (verif == 1)
        std::cout << "Double : " << static_cast<int>(obj[0]) << ".0" << std::endl;
    else {
    double doubleValue = strtod(str, &end);
    if (end != str && *end == '\0') {
        if (std::strcmp(str, "-inff") == 0 || std::strcmp(str, "+inff") == 0 || std::strcmp(str, "nanf") == 0)
            std::cout << "Double : " << str << std::endl;
        else if (std::strcmp(str, "-inf") == 0 || std::strcmp(str, "+inf") == 0 || std::strcmp(str, "nan") == 0)
            std::cout << "Double : " << str << std::endl;
        else {
        double integerPart1;
        double decimalPart1 = modf(doubleValue, &integerPart1);

        if (std::fabs(decimalPart1) == 0.0 || std::fabs(decimalPart1 - 1.0) == 0.0) {
            std::cout << "Double : " << std::fixed << std::setprecision(1) << integerPart1 << std::endl;
        } else {
            std::cout << "Double : " << doubleValue << std::endl;
        }
        }
    }
    else
        std::cout << "Double : Invalid " << std::endl;
    }
}

int	float_verif(std::string obj)
{
	char	a;
	int x = 0;
	while(obj[x])
	{
		a = obj[x];
		x++;
	}
	if (a == 'f')
		return 1;
	return 0;
}

void removeLastCharacter(char* str) 
{
    if (str != NULL && std::strlen(str) > 0) 
	{
        str[std::strlen(str) - 1] = '\0';
    }
}