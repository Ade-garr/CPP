/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-garr <ade-garr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 02:19:46 by ade-garr          #+#    #+#             */
/*   Updated: 2021/09/12 23:05:37 by ade-garr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
# define SPAN_H

# include <vector>
# include <algorithm>

class Span {

public:

	Span(unsigned int N);
	Span(Span const &cpy);
	~Span();

	Span &operator=(Span const &rhs);
	void addNumber(int nb);
	template<typename T>
	void addNumber(T start, T end) {		

		for (T it = start; it < end; it++) {
			if (this->_nbs.size() < _size_max)
				_nbs.push_back(*it);
			else
				throw (Span::object_full());
		}
		return ;
	}
	unsigned int shortestSpan();
	unsigned int longestSpan();

private:

	std::vector<int> _nbs;
	size_t _size_max;

	class object_full : public std::exception {

	public:
	
		virtual const char *what() const throw();
	
	};
	class no_span : public std::exception {

	public:
	
		virtual const char *what() const throw();
	
	};

	Span();

};

#endif