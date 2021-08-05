/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-garr <ade-garr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 16:38:12 by ade-garr          #+#    #+#             */
/*   Updated: 2021/08/05 17:43:30 by ade-garr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <string>
#include <iostream>

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {

	this->_Hit_points = 100;
	this->_Energy_points = 50;
	this->_Attack_dmg = 20;
	std::cout << "ScavTrap " << name << " was born" << std::endl;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const &cpy) : ClapTrap(cpy) {

	*this = cpy;
	std::cout << "ScavTrap " << this->_Name << " was born" << std::endl;
	return ;
}

ScavTrap::~ScavTrap(void) {

	std::cout << "ScavTrap " << this->_Name << " destroyed" << std::endl;
	return ;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &rhs) {

	ClapTrap::operator=(rhs);
	return (*this);
}

void	ScavTrap::attack(std::string const &target) {

	std::cout << "ScavTrap " << this->_Name << " use thundershock to " << target << ", causing " << this->_Attack_dmg << " points of damage!" << std::endl;
	return ;
}

void	ScavTrap::guardGate(void) const {

	std::cout << "ScavTrap " << this->_Name << " is now the defender of the Gate!" << std::endl;
	return ;
}