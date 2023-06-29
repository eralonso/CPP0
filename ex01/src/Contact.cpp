/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eralonso <eralonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 15:12:55 by eralonso          #+#    #+#             */
/*   Updated: 2023/06/29 18:58:18 by eralonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"Contact.hpp"

Contact::Contact()
{
}

Contact::Contact(std::string first_name, std::string last_name, \
				std::string nickname, std::string darkest_secret, \
				int	phone_number)
{
	_first_name = first_name;
	_last_name = last_name;
	_nickname = nickname;
	_darkest_secret = darkest_secret;
	_phone_number = phone_number;
}

Contact::~Contact(void)
{
}

std::string	Contact::getfirst_name(void)
{
	return (_first_name);
}

std::string	Contact::getlast_name(void)
{
	return (_last_name);
}

std::string	Contact::getnickname(void)
{
	return (_nickname);
}

std::string	Contact::getdarkest_secret(void)
{
	return (_darkest_secret);
}

std::string	Contact::getphone_number(void)
{
	return (_phone_number);
}

void	Contact::setfirst_name(std::string first_name)
{
	_first_name = first_name;
}

void	Contact::setlast_name(std::string last_name)
{
	_last_name = last_name;
}

void	Contact::setnickname(std::string nickname)
{
	_nickname = nickname;
}

void	Contact::setdarkest_secret(std::string darkest_secret)
{
	_darkest_secret = darkest_secret;
}

void	Contact::setphone_number(std::string phone_number)
{
	_phone_number = phone_number;
}

