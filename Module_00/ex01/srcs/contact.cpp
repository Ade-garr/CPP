/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-garr <ade-garr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 20:35:54 by ade-garr          #+#    #+#             */
/*   Updated: 2021/07/30 18:34:03 by ade-garr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include <iostream>
#include <string>

Contact::Contact(void) {

	return ;
}

Contact::~Contact(void) {

	return ;
}

void	Contact::new_contact(void) {

	std::string	buf;

	std::cout << "Please insert first name: ";
	std::cin >> buf;
	this->first_name = buf;
	std::cout << "Please insert last name: ";
	std::cin >> buf;
	this->last_name = buf;
	std::cout << "Please insert nickname: ";
	std::cin >> buf;
	this->nickname = buf;
	std::cout << "Please insert phone number: ";
	std::cin >> buf;
	this->phone_number = buf;
	std::cout << "Please insert darkest_secret: ";
	std::cin >> buf;
	this->darkest_secret = buf;
	return ;
}