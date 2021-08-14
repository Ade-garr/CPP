/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adegarr <adegarr@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 17:02:46 by adegarr           #+#    #+#             */
/*   Updated: 2021/08/07 17:12:36 by adegarr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

# include "Animal.hpp"

class Cat : public Animal {

public:

    Cat(void);
    Cat(Cat const &cpy);
    virtual ~Cat(void);

    Cat &operator=(Cat const &rhs);
    virtual void    makeSound(void) const;

};

#endif