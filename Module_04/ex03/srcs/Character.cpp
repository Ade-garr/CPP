/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adegarr <adegarr@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 23:17:40 by adegarr           #+#    #+#             */
/*   Updated: 2021/08/14 02:59:16 by adegarr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include <string>

Character::Character(std::string name) {

	this->_name = name;
	this->_invent = new AMateria*[4];
	for (int i = 0; i < 4; i++) {
		this->_invent[i] = NULL;
	}
	return ;
}

Character::Character(Character const &cpy) {

	this->_invent = new AMateria*[4];
	for (int i = 0; i < 4; i++) {
		this->_invent[i] = NULL;
	}
	*this = cpy;
	return ;
}

Character::~Character(void) {

	for (int i = 0; i < 4; i++) {
		if (this->_invent[i] != NULL)
			delete (this->_invent[i]);
	}
	delete [] this->_invent;
	return ;
}

Character &Character::operator=(Character const &rhs) {

	this->_name = rhs.getName();
	for (int i = 0; i < 4; i++) {
		if (rhs._invent[i] != NULL) {
			if (this->_invent[i] != NULL) {
				delete (this->_invent[i]);
				this->_invent[i] = NULL;
			}
			this->_invent[i] = rhs._invent[i]->clone();
		}
		else {
			if (this->_invent[i] != NULL) {
				delete (this->_invent[i]);
				this->_invent[i] = NULL;
			}
		}
	}
	return (*this);
}

std::string const &Character::getName(void) const {

	return (this->_name);
}

void Character::equip(AMateria *m) {

	for (int i = 0; i < 4; i++) {
		if (this->_invent[i] == NULL) {
			this->_invent[i] = m;
			return ;
		}
	}
	return ;		
}

void Character::unequip(int idx) {

	this->_invent[idx] = NULL;
	return ;
}

void Character::use(int idx, ICharacter &target) {

	if (this->_invent[idx] != NULL) {
		this->_invent[idx]->use(target);
		delete (this->_invent[idx]);
		this->_invent[idx] = NULL;
	}
	return ;
}