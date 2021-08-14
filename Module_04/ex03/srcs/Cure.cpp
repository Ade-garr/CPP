/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adegarr <adegarr@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 05:33:22 by adegarr           #+#    #+#             */
/*   Updated: 2021/08/14 03:28:33 by adegarr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "AMateria.hpp"
#include <string>

Cure::Cure(void) : AMateria("cure") {

	return ;
}

Cure::Cure(std::string const &type) : AMateria(type) {

	this->_type = "cure";
	return ;
}

Cure::Cure(Cure const &cpy) : AMateria(cpy.getType()) {

	*this = cpy;
	return ;
}

Cure::~Cure(void) {

	return ;
}

Cure	&Cure::operator=(Cure const &rhs) {

	this->_type = rhs.getType();
	return (*this);
}

AMateria	*Cure::clone(void) const {

	AMateria	*ptr = new Cure(this->_type);
	return (ptr);
}