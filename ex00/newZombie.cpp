/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 15:15:33 by lvarela           #+#    #+#             */
/*   Updated: 2022/06/01 14:36:47 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/* Function that will create a Zombie, name it, and return it */

Zombie*	newZombie( std::string name ) {
	Zombie*	zombie = new Zombie(name);
	return (zombie);
}
