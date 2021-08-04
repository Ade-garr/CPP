/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-garr <ade-garr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 18:38:01 by ade-garr          #+#    #+#             */
/*   Updated: 2021/08/02 20:09:42 by ade-garr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"
#include <iostream>
#include <string>

HumanA::HumanA(std::string name, Weapon &club) : _weapon(club), _name(name) {

	return ;
}

HumanA::~HumanA(void) {

	return ;
}

void	HumanA::attack(void) const {

	std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
	return ;
}