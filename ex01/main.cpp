/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishaaq <ishaaq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 12:17:59 by ishaaq            #+#    #+#             */
/*   Updated: 2025/07/26 14:04:47 by ishaaq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <cstdlib>

// Three actions:
//		ADD
//		SEARCH
//		EXIT

std::string get_input(const std::string& prompt)
{
	std::string input = "";
	while (input.empty())
	{
		std::cout << prompt;
		std::getline(std::cin, input);
		if (input.empty())
			std::cout << "Field cannot be empty. Please try again." << std::endl;
	}
	return (input);
}

int	main(void)
{
	PhoneBook	pb;
	Contact		c1;
	std::string cmd;

	cmd = "";
	while (42)
	{
		while (cmd.compare("ADD") != 0 && cmd.compare("SEARCH") != 0 && cmd.compare("EXIT") != 0)
			cmd = get_input("Enter one of ['ADD', 'SEARCH', 'EXIT']\n");
		if (cmd.compare("EXIT") == 0)
			break ;
		else if (cmd.compare("ADD") == 0)
		{
			c1.read_contact();
			pb.addContact(c1);
			pb.printContacts();
		}
		else
		{
			pb.printContacts();
		}
		cmd = "";
	}
	return (0);
}
