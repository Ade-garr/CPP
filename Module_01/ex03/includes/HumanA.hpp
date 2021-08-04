/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-garr <ade-garr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 18:38:09 by ade-garr          #+#    #+#             */
/*   Updated: 2021/08/02 20:10:03 by ade-garr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

# include "Weapon.hpp"

class HumanA {

public:

	HumanA(std::string name, Weapon &club);
	~HumanA(void);

	void	attack(void) const;

private:

	Weapon		&_weapon;
	std::string	_name;

};

#endif