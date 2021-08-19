/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adegarr <adegarr@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 12:48:11 by adegarr           #+#    #+#             */
/*   Updated: 2021/08/16 23:42:44 by adegarr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H

# include <string>
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

public:

	Form(std::string name, int grade_exe, int grade_sig);
	Form(Form const &cpy);
	~Form();

	Form &operator=(Form const &rhs);
	std::string getName() const;
	int getGrade_exe() const;
	int getGrade_sig() const;
	int getSig() const;
	void beSigned(Bureaucrat &b);
	virtual void execute(Bureaucrat const &executor) const = 0;
	class GradeTooHighException : public std::exception {
	
	public:
	
		virtual const char *what() const throw();

	};
	class GradeTooLowException : public std::exception {
	
	public:

		virtual const char *what() const throw();

	};
	class GradeNotSignedException : public std::exception {
	
	public:

		virtual const char *what() const throw();
		
	};

private:

	const std::string _name;
	const int _grade_exe;
	const int _grade_sig;
	bool _sig;

};

std::ostream &operator<<(std::ostream &o, Form const &rhs);

#endif