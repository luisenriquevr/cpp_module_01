/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 15:15:38 by lvarela           #+#    #+#             */
/*   Updated: 2022/05/20 09:44:12 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void ) { return ; }
Zombie::~Zombie( void ) { return ; }

void		Zombie::setName( std::string name ) {
	this->_name = name;
}

std::string	Zombie::getName( void ) {
	return (this->_name);
}

// <name> BraiiiiiiinnnzzzZ...

void		Zombie::announce( void ){
	std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}