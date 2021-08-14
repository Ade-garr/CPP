/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adegarr <adegarr@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 17:46:31 by ade-garr          #+#    #+#             */
/*   Updated: 2021/08/05 23:45:27 by adegarr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLAGTRAP_H
# define FLAGTRAP_H

#include "ClapTrap.hpp"
#include <string>

class FlagTrap : virtual public ClapTrap {

public:

	FlagTrap(std::string name);
	FlagTrap(FlagTrap const &cpy);
	~FlagTrap(void);

	FlagTrap	&operator=(FlagTrap const &rhs);
	void		highFivesGuys(void) const;

};

#endif