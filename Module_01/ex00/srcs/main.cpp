/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-garr <ade-garr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 15:39:08 by ade-garr          #+#    #+#             */
/*   Updated: 2021/08/02 15:46:07 by ade-garr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main() {

	Zombie	*Zombie_foo;

	randomChump("randomZombie");
	Zombie_foo = newZombie("Foo");
	Zombie_foo->announce();
	delete Zombie_foo;
	return (0);
}