/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eralonso <eralonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 15:26:59 by eralonso          #+#    #+#             */
/*   Updated: 2023/06/29 19:26:01 by eralonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"PhoneBook.hpp"
#include	"defines.hpp"

bool	valid_strnum(std::string str)
{
	for (std::string::size_type i = 0; i < str.size(); i++)
		if (std::isdigit(str[i]) == 0)
			return (false);
	return (true);
}

std::string	getfield(std::string field, int mode)
{
	std::string	input;
	bool		valid;

	valid = false;
	while (!valid)
	{
		std::cout << "  " << field << ": ";
		if (!std::getline(std::cin, input))
			exit(0);
		if (input.empty())
			std::cout << "   The field cannot be empty" << std::endl;
		else if (mode == INT && valid_strnum(input) == false)
			std::cout << "   Invalid input, the field '" << field \
			<< "' only accepts digits" << std::endl;
		else
			valid = true;
	}
	return (input);
}

Contact	create_contact(void)
{
	std::string	str;
	Contact		new_contact;

	str = getfield("first name", STR);
	new_contact.setfirst_name(str);
	str = getfield("last name", STR);
	new_contact.setlast_name(str);
	str = getfield("nickname", STR);
	new_contact.setnickname(str);
	str = getfield("darkest secret", STR);
	new_contact.setdarkest_secret(str);
	str = getfield("phone number", INT);
	new_contact.setphone_number(str);
	return (new_contact);
}

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
			std::cout << "SEARCH" << std::endl;
		else
		{
			std::cout << "Invalid option" << std::endl;
			std::cout << "Allowed options:\n *   ADD\n *   SEARCH\n *   EXIT" << std::endl;
		}
	}
	return (0);
}