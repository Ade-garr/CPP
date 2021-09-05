/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-garr <ade-garr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 17:45:57 by ade-garr          #+#    #+#             */
/*   Updated: 2021/09/05 19:16:46 by ade-garr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
# define EASYFIND_H

# include <iterator>
# include <algorithm>

template<typename T>
typename T::const_iterator easyfind(T const &a, int b) {
	return std::find(a.begin(), a.end(), b);
}

#endif