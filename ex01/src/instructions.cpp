/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eralonso <eralonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 14:47:26 by eralonso          #+#    #+#             */
/*   Updated: 2023/06/30 17:31:50 by eralonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"PhoneBook.hpp"
#include	"defines.hpp"
#include	<iomanip>

static bool	valid_strnum(std::string str)
{
	for (std::string::size_type i = 0; i < str.length(); i++)
		if (std::isdigit(str[i]) == 0)
			return (false);
	return (true);
}

static std::string	getfield(std::string field, int mode)
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

void	print_str_wide(std::string str)
{
	if (str.length() > 10)
		str.erase(9, str.length()).append(1, '.');
	std::cout << std::setw(10) << str;
}

void	print_contacts(PhoneBook phonebook)
{
	std::string	str;

	std::cout << "|     index|first name| last name|  nickname|" << std::endl;
	for (int i = 0; i < phonebook.getsize(); i++)
	{
		std::cout << "|";
		std::cout << std::setw(10) << i;
		std::cout << "|";
		print_str_wide(phonebook.findContact(i).getfirst_name());
		std::cout << "|";
		print_str_wide(phonebook.findContact(i).getlast_name());
		std::cout << "|";
		print_str_wide(phonebook.findContact(i).getnickname());
		std::cout << "|" << std::endl;
	}
}

void	search_contact(PhoneBook phonebook)
{
	std::string	str;
	short int	idx;
	bool		ok;

	if (phonebook.getsize() == 0)
	{
		std::cout << "   Phonebook is empty" << std::endl;
		return ;
	}
	print_contacts(phonebook);
	std::cout << "Select index: ";
	if (!std::getline(std::cin, str))
		exit(0);
	ok = valid_strnum(str);
	idx = 0;
	if (ok == true)
		idx = std::stoi(str);
	if (ok == false || idx < 0 || idx > phonebook.getsize() - 1)
	{
		std::cout << "   Invalid index" << std::endl;
		return ;
	}
	std::cout << "First name: " << phonebook.findContact(idx).getfirst_name() << std::endl;
	std::cout << "Last name: " << phonebook.findContact(idx).getlast_name() << std::endl;
	std::cout << "Nickname: " << phonebook.findContact(idx).getnickname() << std::endl;
	std::cout << "Phone number: " << phonebook.findContact(idx).getphone_number() << std::endl;
	std::cout << "Darkest secret: " << phonebook.findContact(idx).getdarkest_secret() << std::endl;
}
