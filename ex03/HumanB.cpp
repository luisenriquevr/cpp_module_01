/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 17:24:00 by lvarela           #+#    #+#             */
/*   Updated: 2022/06/20 17:27:03 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

/* Constructor and destructor */

HumanB::HumanB( std::string const name ) : _name(name) {}
HumanB::~HumanB() {}

/* Setter function */

void		HumanB::setWeapon( Weapon &weapon ) {
	_weapon = &weapon;
}

/* Attack function */

void		HumanB::attack( void) {
	std::cout << _name << " attacks with his " << _weapon->getType() << std::endl;
}