/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-garr <ade-garr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 00:25:37 by adegarr           #+#    #+#             */
/*   Updated: 2021/10/21 15:26:13 by ade-garr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H

# include "IMateriaSource.hpp"
# include <string>

class MateriaSource : public IMateriaSource {

public:

	MateriaSource(void);
	MateriaSource(MateriaSource const &cpy);
	virtual ~MateriaSource(void);

	MateriaSource &operator=(MateriaSource const &rhs);
	virtual void learnMateria(AMateria *m);
	virtual AMateria *createMateria(std::string const &type);

protected:

	AMateria **_storage;

};

#endif