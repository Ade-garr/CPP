/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adegarr <adegarr@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 15:55:01 by adegarr           #+#    #+#             */
/*   Updated: 2021/08/12 15:58:28 by adegarr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

# include <string>

class Brain {

public:

    Brain(void);
    Brain(Brain const &cpy);
    ~Brain(void);

    Brain   &operator=(Brain const &rhs);
    std::string ideas[100];

};

#endif