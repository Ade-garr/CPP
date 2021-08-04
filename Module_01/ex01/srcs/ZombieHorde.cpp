/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-garr <ade-garr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 16:20:12 by ade-garr          #+#    #+#             */
/*   Updated: 2021/08/02 16:54:02 by ade-garr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {

	Zombie		*newHorde;
	int			i;

	newHorde = new Zombie[N];
	for (i = 0; i < N; i++) {
		newHorde[i].setname(name);
	}
	return (newHorde);
}