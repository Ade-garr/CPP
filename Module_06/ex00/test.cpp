/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adegarr <adegarr@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 13:45:33 by adegarr           #+#    #+#             */
/*   Updated: 2021/08/18 15:09:53 by adegarr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

int main() {
	
	double b;

	b = 2147483649;
	std::cout << static_cast<char>(b) << std::endl;
	std::cout << b << std::endl;
	std::cout << static_cast<float>(b) << std::endl;
	std::cout << static_cast<int>(b) << std::endl;
	return (0);
}