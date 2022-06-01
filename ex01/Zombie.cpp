/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 15:15:38 by lvarela           #+#    #+#             */
/*   Updated: 2022/06/01 16:32:34 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/* Constructor and destructor */

Zombie::Zombie( void ) { }

Zombie::Zombie( std::string name ) {
	this->_name = name;
}

Zombie::~Zombie( void ) {
	std::cout << this->_name << " has been destroyed" << std::endl;
}

/* Setter functions */

void		Zombie::setName( std::string name ) {
	this->_name = name;
}

/* Getter functions */

std::string	Zombie::getName( void ) const {
	return (this->_name);
}

/*	Other functions */

// <name> BraiiiiiiinnnzzzZ...
void		Zombie::_announce( void ) {
	std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}