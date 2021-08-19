/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adegarr <adegarr@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 00:03:57 by adegarr           #+#    #+#             */
/*   Updated: 2021/08/17 18:27:21 by adegarr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_H
# define ROBOTOMYREQUESTFORM_H

# include <string>
# include "Bureaucrat.hpp"

class RobotomyRequestForm : public Form {

public:

	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(RobotomyRequestForm const &cpy);
	virtual ~RobotomyRequestForm();

	RobotomyRequestForm &operator=(RobotomyRequestForm const &rhs);
	virtual void execute(Bureaucrat const &executor) const;
	std::string getTarget() const;

private:

	std::string _target;

};

#endif