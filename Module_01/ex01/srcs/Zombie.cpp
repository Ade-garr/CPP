/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-garr <ade-garr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 15:02:40 by ade-garr          #+#    #+#             */
/*   Updated: 2021/08/02 17:04:25 by ade-garr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>
#include <iostream>

Zombie::Zombie(void) : _name("default") {

	return ;
}

Zombie::Zombie(std::string name) {

	this->_name = name;
	return ;
}

Zombie::~Zombie(void) {

	std::cout << this->_name << " has been destroyed" << std::endl;
	return ;
}

void	Zombie::setname(std::string name) {

	this->_name = name;
	return ;
}

void	Zombie::announce(void) const {

	std::cout << "<" << this->_name << "> BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}