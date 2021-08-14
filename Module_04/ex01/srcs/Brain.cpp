/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adegarr <adegarr@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 15:58:59 by adegarr           #+#    #+#             */
/*   Updated: 2021/08/12 16:05:43 by adegarr          ###   ########.fr       */
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