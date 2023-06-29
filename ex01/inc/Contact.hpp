/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eralonso <eralonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 12:55:47 by eralonso          #+#    #+#             */
/*   Updated: 2023/06/29 13:16:18 by eralonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include	<iostream>

class	Contact
{
	private:
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_darkest_secret;
		int			_phone_number;

	public:
		Contact(void);
		Contact(std::string first_name, std::string last_name, \
				std::string nickname, std::string darkest_secret, \
				int	phone_number);
		~Contact(void);
		std::string	getfirst_name(void);
		std::string	getlast_name(void);
		std::string	getnickname(void);
		std::string	getdarkest_secret(void);
		int			getphone_number(void);
};

#endif