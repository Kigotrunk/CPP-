/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 23:04:34 by marvin            #+#    #+#             */
/*   Updated: 2023/12/26 23:04:34 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main() {
    Base* obj = generate();
	Base* obj1 = generate();

    identify(obj);
	identify(*obj);
	identify(obj1);
	identify(*obj1);

    delete obj;
    return 0;
}