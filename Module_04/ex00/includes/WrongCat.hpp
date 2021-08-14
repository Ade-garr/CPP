/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adegarr <adegarr@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 17:02:46 by adegarr           #+#    #+#             */
/*   Updated: 2021/08/12 15:14:48 by adegarr          ###   ########.fr       */
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