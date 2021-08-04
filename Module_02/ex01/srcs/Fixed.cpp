/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-garr <ade-garr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 18:32:25 by ade-garr          #+#    #+#             */
/*   Updated: 2021/08/04 21:25:52 by ade-garr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed(void) {

	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(int const nb) {

	std::cout << "Int constructor called" << std::endl;
	this->_Rawbits = nb * (1 << this->_bit_nb);
	return ;
}

Fixed::Fixed(float const nbf) {

	std::cout << "Float constructor called" << std::endl;
	this->_Rawbits = roundf(nbf * (1 << this->_bit_nb));
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

	return (this->_Rawbits);
}

void	Fixed::setRawBits(int const raw) {

	this->_Rawbits = raw;
	return ;
}

float	Fixed::toFloat(void) const {

	return ((float)_Rawbits / (1 << this->_bit_nb));
}

int		Fixed::toInt(void) const {

	return (this->_Rawbits / (1 << this->_bit_nb));
}

std::ostream	&operator<<(std::ostream &o, Fixed const &f) {

	o << f.toFloat();
	return (o);
}

int const	Fixed::_bit_nb = 8;