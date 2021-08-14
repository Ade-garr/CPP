/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adegarr <adegarr@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 15:06:52 by adegarr           #+#    #+#             */
/*   Updated: 2021/08/12 15:12:30 by adegarr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal(void) : _type("Animal") {

    std::cout << "Animal created" << std::endl;
    return ;
}

WrongAnimal::WrongAnimal(WrongAnimal const &cpy) {

    *this = cpy;
    std::cout << "Animal created" << std::endl;
    return ;
}

WrongAnimal::~WrongAnimal(void) {

    std::cout << "Animal destroyed" << std::endl;
    return ;
}

WrongAnimal  &WrongAnimal::operator=(WrongAnimal const &rhs) {

    this->_type = rhs._type;
    return (*this);
}

void    WrongAnimal::makeSound(void) const {

    std::cout << "Animal makes an annoying sound !" << std::endl;
    return ;
}

std::string WrongAnimal::getType(void) const {

    return (this->_type);
}