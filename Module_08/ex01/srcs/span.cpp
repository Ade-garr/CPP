/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-garr <ade-garr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 17:55:41 by ade-garr          #+#    #+#             */
/*   Updated: 2021/09/12 23:05:24 by ade-garr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span() {

	return ;
}

Span::Span(unsigned int N) : _size_max(N) {

	return ;
}

Span::Span(Span const &cpy) {

	*this = cpy;
	return ;
}

Span::~Span() {

	return ;
}

Span &Span::operator=(Span const &rhs) {

	_nbs = rhs._nbs;
	_size_max = rhs._size_max;
	return (*this);
}

void Span::addNumber(int nb) {

	if (this->_nbs.size() < _size_max)
		_nbs.push_back(nb);
	else
		throw (Span::object_full());
	return ;
}

unsigned int Span::shortestSpan() {

	if (_nbs.size() <= 1)
		throw (no_span());
	std::sort(_nbs.begin(), _nbs.end());
	std::vector<int>::iterator it = _nbs.begin();
	std::vector<int>::iterator it2 = _nbs.begin() + 1;
	int ret = *it2 - *it;
	for (; it < _nbs.end() - 1; it++, it2++) {
		ret = (ret < *it2 - *it) ? ret : *it2 - *it;
	}
	return (ret);
}

unsigned int Span::longestSpan() {

	if (_nbs.size() <= 1)
		throw (no_span());
	std::sort(_nbs.begin(), _nbs.end());
	return (_nbs.back() - _nbs.front());
}

const char *Span::object_full::what() const throw () {

	return ("Object is full");
}

const char *Span::no_span::what() const throw () {

	return ("No span to find");
}
