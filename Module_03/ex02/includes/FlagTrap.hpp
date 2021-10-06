/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-garr <ade-garr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 17:46:31 by ade-garr          #+#    #+#             */
/*   Updated: 2021/10/06 12:13:50 by ade-garr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLAGTRAP_H
# define FLAGTRAP_H

#include "ClapTrap.hpp"
#include <string>

class FlagTrap : public ClapTrap {

public:

	FlagTrap() {}
	FlagTrap(std::string name);
	FlagTrap(FlagTrap const &cpy);
	~FlagTrap(void);

	FlagTrap	&operator=(FlagTrap const &rhs);
	void		highFivesGuys(void) const;

};

#endif