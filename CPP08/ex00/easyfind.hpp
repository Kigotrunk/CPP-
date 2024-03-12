/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 15:53:27 by marvin            #+#    #+#             */
/*   Updated: 2024/01/01 15:53:27 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

# include <iostream>
# include <vector>
# include <algorithm>

template<typename T>
int	easyfind(T &x, int y)
{
	T::const_iterator value = std::find(x.begin(), x.end(), y);
	if (value != x.end())
		return std::distance(static_cast<typename T::const_iterator>(x.begin()), value);
	return -19;
}

#endif