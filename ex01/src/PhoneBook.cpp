/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eralonso <eralonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 15:22:25 by eralonso          #+#    #+#             */
/*   Updated: 2023/06/29 13:11:00 by eralonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	_size = 0;
}

PhoneBook::PhoneBook(Contact contact)
{
	_size = 0;
	_contact[0] = contact;
}

PhoneBook::~PhoneBook(void)
{
}

void	PhoneBook::addContact(Contact contact)
{
	_contact[_size] = contact;
	_size = (_size + 1) % 8;
}

Contact	PhoneBook::findContact(int n)
{
	return (_contact[n]);
}

int	PhoneBook::getsize(void)
{
	return (_size);
}
