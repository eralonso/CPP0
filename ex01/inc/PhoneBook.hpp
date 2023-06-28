/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eralonso <eralonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 12:50:03 by eralonso          #+#    #+#             */
/*   Updated: 2023/06/28 15:24:37 by eralonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include	"Contact.hpp"

class PhoneBook
{
	private:
		Contact	_contact[8];
		int		_size;
	public:
		PhoneBook(void);
		PhoneBook(Contact contact);
		~PhoneBook(void);
};

#endif