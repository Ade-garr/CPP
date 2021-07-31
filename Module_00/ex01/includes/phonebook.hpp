/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-garr <ade-garr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 11:56:08 by ade-garr          #+#    #+#             */
/*   Updated: 2021/07/31 15:13:17 by ade-garr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "contact.hpp"
#include <string>

class Phonebook {

public:

	Phonebook(void);
	~Phonebook(void);

	void	add_contact(void);
	void	display_list(void) const;

private:

	Contact	_tab[8];
	int		_nb_contact;

	void	_fill_buf(char *buf, std::string str) const;

};

#endif