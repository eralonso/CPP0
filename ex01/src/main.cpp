/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eralonso <eralonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 15:26:59 by eralonso          #+#    #+#             */
/*   Updated: 2023/06/30 14:51:37 by eralonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"instructions.hpp"

int	main(void)
{
	PhoneBook	phonebook;
	std::string	input;
	bool		play;

	play = true;
	while (play)
	{
		input = "a";
		if (!std::getline(std::cin, input) || input.compare("EXIT") == 0)
			play = 0;
		else if (input.compare("ADD") == 0)
			phonebook.addContact(create_contact());
		else if (input.compare("SEARCH") == 0)
			search_contact(phonebook);
		else
		{
			std::cout << "Invalid option" << std::endl;
			std::cout << "Allowed options:\n *   ADD\n *   SEARCH\n *   EXIT" << std::endl;
		}
	}
	return (0);
}