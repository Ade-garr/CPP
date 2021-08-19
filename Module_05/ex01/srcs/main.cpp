/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adegarr <adegarr@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 04:34:57 by adegarr           #+#    #+#             */
/*   Updated: 2021/08/16 20:23:05 by adegarr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <string>
#include <iostream>

int main() {

	Bureaucrat b1("AAA", 1);
	Bureaucrat b2("BBB", 6);
	Form f1("ZZZ", 5, 5);
	try {
		Form b1("Random_Form", 1, 150);
		std::cout << b1 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try {
		Form b1("Random_Form", 0, 150);
		std::cout << b1 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try {
		Form b1("Random_Form", 1, 151);
		std::cout << b1 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	b1.signForm(f1);
	b2.signForm(f1);
	return (0);
}