/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-garr <ade-garr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 14:54:15 by ade-garr          #+#    #+#             */
/*   Updated: 2021/09/05 16:31:55 by ade-garr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
# define ARRAY_H

# include <exception>
# include <iostream>

template<typename T>
class Array {

public:

	Array() : _array(new T[0]), _size(0) {}
	Array(unsigned int n) : _array(new T[n]), _size(n) {}
	Array(Array const &cpy) : _array(0) , _size(0) {
		*this = cpy;
	}
	~Array() {
		if (this->_array != 0) {
			delete [] this->_array;
		}
	}

	Array &operator=(Array const &rhs) {
		if (this == &rhs)
			return (*this);
		this->_size = rhs.size();
		if (this->_array != 0)
			delete [] this->_array;
		this->_array = new T[this->_size];
		for (unsigned int i = 0; i < this->_size; i++) {
			this->_array[i] = rhs.getArray()[i];
		}
		return (*this);
	}
	T &operator[](unsigned int n) {
		if (n >= this->_size)
			throw (std::exception());
		return (this->_array[n]);
	}
	unsigned int size() const {
		return (this->_size);
	}
	T *getArray() const {
		return (this->_array);
	}

private:

	T	*_array;
	unsigned int _size;

};

template<typename T>
void	printElem(Array<T> &array, int i) {
	try 
	{
		std::cout << array[i];
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
}

#endif