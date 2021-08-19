/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adegarr <adegarr@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 01:40:06 by adegarr           #+#    #+#             */
/*   Updated: 2021/08/17 03:21:54 by adegarr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Form.hpp"
#include <string>
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 5, 25), _target(target) {

	return ;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &cpy) : Form("PresidentialPardonForm", 5, 25) {

	*this = cpy;
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm() {

	return ;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs) {

	Form::operator=(rhs);
	this->_target = rhs.getTarget();
	return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const {

	if (this->getSig() == 0)
		throw Form::GradeNotSignedException();
	if (this->getGrade_exe() < executor.getGrade())
		throw Form::GradeTooLowException();
	else {
		std::cout << "Bureaucrat " << executor.getName() << " executs form " << this->getName() << std::endl;
		std::cout << this->_target << " was forgiven by Zafod Beeblebrox !" << std::endl;
	}
}

std::string PresidentialPardonForm::getTarget() const {

	return (this->_target);
}