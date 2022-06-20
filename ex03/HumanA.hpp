/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 16:28:02 by lvarela           #+#    #+#             */
/*   Updated: 2022/06/20 17:22:05 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

/* HumanA class */

class HumanA {
	private:
		std::string		_name;
		Weapon			*_weapon;
	public:
		HumanA(std::string const, Weapon &);
		~HumanA(void);
		void			attack(void);
};

#endif