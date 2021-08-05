/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-garr <ade-garr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 15:15:11 by ade-garr          #+#    #+#             */
/*   Updated: 2021/08/05 16:10:47 by ade-garr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <string>
#include <iostream>

ClapTrap::ClapTrap(std::string name) : _Name(name), _Hit_points(10), _Energy_points(10), _Attack_dmg(0) {

	std::cout << "ClapTrap " << name << " was created" << std::endl;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const &cpy) {

	*this = cpy;
	std::cout << "ClapTrap " << this->_Name << " was created" << std::endl;
	return ;
}

ClapTrap::~ClapTrap(void) {

	std::cout << "ClapTrap " << this->_Name << " destroyed" << std::endl;
	return ;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &rhs) {

	this->_Name = rhs.getName();
	this->_Hit_points = rhs.getHit_points();
	this->_Energy_points = rhs.getEnergy_points();
	this->_Attack_dmg = rhs.getAttack_dmg();
	return (*this);
}

void	ClapTrap::attack(std::string const &target) {

	std::cout << "ClapTrap " << this->_Name << " attacks " << target << ", causing " << this->_Attack_dmg << " points of damage!" << std::endl;
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount) {

	std::cout << "ClapTrap " << this->_Name << " takes " << amount << " points of damage!" << std::endl;
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount) {

	std::cout << "ClapTrap " << this->_Name << " is healed by " << amount << " points!" << std::endl;
	return ;
}

std::string	ClapTrap::getName(void) const {

	return (this->_Name);
}

int	ClapTrap::getHit_points(void) const {

	return (this->_Hit_points);
}

int	ClapTrap::getEnergy_points(void) const {

	return (this->_Energy_points);
}

int	ClapTrap::getAttack_dmg(void) const {

	return (this->_Attack_dmg);
}