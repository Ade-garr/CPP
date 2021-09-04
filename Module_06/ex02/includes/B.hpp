/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-garr <ade-garr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 18:53:25 by ade-garr          #+#    #+#             */
/*   Updated: 2021/09/04 18:53:52 by ade-garr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_H
# define B_H

# include "Base.hpp"

class B : public Base {

public:

	B();
	B(B const &cpy);
	virtual ~B();

	B &operator=(B const &rhs);

};

#endif