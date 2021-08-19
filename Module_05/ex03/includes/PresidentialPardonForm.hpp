/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adegarr <adegarr@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 01:39:08 by adegarr           #+#    #+#             */
/*   Updated: 2021/08/17 18:27:34 by adegarr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H

# include <string>
# include "Bureaucrat.hpp"

class PresidentialPardonForm : public Form {

public:

	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(PresidentialPardonForm const &cpy);
	virtual ~PresidentialPardonForm();

	PresidentialPardonForm &operator=(PresidentialPardonForm const &rhs);
	virtual void execute(Bureaucrat const &executor) const;
	std::string getTarget() const;

private:

	std::string _target;

};

#endif