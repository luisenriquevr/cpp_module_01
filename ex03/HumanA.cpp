/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 16:28:00 by lvarela           #+#    #+#             */
/*   Updated: 2022/06/20 17:33:46 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

/* Constructor and destructor */

HumanA::HumanA( std::string const name, Weapon &weapon ) : _name(name), _weapon(weapon) {}
HumanA::~HumanA() {}

/* Attack function */

void		HumanA::attack( void) {
	std::cout << _name << " attacks with his " << _weapon.getType() << std::endl;
}