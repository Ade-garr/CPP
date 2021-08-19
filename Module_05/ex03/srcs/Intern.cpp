/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adegarr <adegarr@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 02:38:02 by adegarr           #+#    #+#             */
/*   Updated: 2021/08/17 18:51:06 by adegarr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"
#include <string>
#include <iostream>

Intern::Intern() : _tab{"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"}, _ptr{&Intern::makeShrubberyCreationForm, &Intern::makeRobotomyRequestForm, &Intern::makePresidentialPardonForm} {

	return ;
}

Intern::Intern(Intern const &cpy) : _tab{"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"}, _ptr{&Intern::makeShrubberyCreationForm, &Intern::makeRobotomyRequestForm, &Intern::makePresidentialPardonForm} {

	*this = cpy;
	return ;
}

Intern::~Intern() {

	return ;
}

Intern &Intern::operator=(Intern const &rhs) {

	(void)rhs;
	return (*this);
}

Form *Intern::makeForm(std::string form, std::string target) {

	for (int i = 0; i < 3; i++) {
		if (form == this->_tab[i]) {
			std::cout << "Intern creates " << this->_tab[i] << std::endl;
			return ((this->*_ptr[i])(target));
		}
	}
	std::cout << "Form requested doesn't exist !\n";
	return (NULL);
}

Form *Intern::makeShrubberyCreationForm(std::string target) {

	return (new ShrubberyCreationForm(target));
}

Form *Intern::makeRobotomyRequestForm(std::string target) {

	return (new RobotomyRequestForm(target));
}

Form *Intern::makePresidentialPardonForm(std::string target) {

	return (new PresidentialPardonForm(target));
}