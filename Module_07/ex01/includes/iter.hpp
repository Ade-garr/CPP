/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-garr <ade-garr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 23:53:24 by ade-garr          #+#    #+#             */
/*   Updated: 2021/09/05 01:08:52 by ade-garr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
# define ITER_H

template<typename T>
void add_one(T &c) {

	c = c + 1;
	return ;
}

template<typename T, typename U>
void iter(T *ptr, U len, void (*ft)(T &)) {

	for (U i = 0; i < len; i++) {
		(*ft)(ptr[i]);
	}
	return ;
}

#endif