/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-garr <ade-garr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 15:25:56 by ade-garr          #+#    #+#             */
/*   Updated: 2021/08/05 15:54:19 by ade-garr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main() {

	ClapTrap	foo("Pikachu");
	ClapTrap	bar(foo);

	foo.attack("Onyx");
	foo.attack("Salamèche");
	foo.takeDamage(10);
	foo.takeDamage(30);
	foo.beRepaired(10);
	foo.beRepaired(0);
	bar.attack("Onyx");
	return (0);
}