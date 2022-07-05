/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 18:03:11 by lvarela           #+#    #+#             */
/*   Updated: 2022/06/23 18:04:32 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

/* Constructor and destructor */

Karen::Karen( void ) {
	std::cout << "Karen is here!" << std::endl << std::endl;
}
Karen::~Karen( void ) {
	std::cout << std::endl << "Karen have gone..." << std::endl;
}

/* Level's functions */

void		Karen::debug( void ) {
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-";
	std::cout << "pickle-special-ketchup burger. I just love it!" << std::endl;
}

void		Karen::info( void ) {
	std::cout << "I cannot believe adding extra bacon cost more money.";
	std::cout << " You don’t put enough!";
	std::cout << " If you did I would not have to ask for it!" << std::endl;
}

void		Karen::warning( void ) {
	std::cout << "I think I deserve to have some extra bacon for free.";
	std::cout << " I’ve been coming here for years and";
	std::cout << " you just started working here last month." << std::endl;
}

void		Karen::error( void ) {
	std::cout << "This is unacceptable, ";
	std::cout << "I want to speak to the manager now." << std::endl;
}

/* Complain is a function that calls the correct level */

void		Karen::complain( std::string level ) {
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void 		(Karen::*function[4]) (void) = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};

	for (int i = 0; i < 4; i++) {
		if (levels[i] == level)
			(this->*function[i]) ();
	}
}
