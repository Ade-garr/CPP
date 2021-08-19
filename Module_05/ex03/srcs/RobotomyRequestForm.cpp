/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adegarr <adegarr@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 00:05:56 by adegarr           #+#    #+#             */
/*   Updated: 2021/08/17 03:21:48 by adegarr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Form.hpp"
#include <string>
#include <iostream>
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 45, 72), _target(target) {

	srand(time(NULL));
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &cpy) : Form("RobotomyRequestForm", 45, 72) {

	*this = cpy;
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm() {

	return ;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs) {

	Form::operator=(rhs);
	this->_target = rhs.getTarget();
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const {

	if (this->getSig() == 0)
		throw Form::GradeNotSignedException();
	if (this->getGrade_exe() < executor.getGrade())
		throw Form::GradeTooLowException();
	else {
		std::cout << "Bureaucrat " << executor.getName() << " executs form " << this->getName() << std::endl;
		std::cout << "FZZzzz FZZzzz FZZzzz..." << std::endl;
		if (rand() % 2 == 0)
			std::cout << this->_target << " successfully robotomised !" << std::endl;
		else
			std::cout << "Robotomisation failed !" << std::endl;
	}
}

std::string RobotomyRequestForm::getTarget() const {

	return (this->_target);
}