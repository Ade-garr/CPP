/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-garr <ade-garr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 14:54:41 by ade-garr          #+#    #+#             */
/*   Updated: 2021/10/06 12:09:37 by ade-garr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

# include <string>

class ClapTrap {

public:

	ClapTrap() {}
	ClapTrap(std::string	name);
	ClapTrap(ClapTrap const &cpy);
	~ClapTrap(void);

	ClapTrap	&operator=(ClapTrap const &rhs);
	void		attack(std::string const &target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	std::string	getName(void) const;
	int			getHit_points(void) const;
	int			getEnergy_points(void) const;
	int			getAttack_dmg(void) const;

private:

	std::string	_Name;
	int			_Hit_points;
	int			_Energy_points;
	int			_Attack_dmg;

};

#endif