/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adegarr <adegarr@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 16:55:02 by adegarr           #+#    #+#             */
/*   Updated: 2021/08/12 21:31:30 by adegarr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"
#include <iostream>

Dog::Dog(void) {

    this->_type = "Dog";
    this->ptr = new Brain();
    std::cout << "Dog created" << std::endl;
    return ;
}

Dog::Dog(Dog const &cpy) {

    this->ptr = new Brain();
    *this = cpy;
    std::cout << "Dog created" << std::endl;
    return ;
}

Dog::~Dog(void) {

    delete this->ptr;
    std::cout << "Dog destroyed" << std::endl;
    return ;
}

Dog &Dog::operator=(Dog const &rhs) {

    Animal::operator=(rhs);
    *this->ptr = *rhs.ptr;
    return (*this);
}

void    Dog::makeSound(void) const {

    std::cout << "Dog makes an annoying sound : woof-woof !" << std::endl;
    return ;
}

Brain   *Dog::getptr(void) const {

    return (this->ptr);
}