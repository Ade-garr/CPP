/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-garr <ade-garr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 18:49:07 by ade-garr          #+#    #+#             */
/*   Updated: 2021/09/04 18:52:26 by ade-garr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_H
# define A_H

# include "Base.hpp"

class A : public Base {

public:

	A();
	A(A const &cpy);
	virtual ~A();

	A &operator=(A const &rhs);

};

#endif