/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 17:17:12 by lvarela           #+#    #+#             */
/*   Updated: 2022/06/02 17:22:09 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

/* Weapon class */

class Weapon {
	private:
		std::string		_type;
	public:
		Weapon(std::string);
		~Weapon(void);
		void			setType(std::string);
		std::string		getType(void) const;
};

#endif