/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-garr <ade-garr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 18:05:20 by ade-garr          #+#    #+#             */
/*   Updated: 2021/09/05 19:42:21 by ade-garr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <list>
#include <vector>
#include <iostream>

int main(void) {
	
	std::vector<int>::const_iterator test;

	int a[ 10 ] = { 10, 2, 17, 5, 16, 8, 13, 11, 20, 7 };
	std::vector< int > v( a, a + 10 );
	std::vector<int>::const_iterator it;
	std::vector<int>::const_iterator ite = v.end();

	for (it = v.begin(); it != ite; ++it)
	{
		std::cout << *it << " ";
	}
	std::cout << "\n";
	test = ::easyfind<std::vector<int> >(v, 2);
	if (test == v.end())
		std::cout << "Not found\n";
	else
		std::cout << "Found at i = " << test - v.begin() << std::endl;
	test = ::easyfind<std::vector<int> >(v, 7);
	if (test == v.end())
		std::cout << "Not found\n";
	else
		std::cout << "Found at i = " << test - v.begin() << std::endl;
	test = ::easyfind<std::vector<int> >(v, 21);
	if (test == v.end())
		std::cout << "Not found\n";
	else
		std::cout << "Found at i = " << test - v.begin() << std::endl;


	std::list< int > l;
	std::list<int>::const_iterator lit;
	std::list<int>::const_iterator lite = l.end();

	l.push_back(0);
	l.push_back(1);
	l.push_back(2);
	l.push_back(3);
	l.push_back(4);
	l.push_back(5);
	for (lit = l.begin(); lit != lite; ++lit)
	{
		std::cout << *lit << " ";
	}
	std::cout << "\n";
	if (::easyfind<std::list<int> >(l, 1) == l.end())
		std::cout << "Not found\n";
	else
		std::cout << "Found in list\n";
	if (::easyfind<std::list<int> >(l, 4) == l.end())
		std::cout << "Not found\n";
	else
		std::cout << "Found in list\n";
	if (::easyfind<std::list<int> >(l, 98) == l.end())
		std::cout << "Not found\n";
	else
		std::cout << "Found in list\n";
    return 0;

	
}