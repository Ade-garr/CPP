/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adegarr <adegarr@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 04:57:06 by adegarr           #+#    #+#             */
/*   Updated: 2021/08/14 03:33:27 by adegarr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <string>
#include <iostream>

AMateria::AMateria(std::string const &type) {

	this->_type = type;
	return ;
}

AMateria::AMateria(AMateria const &cpy) {

	*this = cpy;
	return ;
}

AMateria::~AMateria(void) {

	return ;
}

AMateria	&AMateria::operator=(AMateria const &rhs) {

	this->_type = rhs.getType();
	return (*this);
}

std::string const	&AMateria::getType(void) const {

	return (this->_type);
}

void	AMateria::use(ICharacter &target) {

	if (this->_type == "ice")
		std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	if (this->_type == "cure")
		std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	return ;
}