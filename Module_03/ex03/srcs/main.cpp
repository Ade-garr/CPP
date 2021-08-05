/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-garr <ade-garr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 15:25:56 by ade-garr          #+#    #+#             */
/*   Updated: 2021/08/05 18:13:34 by ade-garr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FlagTrap.hpp"
#include <iostream>

int	main() {

	FlagTrap	foo("Pikachu");
	FlagTrap	bar(foo);
	FlagTrap	lol("Onyx");

	std::cout << foo.getEnergy_points() << std::endl;
	std::cout << bar.getEnergy_points() << std::endl;
	foo.attack(lol.getName());
	bar.attack(lol.getName());
	lol.takeDamage(bar.getAttack_dmg());
	lol.highFivesGuys();
	return (0);
}