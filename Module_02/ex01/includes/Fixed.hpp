/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-garr <ade-garr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 18:23:32 by ade-garr          #+#    #+#             */
/*   Updated: 2021/08/04 21:23:07 by ade-garr         ###   ########.fr       */
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
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;

private:

	int					_Rawbits;
	static int const	_bit_nb;

};

std::ostream	&operator<<(std::ostream &o, Fixed const &f);

#endif