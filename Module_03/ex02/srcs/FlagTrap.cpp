/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-garr <ade-garr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 17:47:06 by ade-garr          #+#    #+#             */
/*   Updated: 2021/08/05 18:15:04 by ade-garr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FlagTrap.hpp"
#include <string>
#include <iostream>

FlagTrap::FlagTrap(std::string name) : ClapTrap(name) {

	this->_Hit_points = 100;
	this->_Energy_points = 100;
	this->_Attack_dmg = 30;
	std::cout << "FlagTrap " << name << " appeared" << std::endl;
	return ;
}

FlagTrap::FlagTrap(FlagTrap const &cpy) : ClapTrap(cpy) {

	*this = cpy;
	std::cout << "FlagTrap " << this->_Name << " appeared" << std::endl;
	return ;
}

FlagTrap::~FlagTrap(void) {

	std::cout << "FlagTrap " << this->_Name << " destroyed" << std::endl;
	return ;
}

FlagTrap	&FlagTrap::operator=(FlagTrap const &rhs) {

	ClapTrap::operator=(rhs);
	return (*this);
}

void	FlagTrap::highFivesGuys(void) const {

	int	i = 0;
	std::cout << "Heey ! Would you like to HighFive with me ?\n1 - Yes\n2 - No" << std::endl;
	std::cin >> i;
	if (i != 1)
		std::cout << ":') Okay.." << std::endl;
	else
		std::cout << "Yeeeah ;)" << std::endl;
	return ;
}