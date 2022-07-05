/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 17:50:50 by lvarela           #+#    #+#             */
/*   Updated: 2022/06/25 16:40:17 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

/* Constructor and destructor */

Karen::Karen( void ) { }
Karen::~Karen( void ) { }

/* Level's functions */

void		Karen::debug( void ) {
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-";
	std::cout << "pickle-special-ketchup burger. I just love it!" << std::endl;
	std::cout << std::endl;
}

void		Karen::info( void ) {
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money.";
	std::cout << " You don’t put enough!";
	std::cout << " If you did I would not have to ask for it!" << std::endl;
	std::cout << std::endl;
}

void		Karen::warning( void ) {
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free.";
	std::cout << " I’ve been coming here for years and";
	std::cout << " you just started working here last month." << std::endl;
	std::cout << std::endl;
}

void		Karen::error( void ) {
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable, ";
	std::cout << "I want to speak to the manager now." << std::endl;
}

/* Complain is a function that calls the correct level */

void		Karen::complain( std::string level ) {
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void 		(Karen::*function[4]) (void) = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
	int			i = -1;
	
	while (++i) {
		if (levels[i] == level)
			break;
	}
	switch (i) {
		case 0: (this->*function[0]) ();
		case 1: (this->*function[1]) ();
		case 2: (this->*function[2]) ();
		case 3: (this->*function[3]) (); break;
		default: std::cout << "Probably insignificant problems" << std::endl;
	}
}
