/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 18:01:31 by lvarela           #+#    #+#             */
/*   Updated: 2022/06/23 17:39:35 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int argc, char *argv[]) {
	Karen karenita;

	if (argc != 2)
		std::cout << "Options levels: INFO, WARNING, DEBUG, ERROR" << std::endl;
	else {
		karenita.complain(argv[1]);
	}
	return 0;
}