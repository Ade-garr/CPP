/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-garr <ade-garr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 15:25:56 by ade-garr          #+#    #+#             */
/*   Updated: 2021/08/05 17:41:42 by ade-garr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int	main() {

	ScavTrap	foo("Pikachu");
	ScavTrap	bar(foo);
	ScavTrap	lol("Onyx");

	std::cout << foo.getEnergy_points() << std::endl;
	std::cout << bar.getEnergy_points() << std::endl;
	foo.attack(lol.getName());
	bar.attack(lol.getName());
	lol.takeDamage(bar.getAttack_dmg());
	lol.guardGate();
	return (0);
}