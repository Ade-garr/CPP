/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-garr <ade-garr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 18:53:56 by ade-garr          #+#    #+#             */
/*   Updated: 2021/09/04 18:54:26 by ade-garr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C_H
# define C_H

# include "Base.hpp"

class C : public Base {

public:

	C();
	C(C const &cpy);
	virtual ~C();

	C &operator=(C const &rhs);

};

#endif