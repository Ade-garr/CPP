/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-garr <ade-garr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 22:47:17 by adegarr           #+#    #+#             */
/*   Updated: 2021/10/23 15:25:02 by ade-garr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Form.hpp"
#include <string>
#include <fstream>
#include <iostream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 137, 145), _target(target) {

	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &cpy) : Form("ShrubberyCreationForm", 137, 145) {

	*this = cpy;
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {

	return ;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs) {

	Form::operator=(rhs);
	this->_target = rhs.getTarget();
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const {

	if (this->getSig() == 0)
		throw Form::FormNotSignedException();
	if (this->getGrade_exe() < executor.getGrade())
		throw Form::GradeTooLowException();
	else {
		std::ofstream target;
		std::string f = _target + "_shrubbery";
		target.open(f.c_str());
		if (target.is_open() == 0)
			throw ShrubberyCreationForm::FileNotOpenException();
		else {
			std::cout << "Bureaucrat " << executor.getName() << " executs form " << this->getName() << std::endl;
			target << "                     @@@@@\n";
			target << "               #@@@@@@@@@@@@@@@#\n";
			target << "             @@@@             @@@@\n";
			target << "           @@@@                 @@@@\n";
			target << "          @@@,                   *@@@\n";
			target << "        @@@@@                     @@@@@\n";
			target << "     @@@@@            @@@            @@@@@\n";
			target << "   @@@@               @@@               @@@,\n";
			target << "  @@@@                @@@&@@@@@.         @@@@\n";
			target << "  @@@                 @@@@@               @@@\n";
			target << "  @@@           @@@   @@@                 @@@\n";
			target << "  @@@            @@@@@@@@                .@@@\n";
			target << "  @@@@               @@@               @@@@\n";
			target << "   .@@@@             @@@             @@@@\n";
			target << "      @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
			target << "           *@@@@@.   @@@   .@@@@@.\n";
			target << "                     @@@\n";
			target << "                     @@@\n";
			target << "                     @@@\n";
			target << "                     @@@\n";
			target << "                     @@@\n";
			target << "                     @@@";
			target.close();
		}
	}
}

const char *ShrubberyCreationForm::FileNotOpenException::what() const throw() {

	return ("Can't open file !");
}

std::string ShrubberyCreationForm::getTarget() const {

	return (this->_target);
}