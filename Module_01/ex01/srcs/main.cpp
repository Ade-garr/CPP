/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-garr <ade-garr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 15:39:08 by ade-garr          #+#    #+#             */
/*   Updated: 2021/08/02 17:06:05 by ade-garr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main() {

	Zombie	*Zombie_Horde;
	int		i;

	Zombie_Horde = zombieHorde(10, "Maurice");
	for(i = 0; i < 10; i++) {
		Zombie_Horde[i].announce();
	}
	delete [] Zombie_Horde;
	return (0);
}