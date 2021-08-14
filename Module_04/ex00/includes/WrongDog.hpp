/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adegarr <adegarr@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 16:51:46 by adegarr           #+#    #+#             */
/*   Updated: 2021/08/12 15:14:23 by adegarr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGDOG_H
# define WRONGDOG_H

# include "WrongAnimal.hpp"

class WrongDog : public WrongAnimal {

public:

    WrongDog(void);
    WrongDog(WrongDog const &cpy);
    ~WrongDog(void);

    WrongDog &operator=(WrongDog const &rhs);
    void    makeSound(void) const;

};

#endif