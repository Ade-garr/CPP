/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-garr <ade-garr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 22:26:01 by ade-garr          #+#    #+#             */
/*   Updated: 2021/09/14 01:03:25 by ade-garr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_H
# define MUTANTSTACK_H

# include <deque>
# include <stack>

template<typename T>
class MutantStack : public std::stack<T> {

public:

	MutantStack<T>() {}
	MutantStack<T>(MutantStack const &cpy) : std::stack<T>(cpy) {}
	virtual ~MutantStack<T>() {}

	MutantStack<T> &operator=(MutantStack const &rhs) {

		return (std::stack<T>::operator=(rhs));
	}
	typedef typename std::deque<T>::iterator iterator;
	iterator end() {

		return (std::stack<T>::c.end());
	}
	iterator begin() {

		return (std::stack<T>::c.begin());
	}
};

#endif