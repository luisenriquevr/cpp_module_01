/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 15:15:38 by lvarela           #+#    #+#             */
/*   Updated: 2022/05/20 15:23:27 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Constructor and destructor

Zombie::Zombie( void ) { return ; }
Zombie::~Zombie( void ) {
	std::cout << this->_name << " has been destroyed" << std::endl;
	return ;
}

// Set variables functions

void		Zombie::setName( std::string name ) {
	this->_name = name;
}

// Get variables functions

std::string	Zombie::getName( void ) {
	return (this->_name);
}

//	Other functions

// <name> BraiiiiiiinnnzzzZ...
void		Zombie::announce( void ){
	std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}