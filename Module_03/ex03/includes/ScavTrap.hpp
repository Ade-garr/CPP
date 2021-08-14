/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adegarr <adegarr@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 16:29:58 by ade-garr          #+#    #+#             */
/*   Updated: 2021/08/05 23:45:21 by adegarr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {

public:

	ScavTrap(std::string name);
	ScavTrap(ScavTrap const &cpy);
	~ScavTrap(void);

	ScavTrap	&operator=(ScavTrap const &rhs);
	void		attack(std::string const &target);
	void		guardGate(void) const;

};

#endif