/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 14:06:29 by marvin            #+#    #+#             */
/*   Updated: 2024/01/04 14:06:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"


std::map<std::string, double> filecsv(std::string name)
{
	std::map<std::string, double> value;
	std::string stock;
	std::string split;


	std::ifstream file(name.c_str());
	if (file.is_open())
	{
		std::getline(file, stock);
		while (std::getline(file, stock))
		{
			Bitcoin coin;
			std::istringstream splitline(stock);
			std::getline(splitline, split, ',');
			coin.date = split;
			std::getline(splitline, split);
			std::stringstream split_value(split);
			split_value >> coin.value;
			value[coin.date] = coin.value;
		}
		file.close();
	}
	else
		std::cout << "invalid file" << std::endl;
	return value;
}

int	size_file(std::string &name)
{
	std::ifstream file(name.c_str());
	std::string line;
	int	x = 0;

	if (file.is_open())
	{
		while (std::getline(file, line))
			x++;
		file.close();
	}
	return x;
}

Bitcoin *filetxt(std::string &name)
{
	std::ifstream file(name.c_str());
	std::string line;
	std::string date;
	double		quantity;
	Bitcoin *info = NULL;
	int x = 0;

	if (file.is_open())
	{
		info = new Bitcoin[size_file(name) - 1];
		std::getline(file, line);
		while (std::getline(file, line))
		{
			std::istringstream split(line);
			if (std::getline(split, date, '|'))
			{
				info[x].date = date;
				if (split >> quantity)
					info[x].value = quantity;
				else
					info[x].value = -19;
			}
			else
				info[x].date = line;
			std::cout << info[x].date << " | " << info[x].value << std::endl;
			x++;
		}
		file.close();
	}
	return info;
}



void fusion(std::map<std::string, double>& filecsv, std::map<std::string, double> &filetxt)
{
	std::map<std::string, double> result;
	for (std::map<std::string, double>::const_iterator i = filetxt.begin(); i != filetxt.end(); i++)
	{
		std::map<std::string, double>::const_iterator date = filecsv.find(i->first);
		if (date != filetxt.end())
		{
			result[i->first] = i->second * date->second;
			std::cout << "test" << std::endl;
			std::cout << i->first << " => " << i->second << " = " << result[i->first] << std::endl;
		}
		else 
		{
			date = filecsv.lower_bound(i->first);
			if (date != filecsv.begin())
			{
				date--;
				result[i->first] = i->second * date->second;
				std::cout << i->first << " => " << i->second << " = " << result[i->first] << std::endl;
			}
		}
	}
	return ;
}


void displayBitcoinData(Bitcoin* data, int size) 
{
    for (int i = 0; i < size; ++i) {
        std::cout << "Date: " << data[i].date << ", Value: " << data[i].value << std::endl;
    }
}