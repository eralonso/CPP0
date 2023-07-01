/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eralonso <eralonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 15:58:14 by eralonso          #+#    #+#             */
/*   Updated: 2023/06/28 12:38:48 by eralonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<iostream>

int	main(int ac, char **av)
{
	int			i;
	std::string	str;

	if (ac < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (1);
	}
	i = 0;
	while (++i < ac)
	{
		str = av[i];
		for (size_t j = 0; j < str.length(); j++)
			str[j] = toupper(str[j]);
		std::cout << str;
	}
	std::cout << std::endl;
	return (0);
}