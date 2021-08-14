/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adegarr <adegarr@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 16:51:46 by adegarr           #+#    #+#             */
/*   Updated: 2021/08/12 21:20:09 by adegarr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal {

public:

    Dog(void);
    Dog(Dog const &cpy);
    virtual ~Dog(void);

    Dog &operator=(Dog const &rhs);
    virtual void    makeSound(void) const;
    Brain   *getptr(void) const;

private:

    Brain   *ptr;

};

#endif