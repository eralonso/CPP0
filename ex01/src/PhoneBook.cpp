/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eralonso <eralonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 15:22:25 by eralonso          #+#    #+#             */
/*   Updated: 2023/06/28 15:26:34 by eralonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	_size = 0;
}

PhoneBook::PhoneBook(Contact contact)
{
	(void) contact;
	_size++;
}

PhoneBook::~PhoneBook(void)
{
}
