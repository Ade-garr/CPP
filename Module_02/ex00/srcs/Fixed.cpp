/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-garr <ade-garr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 18:32:25 by ade-garr          #+#    #+#             */
/*   Updated: 2021/08/04 19:19:48 by ade-garr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(void) {

	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::~Fixed(void) {

	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed::Fixed(Fixed const &cpy) {

	std::cout << "Copy constructor called" << std::endl;
	*this = cpy;
	return ;
}

Fixed	&Fixed::operator=(Fixed const &assign) {

	std::cout << "Assignation operator called" << std::endl;
	this->_Rawbits = assign.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const {

	std::cout << "getRawBits member function called" << std::endl;
	return (this->_Rawbits);
}

void	Fixed::setRawBits(int const raw) {

	this->_Rawbits = raw;
	return ;
}

int const	Fixed::_bit_nb = 8;