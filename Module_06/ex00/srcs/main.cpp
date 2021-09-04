/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-garr <ade-garr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 13:19:06 by adegarr           #+#    #+#             */
/*   Updated: 2021/08/27 17:31:18 by ade-garr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include <climits>
#include <cstring>
#include <cmath>
#include <cfloat>
#include <string>

int get_precision(char *str) {

	int ret = 1;
	int i = 0;

	if (str[0] == '-')
		i++;
	while (i < (int)std::strlen(str) && std::isdigit(str[i]) != 0 && str[i] != '.')
		i++;
	if (str[i] == '.') {
		i++;
		if (std::isdigit(str[i]) != 0)
			ret = 0;
		while (i < (int)std::strlen(str) && std::isdigit(str[i]) != 0) {
			ret++;
			i++;
		}
	}
	return (ret);
}

void print_double(double v) {

	std::cout << "double: ";
	std::cout << v << std::endl;
	return ;
}

void print_float(double v, int precision) {
	
	std::cout << "float: ";
	std::cout.precision(precision);
	std::cout.setf(std::ios::fixed, std::ios::floatfield);
	std::cout << static_cast<float>(v);
	std::cout << "f" << std::endl;
	return ;
}

void print_int(double v) {
	
	std::cout << "int: ";
	if (v > INT_MAX || v < INT_MIN || std::isnan(v) == 1)
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(v) << std::endl;
	return ;
}

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
	if (std::strlen(argv[1]) == 1 && std::isdigit(argv[1][0]) == 0) {
		print_char(static_cast<double>(argv[1][0]));
		print_int(static_cast<double>(argv[1][0]));
		print_float(static_cast<double>(argv[1][0]), 1);
		print_double(static_cast<double>(argv[1][0]));
	}
	else {
		print_char(v);
		print_int(v);
		print_float(v, get_precision(argv[1]));
		print_double(v);
	}
	return (0);
}
