/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adegarr <adegarr@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 04:34:57 by adegarr           #+#    #+#             */
/*   Updated: 2021/08/16 16:05:07 by adegarr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <string>
#include <iostream>

int main() {

	try {
		Bureaucrat b1("AAA", 1);
		std::cout << b1 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try {
		Bureaucrat b1("BBB", -4);
		std::cout << b1 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try {
		Bureaucrat b1("CCC", 157);
		std::cout << b1 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try {
		Bureaucrat b1("DDD", 2);
		std::cout << "Before inc -> " << b1 << std::endl;
		b1.inc_grade();
		std::cout << "Next inc = Error -> " << b1 << std::endl;
		b1.inc_grade();
		std::cout << "Shouldn't be visible -> " << b1 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try {
		Bureaucrat b1("EEE", 149);
		std::cout << "Before dec -> " << b1 << std::endl;
		b1.dec_grade();
		std::cout << "Next dec = Error -> " << b1 << std::endl;
		b1.dec_grade();
		std::cout << "Shouldn't be visible -> " << b1 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}