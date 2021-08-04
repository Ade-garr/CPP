/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-garr <ade-garr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 18:23:32 by ade-garr          #+#    #+#             */
/*   Updated: 2021/08/04 19:19:37 by ade-garr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

class Fixed {

public:

	Fixed(void);
	~Fixed(void);
	Fixed(Fixed const &cpy);

	Fixed	&operator=(Fixed const &assign);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);

private:

	int					_Rawbits;
	static int const	_bit_nb;

};

#endif