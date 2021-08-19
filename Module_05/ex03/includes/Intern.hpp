/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adegarr <adegarr@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 02:33:49 by adegarr           #+#    #+#             */
/*   Updated: 2021/08/17 18:35:06 by adegarr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_H
# define INTERN_H

# include <string>
# include "Form.hpp"

class Intern {

public:

	Intern();
	Intern(Intern const &cpy);
	~Intern();

	Intern &operator=(Intern const &rhs);
	Form *makeForm(std::string form, std::string target);
	Form *makeShrubberyCreationForm(std::string target);
	Form *makeRobotomyRequestForm(std::string target);
	Form *makePresidentialPardonForm(std::string target);

private:

	std::string _tab[3];
	Form *(Intern::*_ptr[3])(std::string);

};

#endif