/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-garr <ade-garr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 18:46:11 by ade-garr          #+#    #+#             */
/*   Updated: 2021/08/05 01:55:01 by ade-garr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main(void) {

	// Fixed ab(2.2f);
	// Fixed bb(2.2f);
	// Fixed c(2);
	// Fixed d(3);

	// if (ab < d && !(ab < c))
	// 	printf("< is good\n");
	// if (ab > c && !(ab > d))
	// 	printf("> is good\n");
	// if (ab <= bb && ab <= d)
	// 	printf("<= is good\n");
	// if (ab >= bb && ab >= c)
	// 	printf(">= is good\n");
	// if (ab == bb)
	// 	printf("== is good\n");
	// if (ab != c && ab != d)
	// 	printf("!= is good\n");

	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	// Fixed const b(Fixed(5.05f) + Fixed(2));
	// Fixed const b(Fixed(5.05f) - Fixed(2));
	// Fixed const b(Fixed(5.05f) / Fixed(2));

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	// std::cout << --a << std::endl;
	// std::cout << a << std::endl;
	// std::cout << a-- << std::endl;
	// std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max(a, b) << std::endl;
	// std::cout << Fixed::min(a, b) << std::endl;

	// std::cout << max(a, b) << std::endl;
	// std::cout << min(a, b) << std::endl;

	return 0;
}

