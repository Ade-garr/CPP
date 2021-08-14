/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adegarr <adegarr@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 16:55:02 by adegarr           #+#    #+#             */
/*   Updated: 2021/08/07 17:06:56 by adegarr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog(void) {

    this->_type = "Dog";
    std::cout << "Dog created" << std::endl;
    return ;
}

Dog::Dog(Dog const &cpy) {

    *this = cpy;
    std::cout << "Dog created" << std::endl;
    return ;
}

Dog::~Dog(void) {

    std::cout << "Dog destroyed" << std::endl;
    return ;
}

Dog &Dog::operator=(Dog const &rhs) {

    Animal::operator=(rhs);
    return (*this);
}

void    Dog::makeSound(void) const {

    std::cout << "Dog makes an annoying sound : woof-woof !" << std::endl;
    return ;
}