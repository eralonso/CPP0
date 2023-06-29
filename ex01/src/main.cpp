/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eralonso <eralonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 15:26:59 by eralonso          #+#    #+#             */
/*   Updated: 2023/06/29 13:45:34 by eralonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"PhoneBook.hpp"

std::string	read_input(void)
{
	std::string	str;

	std::getline(std::cin, str);
	return (str);
}

int	main(void)
{
	PhoneBook	phonebook;
	std::string	input;
	bool		play;

	play = true;
	while (play)
	{
		input = read_input();
	}
	return (0);
}