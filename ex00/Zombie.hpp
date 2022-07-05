/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 15:15:41 by lvarela           #+#    #+#             */
/*   Updated: 2022/07/05 16:15:52 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

/* Zombie class */

class	Zombie {
	private:
		std::string		_name;
	public:
		Zombie( void );
		Zombie( std::string );
		~Zombie( void );
		void			setName( std::string );
		std::string		getName( void ) const;
		void			_announce( void );
		
};

/* Functions out of the class */

Zombie	*newZombie( std::string name );
void	randomChump( std::string name );

#endif
