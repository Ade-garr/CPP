/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adegarr <adegarr@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 15:06:52 by adegarr           #+#    #+#             */
/*   Updated: 2021/08/13 02:09:48 by adegarr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal(void) : _type("Animal") {

    std::cout << "Animal created" << std::endl;
    return ;
}

Animal::Animal(Animal const &cpy) {

    *this = cpy;
    std::cout << "Animal created" << std::endl;
    return ;
}

Animal::~Animal(void) {

    std::cout << "Animal destroyed" << std::endl;
    return ;
}

Animal  &Animal::operator=(Animal const &rhs) {

    this->_type = rhs._type;
    return (*this);
}

std::string Animal::getType(void) const {

    return (this->_type);
}