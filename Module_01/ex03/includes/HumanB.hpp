/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-garr <ade-garr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 18:49:01 by ade-garr          #+#    #+#             */
/*   Updated: 2021/08/02 20:12:42 by ade-garr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

# include "Weapon.hpp"

class HumanB {

public:

	HumanB(std::string name);
	~HumanB(void);

	void	setWeapon(Weapon &club);
	void	attack(void) const;

private:

	Weapon	*_weapon;
	std::string	_name;

};

#endif