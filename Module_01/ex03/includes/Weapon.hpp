/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-garr <ade-garr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 18:31:44 by ade-garr          #+#    #+#             */
/*   Updated: 2021/08/02 20:12:49 by ade-garr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include <string>

class Weapon {

public:

	Weapon(std::string weapon);
	~Weapon(void);
	
	const std::string	&getType(void) const;
	void				setType(std::string str);

private:

	std::string	type;

};

#endif