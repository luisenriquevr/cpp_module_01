/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 15:15:41 by lvarela           #+#    #+#             */
/*   Updated: 2022/05/20 09:41:33 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class	Zombie {
	private:
		std::string		_name;
	public:
		Zombie(void);
		~Zombie(void);
		
		void		setName(std::string);
		std::string	getName(void);
		
		void		announce(void);
		
};

#endif