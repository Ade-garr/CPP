/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-garr <ade-garr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 23:53:55 by ade-garr          #+#    #+#             */
/*   Updated: 2021/09/05 01:15:08 by ade-garr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

void	add_ten(int &i) {

	i = i + 10;
	return ;
}

void	ft_upper(char &c) {

	c = toupper(c);
	return ;
}

int main( void ) {

	int tab[] = {1, 2, 3, 4, 5};
	char str[] = "hello !";

	std::cout << "First tab:\n";
	::iter(tab, 5, add_ten);
	for (int i = 0; i < 5; i++) {
		std::cout << tab[i] << std::endl;
	}
	std::cout << "Second tab:\n";
	::iter(tab, 5, ::add_one);
	for (int i = 0; i < 5; i++) {
		std::cout << tab[i] << std::endl;
	}
	::iter(str, 7, ft_upper);
	for (int i = 0; i < 7; i++) {
		std::cout << str[i];
	}
	std::cout << std::endl;
	return (0);
}