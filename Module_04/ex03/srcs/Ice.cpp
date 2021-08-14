/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adegarr <adegarr@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 05:10:12 by adegarr           #+#    #+#             */
/*   Updated: 2021/08/14 03:27:56 by adegarr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "AMateria.hpp"
#include <string>

Ice::Ice(void) : AMateria("ice") {

	return ;
}

Ice::Ice(std::string const &type) : AMateria(type) {

	this->_type = "ice";
	return ;
}

Ice::Ice(Ice const &cpy) : AMateria(cpy.getType()) {

	*this = cpy;
	return ;
}

Ice::~Ice(void) {

	return ;
}

Ice	&Ice::operator=(Ice const &rhs) {

	this->_type = rhs.getType();
	return (*this);
}

AMateria	*Ice::clone(void) const {

	AMateria	*ptr = new Ice(this->_type);
	return (ptr);
}