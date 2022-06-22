/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 17:46:05 by lvarela           #+#    #+#             */
/*   Updated: 2022/06/22 17:45:29 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

std::string		replace(std::string text, std::string s1, std::string s2);

int	main(int argc, char *argv[]) {
	if (argc != 4) {
		std::cout << "Error: Incorrect number of arguments." << std::endl;
		exit(1);
	}

	std::string		filename;
	std::ifstream	infile;
	std::ofstream	outfile;
	std::string		old_line;
	std::string		new_line;

	filename = argv[1];
	infile.open(filename, std::ios::in);
	if (infile.fail()) {
		std::cout << "Error: could not open the file." << std::endl;
		exit(1);
	}
	filename.append(".replace");
	outfile.open(filename, std::ios::out);
	while (!infile.eof()) {
		std::getline(infile, old_line);
		new_line = replace(old_line, argv[2], argv[3]);
		outfile << new_line << std::endl;
	}
	infile.close();
	outfile.close();
	return (0);
}