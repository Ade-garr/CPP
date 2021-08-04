/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-garr <ade-garr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 18:32:25 by ade-garr          #+#    #+#             */
/*   Updated: 2021/08/05 01:44:51 by ade-garr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed(void) {

	// std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(int const nb) {

	// std::cout << "Int constructor called" << std::endl;
	this->_Rawbits = nb * (1 << this->_bit_nb);
	return ;
}

Fixed::Fixed(float const nbf) {

	// std::cout << "Float constructor called" << std::endl;
	this->_Rawbits = roundf(nbf * (1 << this->_bit_nb));
	return ;
}

Fixed::~Fixed(void) {

	// std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed::Fixed(Fixed const &cpy) {

	// std::cout << "Copy constructor called" << std::endl;
	*this = cpy;
	return ;
}

Fixed	&Fixed::operator=(Fixed const &assign) {

	// std::cout << "Assignation operator called" << std::endl;
	this->_Rawbits = assign.getRawBits();
	return (*this);
}

bool	Fixed::operator>(Fixed const &cmp) const {

	if (this->toFloat() > cmp.toFloat())
		return (1);
	return (0);
}

bool	Fixed::operator>=(Fixed const &cmp) const {

	if (this->toFloat() >= cmp.toFloat())
		return (1);
	return (0);
}

bool	Fixed::operator<(Fixed const &cmp) const {

	if (this->toFloat() < cmp.toFloat())
		return (1);
	return (0);
}

bool	Fixed::operator<=(Fixed const &cmp) const {

	if (this->toFloat() <= cmp.toFloat())
		return (1);
	return (0);
}

bool	Fixed::operator==(Fixed const &cmp) const {

	if (this->toFloat() == cmp.toFloat())
		return (1);
	return (0);
}

bool	Fixed::operator!=(Fixed const &cmp) const {

	if (this->toFloat() != cmp.toFloat())
		return (1);
	return (0);
}

Fixed	&Fixed::operator++() {

	this->_Rawbits++;
	return (*this);
}

Fixed	Fixed::operator++(int) {

	Fixed tmp(*this);
	this->_Rawbits++;
	return (tmp);
}

Fixed	&Fixed::operator--() {

	this->_Rawbits--;
	return (*this);
}

Fixed	Fixed::operator--(int) {

	Fixed	tmp(*this);
	this->_Rawbits--;
	return (tmp);
}

Fixed	Fixed::operator+(Fixed const &add) const {

	return (Fixed (this->toFloat() + add.toFloat()));
}

Fixed	Fixed::operator-(Fixed const &less) const {

	return (Fixed (this->toFloat() - less.toFloat()));
}

Fixed	Fixed::operator*(Fixed const &mul) const {

	return (Fixed (this->toFloat() * mul.toFloat()));
}

Fixed	Fixed::operator/(Fixed const &div) const {

	return (Fixed (this->toFloat() / div.toFloat()));
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

Fixed	const &Fixed::min(Fixed const &a, Fixed const &b) {

	if (a._Rawbits <= b._Rawbits)
		return (a);
	else
		return (b);
}

Fixed	const &Fixed::max(Fixed const &a, Fixed const &b) {

	if (a._Rawbits >= b._Rawbits)
		return (a);
	else
		return (b);
}

Fixed	const &min(Fixed const &a, Fixed const &b) {

	if (a.getRawBits() <= b.getRawBits())
		return (a);
	else
		return (b);
}

Fixed	const &max(Fixed const &a, Fixed const &b) {

	if (a.getRawBits() >= b.getRawBits())
		return (a);
	else
		return (b);
}

int const	Fixed::_bit_nb = 8;