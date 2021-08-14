/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adegarr <adegarr@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 22:51:24 by adegarr           #+#    #+#             */
/*   Updated: 2021/08/05 23:18:22 by adegarr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ScavTrap.hpp"
#include "FlagTrap.hpp"
#include "ClapTrap.hpp"
#include <string>
#include <iostream>


DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FlagTrap(name + "_clap_name"), ScavTrap(name + "_clap_name"), _name_diam(name) {

    this->_Attack_dmg = 30;
	std::cout << "DiamondTrap " << name << " is here" << std::endl;
    return ;
}

DiamondTrap::DiamondTrap(DiamondTrap const &cpy) : ClapTrap(cpy), FlagTrap(cpy), ScavTrap(cpy) {

    *this = cpy;
	std::cout << "DiamondTrap " << this->_name_diam << " is here" << std::endl;
    return ;
}

DiamondTrap::~DiamondTrap(void) {

	std::cout << "DiamondTrap " << this->_name_diam << " destroyed" << std::endl;
    return ;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &rhs) {

    FlagTrap::operator=(rhs);
    ScavTrap::operator=(rhs);
    this->_name_diam = rhs.getName_diam();
    return (*this);
}

std::string DiamondTrap::getName_diam(void) const {

    return (this->_name_diam);
}

void    DiamondTrap::whoAmI(void) const {

    std::cout << "My name is " << this->_name_diam << std::endl;
    std::cout << "My ClapTrap name is " << this->_Name << std::endl;
}