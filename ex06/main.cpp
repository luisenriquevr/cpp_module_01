/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 17:51:00 by lvarela           #+#    #+#             */
/*   Updated: 2022/06/23 18:03:13 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int argc, char *argv[]) {
	Karen karenita;

	if (argc != 2)
		std::cerr << "Options levels: INFO, WARNING, DEBUG, ERROR" << std::endl;
	else {
		karenita.complain(argv[1]);
	}
	return 0;
}
