/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-garr <ade-garr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 17:54:25 by ade-garr          #+#    #+#             */
/*   Updated: 2021/08/03 18:02:10 by ade-garr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main() {

	Karen	test;

	test.complain("debug");
	test.complain("info");
	test.complain("warning");
	test.complain("error");
	test.complain("random");
	test.complain("errordebug");
	return (1);
}