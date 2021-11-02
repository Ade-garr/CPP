/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-garr <ade-garr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 14:54:35 by ade-garr          #+#    #+#             */
/*   Updated: 2021/11/02 17:17:58 by ade-garr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

int main() {

	Array<int> arrayInt(5);
	std::cout << "Before changing value : ";
	printElem(arrayInt, 0);
	arrayInt[0] = 2;
	std::cout << "\nAfter changing value : ";
	printElem(arrayInt, 0);
	std::cout << "\nIndex beyond limits : ";	
	printElem(arrayInt, 6);
	
	Array<std::string> arrayString(5);
	std::cout << "\nBefore changing value : ";
	printElem(arrayString, 3);
	arrayString[3] = "Hello World !\n";
	std::cout << "\nAfter changing value : ";
	printElem(arrayString, 3);

	Array<std::string> arrayStringCopy(arrayString);
	std::cout << "\nWe create copy : ";
	std::cout << "\nIndex 3 of copy : ";
	printElem(arrayStringCopy, 3);
	arrayString[3] = "Bye-bye\n";
	std::cout << "Index 3 of the original after modification : ";
	printElem(arrayString, 3);
	std::cout << "Index 3 of copy --> no changes : ";
	printElem(arrayStringCopy, 3);

	Array<int> arrayEmpty;
	std::cout << "\nSize original: " << arrayInt.size();
	std::cout << "\nSize copy before : " << arrayEmpty.size();
	arrayEmpty = arrayInt;
	std::cout << "\nSize copy after : " << arrayEmpty.size();
	std::cout << "\n";
	return (0);
}
