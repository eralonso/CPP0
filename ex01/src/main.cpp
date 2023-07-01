/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eralonso <eralonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 15:26:59 by eralonso          #+#    #+#             */
/*   Updated: 2023/07/01 12:27:45 by eralonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"instructions.hpp"

static void	print_options( void )
{
	std::cout << "Allowed options:\n *   ADD\n *   SEARCH\n *   EXIT" << std::endl;	
}

int	main( void )
{
	PhoneBook	phonebook;
	std::string	input;
	bool		play;

	play = true;
	print_options();
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
			print_options();
		}
	}
	return (0);
}