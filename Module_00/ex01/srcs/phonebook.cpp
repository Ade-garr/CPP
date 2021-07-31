/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-garr <ade-garr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 01:36:34 by ade-garr          #+#    #+#             */
/*   Updated: 2021/07/31 15:14:54 by ade-garr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "contact.hpp"
#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>

Phonebook::Phonebook(void) : _nb_contact(0) {

	return ;
}

Phonebook::~Phonebook(void) {

	return ;
}

void	Phonebook::add_contact(void) {

	if (this->_nb_contact == 8)
		std::cout << "Contact list full !" << std::endl;
	else
	{
		Contact	new_contact;

		new_contact.new_contact();
		this->_tab[this->_nb_contact] = new_contact;
		this->_nb_contact++;
	}
	return ;
}

void	Phonebook::display_list(void) const {

	int	i;
	std::string	buf;
	char	buf2[11];

	i = 1;
	std::cout << std::setw(10) << "index" << "|";
	std::cout << std::setw(10) << "first name" << "|";
	std::cout << std::setw(10) << "last name" << "|";
	std::cout << std::setw(10) << "nickname" << std::endl;
	while (i - 1 < this->_nb_contact)
	{
		std::cout << std::setw(10) << i << "|" << std::setw(10);
		Phonebook::_fill_buf(buf2, this->_tab[i - 1].first_name);
		std::cout << buf2;
		std::cout << "|" << std::setw(10);
		Phonebook::_fill_buf(buf2, this->_tab[i - 1].last_name);
		std::cout << buf2;
		std::cout << "|" << std::setw(10);
		Phonebook::_fill_buf(buf2, this->_tab[i - 1].nickname);
		std::cout << buf2;
		std::cout << std::endl;
		i++;
	}
	std::cout << "Please type index of the contact wanted: ";
	std::cin >> buf;
	i = std::atoi(buf.c_str()) - 1;
	if (i < 0 || i > 7 || i + 1 > this->_nb_contact)
		std::cout << "Wrong input !" << std::endl;
	else
	{
		std::cout << "first name: " << this->_tab[i].first_name << std::endl;
		std::cout << "last name: " << this->_tab[i].last_name << std::endl;
		std::cout << "nickname: " << this->_tab[i].nickname << std::endl;
		std::cout << "phone number: " << this->_tab[i].phone_number << std::endl;
		std::cout << "darkest secret: " << this->_tab[i].darkest_secret << std::endl;
	}
	return ;
}

void	Phonebook::_fill_buf(char *buf, std::string str) const {

	int	j;

	j = 0;
	while (j < 10 && (unsigned long)j < str.length())
	{
		if (j == 9 && str.length() > 10)
			buf[j] = '.';
		else
			buf[j] = str[j];
		j++;
	}
	buf[j] = '\0';
	return ;
}