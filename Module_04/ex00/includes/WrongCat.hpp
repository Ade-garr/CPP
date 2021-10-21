/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-garr <ade-garr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 17:02:46 by adegarr           #+#    #+#             */
/*   Updated: 2021/10/21 14:46:47 by ade-garr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_H
# define WRONGCAT_H

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

public:

    WrongCat(void);
    WrongCat(WrongCat const &cpy);
    ~WrongCat(void);

    WrongCat &operator=(WrongCat const &rhs);
    void    makeSound(void) const;

};

#endif