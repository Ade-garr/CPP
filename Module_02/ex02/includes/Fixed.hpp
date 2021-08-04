/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-garr <ade-garr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 18:23:32 by ade-garr          #+#    #+#             */
/*   Updated: 2021/08/05 01:54:10 by ade-garr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>

class Fixed {

public:

	Fixed(void);
	Fixed(int const nb);
	Fixed(float const nbf);
	Fixed(Fixed const &cpy);
	~Fixed(void);

	Fixed	&operator=(Fixed const &assign);
	bool	operator>(Fixed const &cmp) const;
	bool	operator>=(Fixed const &cmp) const;
	bool	operator<(Fixed const &cmp) const;
	bool	operator<=(Fixed const &cmp) const;
	bool	operator==(Fixed const &cmp) const;
	bool	operator!=(Fixed const &cmp) const;
	Fixed	operator+(Fixed const &add) const;
	Fixed	operator-(Fixed const &less) const;
	Fixed	operator*(Fixed const &mul) const;
	Fixed	&operator++();
	Fixed	operator++(int);
	Fixed	&operator--();
	Fixed	operator--(int);
	Fixed	operator/(Fixed const &div) const;
	static Fixed	const &min(Fixed const &a, Fixed const &b);
	static Fixed	const &max(Fixed const &a, Fixed const &b);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;

private:

	int					_Rawbits;
	static int const	_bit_nb;

};

Fixed	const &max(Fixed const &a, Fixed const &b);
Fixed	const &min(Fixed const &a, Fixed const &b);
std::ostream	&operator<<(std::ostream &o, Fixed const &f);

#endif