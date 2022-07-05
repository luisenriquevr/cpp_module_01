/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 18:03:07 by lvarela           #+#    #+#             */
/*   Updated: 2022/07/05 16:18:09 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP
# include <iostream>
# include <string>

class Karen {
	private:
		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );
	public:
		Karen();
		~Karen();
		void	complain( std::string level );
};

#endif
