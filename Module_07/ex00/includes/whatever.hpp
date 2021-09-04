/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-garr <ade-garr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 23:34:36 by ade-garr          #+#    #+#             */
/*   Updated: 2021/09/04 23:49:24 by ade-garr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_H
# define WHATEVER_H

template<typename T>
void swap(T &a, T &b) {

	T tmp;
	tmp = a;
	a = b;
	b = tmp;
	return ;
}

template<typename T>
T const &min(T const &a, T const &b) {

	if (a < b)
		return (a);
	else
		return (b);
}

template<typename T>
T const &max(T const &a, T const &b) {

	if (a > b)
		return (a);
	else
		return (b);
}

#endif