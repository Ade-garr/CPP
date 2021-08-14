/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adegarr <adegarr@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 02:28:09 by adegarr           #+#    #+#             */
/*   Updated: 2021/08/14 03:45:20 by adegarr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include <string>

MateriaSource::MateriaSource(void) {

	this->_storage = new AMateria*[4];
	for (int i = 0; i < 4; i++) {
		this->_storage[i] = NULL;
	}
	return ;
}

MateriaSource::MateriaSource(MateriaSource const &cpy) {

	this->_storage = new AMateria*[4];
	for (int i = 0; i < 4; i++) {
		this->_storage[i] = NULL;
	}
	*this = cpy;
	return ;
}

MateriaSource::~MateriaSource(void) {

	for (int i = 0; i < 4; i++) {
		if (this->_storage[i] != NULL)
			delete (this->_storage[i]);
	}
	delete [] this->_storage;
	return ;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &rhs) {

	for (int i = 0; i < 4; i++) {
		if (rhs._storage[i] != NULL) {
			if (this->_storage[i] != NULL) {
				delete (this->_storage[i]);
				this->_storage[i] = NULL;
			}
			this->_storage[i] = rhs._storage[i]->clone();
		}
		else {
			if (this->_storage[i] != NULL) {
				delete (this->_storage[i]);
				this->_storage[i] = NULL;
			}
		}
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria *m) {

	for (int i = 0; i < 4; i++) {
		if (this->_storage[i] == NULL) {
			this->_storage[i] = m;
			return ;
		}
	}
	return ;
}

AMateria *MateriaSource::createMateria(std::string const &type) {
	
	AMateria *cpy;
	for (int i = 0; i < 4; i++) {
		if (this->_storage[i] != NULL && this->_storage[i]->getType() == type) {
				cpy = this->_storage[i]->clone();
				return (cpy);
		}
	}
	return (NULL);
}