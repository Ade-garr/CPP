/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adegarr <adegarr@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 17:07:09 by adegarr           #+#    #+#             */
/*   Updated: 2021/08/12 21:32:16 by adegarr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"
#include <iostream>

Cat::Cat(void) {

    this->_type = "Cat";
    this->ptr = new Brain();
    std::cout << "Cat created" << std::endl;
    return ;
}

Cat::Cat(Cat const &cpy) {
    
    this->ptr = new Brain();
    (*this) = cpy;
    std::cout << "Cat created" << std::endl;
    return ;
}

Cat::~Cat(void) {

    std::cout << "Cat destroyed" << std::endl;
    delete this->ptr;
    return ;
}

Cat &Cat::operator=(Cat const &rhs) {

    Animal::operator=(rhs);
    *this->ptr = *rhs.ptr;
    return (*this);
}

void    Cat::makeSound(void) const {

    std::cout << "Cat makes an annoying sound : meoow !" << std::endl;
    return ;
}

Brain   *Cat::getptr(void) const {

    return (this->ptr);
}