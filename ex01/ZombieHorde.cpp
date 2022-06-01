/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 15:55:08 by lvarela           #+#    #+#             */
/*   Updated: 2022/06/01 16:33:55 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/* Function that takes an integer N and allocates N Zombie objects in a single 
allocation. It initialize each Zombie by giving the name plus 
name. Last, it should return the pointer to the first Zombie.*/

Zombie* zombieHorde( int N, std::string name ) {
	Zombie* horde = new Zombie[N];
	for (int i = 0; i < N; i++)
		horde[i].setName(name + ' ' + std::to_string(i + 1));
	return horde;
}