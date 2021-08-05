/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-garr <ade-garr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 16:29:58 by ade-garr          #+#    #+#             */
/*   Updated: 2021/08/05 17:43:21 by ade-garr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

public:

	ScavTrap(std::string name);
	ScavTrap(ScavTrap const &cpy);
	~ScavTrap(void);

	ScavTrap	&operator=(ScavTrap const &rhs);
	void		attack(std::string const &target);
	void		guardGate(void) const;

};

#endif