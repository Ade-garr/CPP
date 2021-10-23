/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-garr <ade-garr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 04:34:57 by adegarr           #+#    #+#             */
/*   Updated: 2021/10/23 15:27:16 by ade-garr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <string>
#include <iostream>

int main() {

	Bureaucrat b1("AAA", 1);
	Bureaucrat b2("BBB", 140);
	Bureaucrat b3("CCC", 150);
	Bureaucrat b4("DDD", 50);
	Bureaucrat b5("EEE", 20);
	ShrubberyCreationForm f1("maison");
	RobotomyRequestForm f2("Peon");
	PresidentialPardonForm f3("R2D2");
	std::cout << "ShrubberyCreationForm: \n";
	b3.signForm(f1);
	b2.signForm(f1);
	b2.executeForm(f1);
	b1.executeForm(f1);
	std::cout << std::endl;
	std::cout << "RobotomyRequestForm: \n";
	b3.signForm(f2);
	b4.signForm(f2);
	b4.executeForm(f2);
	b1.executeForm(f2);
	b1.executeForm(f2);
	b1.executeForm(f2);
	b1.executeForm(f2);
	std::cout << std::endl;
	std::cout << "PresidentialPardonForm: \n";
	b3.signForm(f3);
	b5.signForm(f3);
	b5.executeForm(f3);
	b1.executeForm(f3);
	return (0);
}