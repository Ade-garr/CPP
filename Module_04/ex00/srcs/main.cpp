/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-garr <ade-garr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 17:13:07 by adegarr           #+#    #+#             */
/*   Updated: 2021/10/23 13:24:49 by ade-garr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "WrongDog.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>

int main()
{
    std::cout << "TEST 1:\n";
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();

    std::cout << "\n\nTEST 2:\n";
    const WrongAnimal* zeta = new WrongAnimal();
    const WrongAnimal* a = new WrongDog();
    const WrongCat* b = new WrongCat();
    std::cout << a->getType() << " " << std::endl;
    std::cout << b->getType() << " " << std::endl;
    b->makeSound(); //will output the cat sound!
    a->makeSound();
    zeta->makeSound();

    delete meta;
    delete j;
    delete i;
    delete zeta;
    delete a;
    delete b;
}