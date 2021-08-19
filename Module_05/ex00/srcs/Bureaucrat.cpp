/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adegarr <adegarr@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 04:09:43 by adegarr           #+#    #+#             */
/*   Updated: 2021/08/16 16:04:54 by adegarr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <string>
#include <iostream>

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {

	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade = grade;
	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const &cpy) : _name(cpy.getName()) {

	*this = cpy;
	return ;
}

Bureaucrat::~Bureaucrat() {

	return ;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rhs) {

	this->_grade = rhs.getGrade();
	return (*this);
}

std::string Bureaucrat::getName() const {

	return (this->_name);
}

int Bureaucrat::getGrade() const {

	return (this->_grade);
}

void Bureaucrat::inc_grade() {

	if (this->_grade == 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade = this->_grade - 1;
	return ;
}

void Bureaucrat::dec_grade() {

	if (this->_grade == 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade = this->_grade + 1;
	return ;
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {

	return ("Grade too high !");
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {

	return ("Grade too low !");
}

std::ostream &operator<<(std::ostream &o, Bureaucrat const &rhs) {

	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return (o);
}