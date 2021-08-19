/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adegarr <adegarr@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 22:11:20 by adegarr           #+#    #+#             */
/*   Updated: 2021/08/16 23:42:51 by adegarr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H

# include <string>
# include "Bureaucrat.hpp"

class ShrubberyCreationForm : public Form {

public:

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