/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-garr <ade-garr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 18:35:05 by ade-garr          #+#    #+#             */
/*   Updated: 2021/08/02 19:29:18 by ade-garr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <string>

Weapon::Weapon(std::string weapon) : type(weapon){

	return ;
}

Weapon::~Weapon(void) {

	return ;
}

const std::string	&Weapon::getType(void) const {

	return (this->type);
}

void	Weapon::setType(std::string str) {

	this->type = str;
	return ;
}