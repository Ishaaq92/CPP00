/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishaaq <ishaaq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 12:17:59 by ishaaq            #+#    #+#             */
/*   Updated: 2025/08/28 11:45:43 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <cstdlib>

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
		else if (cmd.compare("SEARCH") == 0)
		{
			pb.printContacts();
			cmd = "-1";
			while (atoi(cmd.c_str()) < 0 || atoi(cmd.c_str()) > 7)
				cmd = get_input("Enter an index\n");
			pb.printContact(atoi(cmd.c_str()));
		}
		else
			pb.printContacts();
		cmd = "";
	}
	return (0);
}

