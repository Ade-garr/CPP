/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-garr <ade-garr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 15:58:59 by adegarr           #+#    #+#             */
/*   Updated: 2021/10/23 13:33:33 by ade-garr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <string>

Brain::Brain(void) {

    return ;
}

Brain::Brain(Brain const &cpy) {

    *this = cpy;
    return ;
}

Brain::~Brain(void) {

    return ;
}

Brain   &Brain::operator=(Brain const &rhs) {

    int i;

    for (i = 0; i < 100 ; i++) {
        this->ideas[i] = rhs.ideas[i];
    }
    return (*this);
}