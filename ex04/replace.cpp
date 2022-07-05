/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 16:52:31 by lvarela           #+#    #+#             */
/*   Updated: 2022/06/22 17:48:02 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

/* Function that replace all string s1 in line by string s2 */

std::string		replace(std::string line, std::string s1, std::string s2) {
	int		pos;

	do {
		pos = line.find(s1);
		if (pos != -1)
			line.replace(pos, s1.length(), s2);	
	}
	while (pos!= -1);
	return (line);
}
