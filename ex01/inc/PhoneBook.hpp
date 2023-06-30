/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eralonso <eralonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 12:50:03 by eralonso          #+#    #+#             */
/*   Updated: 2023/06/30 18:54:43 by eralonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PHONEBOOK_H__
# define __PHONEBOOK_H__

#include	"Contact.hpp"

class PhoneBook
{
	private:
		Contact	_contact[8];
		int		_size;
		int		_idx;
	public:
		PhoneBook(void);
		PhoneBook(Contact contact);
		~PhoneBook(void);
		void	addContact(Contact contact);
		Contact	findContact(int n);
		int		getsize(void);
};

#endif