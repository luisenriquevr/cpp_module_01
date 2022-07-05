/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 15:15:25 by lvarela           #+#    #+#             */
/*   Updated: 2022/06/01 14:37:39 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main() {
	Zombie	zombie;
	Zombie	*zombie2;
	
	zombie.setName("Marianito");
	zombie2 = newZombie("Tontorron");	
	zombie2->_announce();
	zombie._announce();
	randomChump("Carapan");
	delete zombie2;
	return 0;
}
