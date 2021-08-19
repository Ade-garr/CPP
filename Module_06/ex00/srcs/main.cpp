/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adegarr <adegarr@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 13:19:06 by adegarr           #+#    #+#             */
/*   Updated: 2021/08/18 15:38:28 by adegarr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <climits>
#include <cmath>

void print_char(double v) {

	std::cout << "char: ";
	if (v < CHAR_MIN || v > CHAR_MAX || std::isnan(v) == 1)
		std::cout << "impossible" << std::endl;
	else if (std::isprint(v) == 0)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "'" << static_cast<char>(v) << "'" << std::endl;
	return ;
}

int main(int argc, char **argv) {
	
	double v;

	if (argc != 2) {
		std::cout << "Pls provide one argument !" << std::endl;
		return (1);
	}
	v = atof(argv[1]);
	std::cout << v << std::endl;
	print_char(v);
	// print_int(v);
	// print_float(v);
	// print_double(v);
	return (0);
}