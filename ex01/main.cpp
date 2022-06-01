/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 16:00:56 by lvarela           #+#    #+#             */
/*   Updated: 2022/06/01 16:52:50 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main() {
	Zombie*		horde;
	std::string	N;
	std::string name;
	
	while (name.empty()) {
		std::cout << "Type the name of your zombies and press enter: ";
		getline(std::cin, name, '\n');
		if (std::cin.fail())
				exit(1);		
	}
	
	while (N.empty()) {
		std::cout << "Type the number of zombies you want to create: ";
		getline(std::cin, N, '\n');
		if (std::cin.fail())
				exit(1);
	}

	horde = zombieHorde(stoi(N), name);
	for (int i = 0; i < stoi(N); i++)
		horde[i]._announce();
	
	delete [] horde;
	return 0;
}