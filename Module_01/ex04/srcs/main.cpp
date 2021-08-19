/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adegarr <adegarr@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 00:02:03 by ade-garr          #+#    #+#             */
/*   Updated: 2021/08/16 23:14:38 by adegarr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <string>
#include <iostream>
#include <cstring>

int	main(int argc, char **argv) {

	std::ifstream	input_file;
	std::string		output;
	std::ofstream	output_file;
	std::string		output_filename = argv[1];
	size_t			pos = 0;

	if (argc != 4) {
		std::cout << "Bad arguments !" << std::endl;
		return (1);
	}
	else if (strlen(argv[1]) == 0 || strlen(argv[2]) == 0 || strlen(argv[3]) == 0) {
		std::cout << "Bad arguments !" << std::endl;
		return (1);
	}
	input_file.open(argv[1]);
	if (input_file.is_open() == 0) {
		std::cout << "Can't open input file !" << std::endl;
		return (1);
	}
	std::getline(input_file, output, '\0');
	while (output.find(argv[2], pos) != std::string::npos) {
			pos = output.find(argv[2], pos);
			output.erase(pos, strlen(argv[2]));
			output.insert(pos, argv[3]);
			pos += strlen(argv[3]);
	}
	for (std::string::iterator it=output_filename.begin(); it != output_filename.end(); it++) {
		*it = toupper(*it);
	}
	output_filename += ".replace";
	output_file.open(output_filename);
	if (output_file.is_open() == 0) {
		std::cout << "Can't open output file !" << std::endl;
		return (1);
	}
	output_file << output;
	input_file.close();
	output_file.close();
	return (0);
}