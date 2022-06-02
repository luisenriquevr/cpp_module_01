/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 17:28:57 by lvarela           #+#    #+#             */
/*   Updated: 2022/06/02 17:08:16 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <string>

int	main() {
	std::string	str = "HI THIS IS BRAIN";
	std::string *strPTR = &str;
	std::string	&strREF = str;
	
	std::cout << "This is str address:             " << &str << std::endl;
	std::cout << "This is str address from strPTR: " << *(&strPTR) << std::endl;
	std::cout << "This is str address from strREF: " << &strREF << std::endl << std::endl;

	std::cout << "This is str:                     " << str << std::endl;
	std::cout << "Printed str using the pointer:   " << *strPTR << std::endl;
	std::cout << "Printed str using the reference: " << strREF << std::endl;
	return 0;
}