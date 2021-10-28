/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adegarr <adegarr@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 04:09:43 by adegarr           #+#    #+#             */
/*   Updated: 2021/08/16 20:21:38 by adegarr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <string>
#include <iostream>

Bureaucrat::Bureaucrat() {

	return ;
}

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

void Bureaucrat::signForm(Form &f) {

	try {
		f.beSigned(*this);
		std::cout << "Bureaucrat " << this->_name << " signs form " << f.getName() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "Bureaucrat " << this->_name << " cannot sign because : " << e.what() << std::endl;
	}
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