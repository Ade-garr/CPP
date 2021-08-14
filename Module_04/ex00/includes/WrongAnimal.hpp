/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adegarr <adegarr@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 15:00:30 by adegarr           #+#    #+#             */
/*   Updated: 2021/08/12 15:10:34 by adegarr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

# include <string>

class WrongAnimal {

public:

    WrongAnimal(void);
    WrongAnimal(WrongAnimal const &cpy);
    virtual ~WrongAnimal(void);

    WrongAnimal  &operator=(WrongAnimal const &rhs);
    void    makeSound(void) const;
    std::string     getType(void) const;

protected:

    std::string _type;

};

#endif