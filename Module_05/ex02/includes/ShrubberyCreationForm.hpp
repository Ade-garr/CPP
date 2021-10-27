/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-garr <ade-garr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 22:11:20 by adegarr           #+#    #+#             */
/*   Updated: 2021/10/27 14:09:40 by ade-garr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H

# include <string>
# include "Bureaucrat.hpp"

class ShrubberyCreationForm : public Form {

public:

	ShrubberyCreationForm() {}
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm const &cpy);
	~ShrubberyCreationForm();

	ShrubberyCreationForm &operator=(ShrubberyCreationForm const &rhs);
	virtual void execute(Bureaucrat const &executor) const;
	std::string getTarget() const;
	class FileNotOpenException : public std::exception {

	public:
	
		virtual const char *what() const throw();

	};

private:

	std::string _target;

};

#endif