/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adegarr <adegarr@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 05:06:16 by adegarr           #+#    #+#             */
/*   Updated: 2021/08/14 03:28:00 by adegarr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
# define ICE_H

# include "AMateria.hpp"

class Ice : public AMateria {

public:

	Ice(void);
	Ice(std::string const &type);
	Ice(Ice const &cpy);
	virtual ~Ice(void);

	Ice	&operator=(Ice const &rhs);
	virtual AMateria	*clone(void) const;

};

#endif