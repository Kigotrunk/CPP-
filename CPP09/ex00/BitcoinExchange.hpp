/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 14:06:40 by marvin            #+#    #+#             */
/*   Updated: 2024/01/04 14:06:40 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

# include <iostream>
# include <fstream>
# include <sstream>
# include <map>
# include <string>

struct Bitcoin
{
	double	value;
	std::string date;
};

std::map<std::string, double> filecsv(std::string name);
void	fusion(std::map<std::string, double>& filecsv, std::map<std::string, double> &filetxt);
std::map<std::string, double> filecsv(std::string name);
Bitcoin *filetxt(std::string &name);
int	size_file(std::string &name);
void displayBitcoinData(Bitcoin* data, int size);

#endif