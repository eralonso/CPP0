/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eralonso <eralonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 12:55:47 by eralonso          #+#    #+#             */
/*   Updated: 2023/06/30 18:53:56 by eralonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CONTACT_H__
# define __CONTACT_H__

# include	<iostream>

class	Contact
{
	private:
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_darkest_secret;
		std::string	_phone_number;

	public:
		// Default constructor
		Contact(void);
		// Expanded constructor
		Contact(std::string first_name, std::string last_name, \
				std::string nickname, std::string darkest_secret, \
				int	phone_number);
		// Destructor
		~Contact(void);
		// Getters
		std::string	getfirst_name(void);
		std::string	getlast_name(void);
		std::string	getnickname(void);
		std::string	getdarkest_secret(void);
		std::string	getphone_number(void);
		// Setters
		void		setfirst_name(std::string first_name);
		void		setlast_name(std::string last_name);
		void		setnickname(std::string nickname);
		void		setdarkest_secret(std::string darkest_secret);
		void		setphone_number(std::string phone_number);
};

#endif