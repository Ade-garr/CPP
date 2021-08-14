/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adegarr <adegarr@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 04:50:02 by adegarr           #+#    #+#             */
/*   Updated: 2021/08/14 03:23:55 by adegarr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
# define AMATERIA_H

# include <string>
class ICharacter;

class AMateria {

protected:

	std::string	_type;

public:

	AMateria(std::string const &type);
	AMateria(AMateria const &cpy);
	virtual ~AMateria(void);

	AMateria	&operator=(AMateria const &rhs);
	std::string const	&getType(void) const; //Returns the materia type
	virtual AMateria	*clone(void) const = 0;
	virtual void use(ICharacter &target);
};

#endif