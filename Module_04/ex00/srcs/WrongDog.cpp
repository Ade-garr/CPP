/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adegarr <adegarr@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 16:55:02 by adegarr           #+#    #+#             */
/*   Updated: 2021/08/12 15:19:33 by adegarr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongDog.hpp"
#include <iostream>

WrongDog::WrongDog(void) {

    this->_type = "Dog";
    std::cout << "Dog created" << std::endl;
    return ;
}

WrongDog::WrongDog(WrongDog const &cpy) {

    *this = cpy;
    std::cout << "Dog created" << std::endl;
    return ;
}

WrongDog::~WrongDog(void) {

    std::cout << "Dog destroyed" << std::endl;
    return ;
}

WrongDog &WrongDog::operator=(WrongDog const &rhs) {

    WrongAnimal::operator=(rhs);
    return (*this);
}

void    WrongDog::makeSound(void) const {

    std::cout << "Dog makes an annoying sound : woof-woof !" << std::endl;
    return ;
}