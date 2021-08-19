/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adegarr <adegarr@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 16:17:38 by adegarr           #+#    #+#             */
/*   Updated: 2021/08/16 22:59:04 by adegarr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <string>
#include <iostream>

Form::Form(std::string name, int grade_exe, int grade_sig) : _name(name), _grade_exe(grade_exe), _grade_sig(grade_sig) {

	if (grade_exe < 1 || grade_sig < 1)
		throw Form::GradeTooHighException();
	if (grade_exe > 150 || grade_sig > 150)
		throw Form::GradeTooLowException();
	this->_sig = 0;
	return ;
}

Form::Form(Form const &cpy) : _name(cpy.getName()), _grade_exe(cpy.getGrade_exe()), _grade_sig(cpy.getGrade_sig()) {

	*this = cpy;
	return ;
}

Form::~Form() {

	return ;
}

Form &Form::operator=(Form const &rhs) {

	this->_sig = rhs.getSig();
	return (*this);
}

std::string Form::getName() const {

	return (this->_name);
}

int Form::getGrade_exe() const {

	return (this->_grade_exe);
}

int Form::getGrade_sig() const {

	return (this->_grade_sig);
}

int Form::getSig() const {

	return (this->_sig);
}

void Form::beSigned(Bureaucrat &b) {

	if (b.getGrade() > this->_grade_sig)
		throw Form::GradeTooLowException();
	else
		this->_sig = 1;
	return ;
}

const char *Form::GradeTooHighException::what() const throw() {

	return ("Grade too high !");
}

const char *Form::GradeTooLowException::what() const throw() {

	return ("Grade too low !");
}

const char *Form::GradeNotSignedException::what() const throw() {

	return ("Grade not signed !");
}

std::ostream &operator<<(std::ostream &o, Form const &rhs) {

	o << "Form " << rhs.getName() << ", grade to execute = " << rhs.getGrade_exe() << ", grade to signe = " << rhs.getGrade_sig();
	return (o);
}