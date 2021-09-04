/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-garr <ade-garr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 19:00:12 by ade-garr          #+#    #+#             */
/*   Updated: 2021/09/04 19:49:28 by ade-garr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>

Base *generation() {

	int random;

	srand(time(NULL));
	random = rand() % 3 + 1;
	if (random == 1) {
		return (new A());
	}
	else if (random == 2) {
		return (new B());
	}
	else {
		return (new C());
	}
}

void identify(Base *p) {

	if (dynamic_cast<A *>(p) != NULL)
		std::cout << "A" << std::endl;
	if (dynamic_cast<B *>(p) != NULL)
		std::cout << "B" << std::endl;
	if (dynamic_cast<C *>(p) != NULL)
		std::cout << "C" << std::endl;
	return ;
}

void identify(Base &p) {

	try {
		(void)dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
	}
	catch (std::bad_cast &bc) {
		try {
			(void)dynamic_cast<B &>(p);
			std::cout << "B" << std::endl;
		}
		catch (std::bad_cast &bc) {
			try {
				(void)dynamic_cast<C &>(p);
				std::cout << "C" << std::endl;
			}
			catch (std::bad_cast &bc) {
				std::cout << "unknown" << std::endl;
			}
		}
	}
	return ;
}

int main() {

	Base *test = generation();

	std::cout << "Identified with ptr: ";
	identify(test);
	std::cout << "Identified with reference: ";
	identify(*test);
	delete test;
	return (0);
}