/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 16:45:15 by lvarela           #+#    #+#             */
/*   Updated: 2022/06/20 17:22:01 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

/* HumanB class */

class HumanB {
	private:
		std::string		_name;
		Weapon			*_weapon;
	public:
		HumanB(std::string const);
		~HumanB(void);
		void			setWeapon(Weapon &);
		void			attack(void);
};

#endif