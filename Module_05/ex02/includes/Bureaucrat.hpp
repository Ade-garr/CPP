/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adegarr <adegarr@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 03:35:00 by adegarr           #+#    #+#             */
/*   Updated: 2021/08/16 23:49:25 by adegarr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

# include <string>
# include <iostream>
# include <Form.hpp>

class Form;

class Bureaucrat {

public:

	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat const &cpy);
	~Bureaucrat();

	Bureaucrat &operator=(Bureaucrat const &rhs);
	std::string getName() const;
	int getGrade() const;
	void inc_grade();
	void dec_grade();
	class GradeTooHighException : public std::exception {
	
	public:
	
		virtual const char *what() const throw();

	};
	class GradeTooLowException : public std::exception {
	
	public:

		virtual const char *what() const throw();
	
	};
	void signForm(Form &f);
	void executeForm (Form const &Form);

private:

	const std::string _name;
	int _grade;

};

std::ostream &operator<<(std::ostream &o, Bureaucrat const &rhs);

#endif