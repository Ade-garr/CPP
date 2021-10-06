/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-garr <ade-garr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 22:25:43 by adegarr           #+#    #+#             */
/*   Updated: 2021/10/06 12:17:43 by ade-garr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

# include "FlagTrap.hpp"
# include "ScavTrap.hpp"
# include <string>

class DiamondTrap : public FlagTrap, public ScavTrap {

public:

    DiamondTrap() {}
    DiamondTrap(std::string name);
    DiamondTrap(DiamondTrap const &cpy);
    ~DiamondTrap(void);

    DiamondTrap &operator=(DiamondTrap const &rhs);
    std::string getName_diam(void) const;
    void        whoAmI(void) const;

private:

    std::string _name_diam;

};

#endif