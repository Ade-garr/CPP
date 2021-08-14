/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adegarr <adegarr@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 17:13:07 by adegarr           #+#    #+#             */
/*   Updated: 2021/08/13 02:29:01 by adegarr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"
#include <iostream>

int main()
{
    const Animal **j = new const Animal*[6];
	Dog	test = Dog();
	Dog cpy(test);

	test.getptr()->ideas[0] = "foo";
	std::cout << cpy.getptr()->ideas[0] << std::endl;

	cpy.getptr()->ideas[0] = "bar";
	std::cout << test.getptr()->ideas[0] << std::endl;
	std::cout << cpy.getptr()->ideas[0] << std::endl;
	for (int i = 0; i < 3; i++) {
		j[i] = new Dog();
	}
	for (int i = 3; i < 6; i++) {
		j[i] = new Cat();
	}
	for (int i = 0; i < 6; i++) {
		delete j[i];
	}
	delete [] j;

	// Animal	bug;

	return (0);
}