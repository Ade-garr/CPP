/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adegarr <adegarr@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 17:07:09 by adegarr           #+#    #+#             */
/*   Updated: 2021/08/07 17:12:34 by adegarr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat(void) {

    this->_type = "Cat";
    std::cout << "Cat created" << std::endl;
    return ;
}

Cat::Cat(Cat const &cpy) {
    
    (*this) = cpy;
    std::cout << "Cat created" << std::endl;
    return ;
}

Cat::~Cat(void) {

    std::cout << "Cat destroyed" << std::endl;
    return ;
}

Cat &Cat::operator=(Cat const &rhs) {

    Animal::operator=(rhs);
    return (*this);
}

void    Cat::makeSound(void) const {

    std::cout << "Cat makes an annoying sound : meoow !" << std::endl;
    return ;
}