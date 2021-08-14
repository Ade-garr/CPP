/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adegarr <adegarr@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 22:39:31 by adegarr           #+#    #+#             */
/*   Updated: 2021/08/14 03:17:51 by adegarr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H

# include "ICharacter.hpp"
# include "AMateria.hpp"
# include <string>

class Character : public ICharacter {

public:

	Character(std::string name);
	Character(Character const &cpy);
	~Character(void);

	Character	&operator=(Character const &rhs);
	virtual std::string const &getName() const;
	virtual void equip(AMateria *m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter &target);

protected:

	AMateria **_invent;
	std::string	_name;

};

#endif