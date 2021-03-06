/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adegarr <adegarr@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 15:25:56 by ade-garr          #+#    #+#             */
/*   Updated: 2021/08/05 23:46:19 by adegarr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FlagTrap.hpp"
#include "DiamondTrap.hpp"
#include <iostream>

int	main() {

	DiamondTrap	foo("Pikachu");
	DiamondTrap	bar(foo);

	std::cout << foo.getHit_points() << std::endl;
	std::cout << bar.getEnergy_points() << std::endl;
	std::cout << bar.getAttack_dmg() << std::endl;
	foo.attack(bar.getName_diam());
	foo.whoAmI();
	foo.highFivesGuys();
	foo.guardGate();
	return (0);
}