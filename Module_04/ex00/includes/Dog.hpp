/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adegarr <adegarr@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 16:51:46 by adegarr           #+#    #+#             */
/*   Updated: 2021/08/07 16:56:50 by adegarr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

# include "Animal.hpp"

class Dog : public Animal {

public:

    Dog(void);
    Dog(Dog const &cpy);
    virtual ~Dog(void);

    Dog &operator=(Dog const &rhs);
    virtual void    makeSound(void) const;

};

#endif