/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-garr <ade-garr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 14:54:35 by ade-garr          #+#    #+#             */
/*   Updated: 2021/09/05 17:05:03 by ade-garr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

int main() {

	Array<int> arrayInt(5);
	std::cout << "Avant de changer la valeur : ";
	printElem(arrayInt, 0);
	arrayInt[0] = 2;
	std::cout << "\nApres avoir changé la valeur : ";
	printElem(arrayInt, 0);
	std::cout << "\nEn essayant d'acceder a un index hors-limites : ";	
	printElem(arrayInt, 6);
	
	Array<std::string> arrayString(5);
	std::cout << "\nAvant de changer la valeur : ";
	printElem(arrayString, 3);
	arrayString[3] = "Coucou les templates c'est trop genial\n";
	std::cout << "\nApres avoir changé la valeur : ";
	printElem(arrayString, 3);

	Array<std::string> arrayStringCopy(arrayString);
	std::cout << "\nOn cree une copie : ";
	std::cout << "\nIndex 3 de la copie : ";
	printElem(arrayStringCopy, 3);
	arrayString[3] = "Coucou\n";
	std::cout << "Index 3 de l'originale apres modification : ";
	printElem(arrayString, 3);
	std::cout << "Index 3 de la copie --> n'a pas change : ";
	printElem(arrayStringCopy, 3);

	Array<int> arrayEmpty;
	std::cout << "\nSize de l'originale: " << arrayInt.size();
	std::cout << "\nSize de la copie avant : " << arrayEmpty.size();
	arrayEmpty = arrayInt;
	std::cout << "\nSize de la copie apres : " << arrayEmpty.size();
	std::cout << "\n";
	return (0);
}
