/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adegarr <adegarr@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 15:00:30 by adegarr           #+#    #+#             */
/*   Updated: 2021/08/12 14:46:42 by adegarr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

# include <string>

class Animal {

public:

    Animal(void);
    Animal(Animal const &cpy);
    virtual ~Animal(void);

    Animal  &operator=(Animal const &rhs);
    virtual void    makeSound(void) const;
    std::string     getType(void) const;

protected:

    std::string _type;

};

#endif