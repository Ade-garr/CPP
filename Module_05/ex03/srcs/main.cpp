/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adegarr <adegarr@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 04:34:57 by adegarr           #+#    #+#             */
/*   Updated: 2021/08/17 18:37:25 by adegarr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include <string>
#include <iostream>

int main() {

	Bureaucrat b1("AAA", 1);
	Intern Peon;
	Form *ptr;
	ptr = Peon.makeForm("ShrubberyCreationForm", "zzz");
	b1.signForm(*ptr);
	b1.executeForm(*ptr);
	delete ptr;
	ptr = Peon.makeForm("RobotomyRequestForm", "zzz");
	b1.signForm(*ptr);
	b1.executeForm(*ptr);
	delete ptr;
	ptr = Peon.makeForm("PresidentialPardonForm", "zzz");
	b1.signForm(*ptr);
	b1.executeForm(*ptr);
	delete ptr;
	ptr = Peon.makeForm("WrongForm", "zzz");
	return (0);
}