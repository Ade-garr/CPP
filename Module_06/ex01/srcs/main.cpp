/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-garr <ade-garr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 17:38:48 by ade-garr          #+#    #+#             */
/*   Updated: 2021/10/26 11:09:52 by ade-garr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialisation.hpp"
#include <cstdint>
#include <iostream>

uintptr_t serialize(Data *ptr) {
	
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data *deserialize(uintptr_t raw) {

	return (reinterpret_cast<Data *>(raw));
}

int main() {

	Data test;

	std::cout << "Adresse 'Data test': " << &test << std::endl;
	std::cout << "Adresse 'Data test' après serialize: " << serialize(&test) << std::endl;
	std::cout << "Adresse 'Data test' après serialize/deserialize: " << deserialize(serialize(&test)) << std::endl;
	return (0);
}