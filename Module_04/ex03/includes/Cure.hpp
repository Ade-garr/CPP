/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adegarr <adegarr@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 05:32:14 by adegarr           #+#    #+#             */
/*   Updated: 2021/08/14 03:28:06 by adegarr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
# define CURE_H

# include "AMateria.hpp"

class Cure : public AMateria {

public:

	Cure(void);
	Cure(std::string const &type);
	Cure(Cure const &cpy);
	virtual ~Cure(void);

	Cure	&operator=(Cure const &rhs);
	virtual AMateria	*clone(void) const;

};

#endif