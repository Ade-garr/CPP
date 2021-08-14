/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adegarr <adegarr@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 17:07:09 by adegarr           #+#    #+#             */
/*   Updated: 2021/08/12 15:16:32 by adegarr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat(void) {

    this->_type = "Cat";
    std::cout << "Cat created" << std::endl;
    return ;
}

WrongCat::WrongCat(WrongCat const &cpy) {
    
    (*this) = cpy;
    std::cout << "Cat created" << std::endl;
    return ;
}

WrongCat::~WrongCat(void) {

    std::cout << "Cat destroyed" << std::endl;
    return ;
}

WrongCat &WrongCat::operator=(WrongCat const &rhs) {

    WrongAnimal::operator=(rhs);
    return (*this);
}

void    WrongCat::makeSound(void) const {

    std::cout << "Cat makes an annoying sound : meoow !" << std::endl;
    return ;
}