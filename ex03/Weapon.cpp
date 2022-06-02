/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 17:20:49 by lvarela           #+#    #+#             */
/*   Updated: 2022/06/02 17:37:49 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

/* Constructor and destructor */

Weapon::Weapon( std::string type ) : _type(type) {}
Weapon::~Weapon( void ) {}

/* Setter functions */

void		Weapon::setType( std::string type ) {
	this->_type = type;
}

/* Getter functions */

std::string	Weapon::getType(void) const {
	return (this->_type);
}