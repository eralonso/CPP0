/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eralonso <eralonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 15:22:25 by eralonso          #+#    #+#             */
/*   Updated: 2023/06/30 17:32:25 by eralonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	_size = 0;
	_idx = 0;
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
	_contact[_idx] = contact;
	_idx = (_idx + 1) % 8;
	if (_size < 8)
		_size++;
}

Contact	PhoneBook::findContact(int n)
{
	return (_contact[n]);
}

int	PhoneBook::getsize(void)
{
	return (_size);
}
