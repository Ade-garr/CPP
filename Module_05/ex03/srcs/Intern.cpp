/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-garr <ade-garr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 02:38:02 by adegarr           #+#    #+#             */
/*   Updated: 2021/10/23 15:52:34 by ade-garr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"
#include <string>
#include <iostream>

Intern::Intern() {

	_tab[0] = "ShrubberyCreationForm";
	_tab[1] = "RobotomyRequestForm";
	_tab[2] = "PresidentialPardonForm";
	_ptr[0] = &Intern::makeShrubberyCreationForm;
	_ptr[1] = &Intern::makeRobotomyRequestForm;
	_ptr[2] = &Intern::makePresidentialPardonForm;
	return ;
}

Intern::Intern(Intern const &cpy) {

	_tab[0] = "ShrubberyCreationForm";
	_tab[1] = "RobotomyRequestForm";
	_tab[2] = "PresidentialPardonForm";
	_ptr[0] = &Intern::makeShrubberyCreationForm;
	_ptr[1] = &Intern::makeRobotomyRequestForm;
	_ptr[2] = &Intern::makePresidentialPardonForm;
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