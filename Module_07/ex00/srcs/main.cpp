/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-garr <ade-garr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 23:34:59 by ade-garr          #+#    #+#             */
/*   Updated: 2021/09/04 23:51:32 by ade-garr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <string>
#include <iostream>

int main( void ) {

	// int a = 2;
	// int b = 3;

	// ::swap( a, b );
	// std::cout << "a = " << a << ", b = " << b << std::endl;
	// std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	// std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	// std::string c = "chaine1";
	// std::string d = "chaine2";
	// ::swap(c, d);
	// std::cout << "c = " << c << ", d = " << d << std::endl;
	// std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	// std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	// return (0);

	int 	intA = 21;
	int 	intB = 42;
	char	charA = 'f';
	char	charB = 'm';
	long	longA = 366654733366;
	long	longB = 134565786745;
	int		*ptrA = &intA;
	int		*ptrB = &intB;

	std::cout << "a = " << intA << " and b = " << intB << std::endl;
	std::cout << "min: " << min(intA, intB) << std::endl;
	std::cout << "max: " << max(intA, intB) << std::endl;
	
	std::cout << "\na = " << charA << " and b = " << charB << std::endl;
	std::cout << "min: " << min(charA, charB) << std::endl;
	std::cout << "max: " << max(charA, charB) << std::endl;
	
	std::cout << "\na = " << longA << " and b = " << longB << std::endl;
	std::cout << "min: " << min(longA, longB) << std::endl;
	std::cout << "max: " << max(longA, longB) << std::endl;
	
	std::cout << "\na = " << ptrA << " and b = " << ptrB << std::endl;
	std::cout << "min: " << min(&ptrA, &ptrB) << std::endl;
	std::cout << "max: "<< max(&ptrA, &ptrB) << std::endl;

	std::cout << "\n\nBEFORE SWAP : \n";
	std::cout << intA << " vs " << intB << std::endl;
	std::cout << charA << " vs " << charB << std::endl;
	std::cout << longA << " vs " << longB << std::endl;
	std::cout << ptrA << " vs " << ptrB << std::endl;

	swap(intA, intB);
	swap(charA, charB);
	swap(longA, longB);
	swap(ptrA, ptrB);

	std::cout << "\nAFTER SWAP : \n";
	std::cout << intA << " vs " << intB << std::endl;
	std::cout << charA << " vs " << charB << std::endl;
	std::cout << longA << " vs " << longB << std::endl;
	std::cout << ptrA << " vs " << ptrB << std::endl;
	return (0);
}
