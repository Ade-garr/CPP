/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-garr <ade-garr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/02 15:03:25 by ade-garr          #+#    #+#             */
/*   Updated: 2021/08/02 15:44:17 by ade-garr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <string>

class Zombie {

public:

	Zombie(std::string name);
	~Zombie(void);

	void	announce(void) const;

private:

	std::string	_name;

};

Zombie	*newZombie( std::string name );
void	randomChump( std::string name );

#endif