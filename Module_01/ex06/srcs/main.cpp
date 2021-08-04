/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-garr <ade-garr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 11:27:40 by ade-garr          #+#    #+#             */
/*   Updated: 2021/08/04 12:31:02 by ade-garr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <iostream>

int	main(int argc, char **argv) {

	int			i;
	std::string	tab[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	Karen		karen;

	if (argc != 2) {
		std::cout << "Bad arguments !" << std::endl;
		return (1);
	}
	for (i = 0; i < 4; i++) {
		if (tab[i].compare(argv[1]) == 0) {
			break ;
		}
	}
	switch (i) {
		case 0:
			std::cout << "[ DEBUG ]" << std::endl;
			karen.complain("debug");
			std:: cout << std::endl;
			i++;

		case 1:
			std::cout << "[ INFO ]" << std::endl;
			karen.complain("info");
			std:: cout << std::endl;
			i++;

		case 2:
			std::cout << "[ WARNING ]" << std::endl;
			karen.complain("warning");
			std:: cout << std::endl;
			i++;

		case 3:
			std::cout << "[ ERROR ]" << std::endl;
			karen.complain("error");
			break ;

		case 4:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break ;
	}
	return (0);
}