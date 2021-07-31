/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-garr <ade-garr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 16:15:58 by ade-garr          #+#    #+#             */
/*   Updated: 2021/07/29 18:06:55 by ade-garr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>
#include "megaphone.hpp"

Megaphone::Megaphone(char **argv) {

	int	i;
	int	j;
	int	end_space;

	if (argv[1] == NULL)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		i = 1;
		end_space = 0;
		while (argv[i] != NULL)
		{
			j = 0;
			if (i != 1 && argv[i][j] != ' ' && end_space == 0)
				std::cout << " ";
			while (argv[i][j] != '\0')
			{
				if (argv[i][j] == ' ')
					end_space = 1;
				else
					end_space = 0;
				std::cout << (char)toupper(argv[i][j]);
				j++;
			}
			i++;
		}
		std::cout << std::endl;
	}
}

Megaphone::~Megaphone(void) {

	return ;
}