/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 15:15:35 by lvarela           #+#    #+#             */
/*   Updated: 2022/06/01 14:40:43 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/* Function that will create a Zombie, and make it announce itself */

void	randomChump( std::string name ) {
	Zombie*	zombie = new Zombie(name);
	zombie->_announce();
	delete zombie;
}
