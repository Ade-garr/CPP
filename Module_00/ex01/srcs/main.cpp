/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-garr <ade-garr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 01:38:26 by ade-garr          #+#    #+#             */
/*   Updated: 2021/07/30 18:28:18 by ade-garr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <iostream>
#include <string>

int	main()
{
	Phonebook	phone;
	std::string	buf;

	while (1)
	{
		std::cout << "Please insert a command (ADD, SEARCH or EXIT): ";
		std::cin >> buf;
		if (buf.compare("ADD") == 0)
			phone.add_contact();
		else if (buf.compare("SEARCH") == 0)
			phone.display_list();
		else if (buf.compare("EXIT") == 0)
			return (0);
		else
			std::cout << "Wrong input !" << std::endl;
	}
}