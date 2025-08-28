/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishaaq <ishaaq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 12:17:59 by ishaaq            #+#    #+#             */
/*   Updated: 2025/08/28 12:10:03 by isahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

std::string get_input(const std::string& prompt)
{
	std::string input = "";
	while (input.empty())
	{
		std::cout << prompt << std::endl;
		std::getline(std::cin, input);
		if (input.empty())
			std::cout << "Field cannot be empty. Please try again." << std::endl;
	}
	return (input);
}

int	main(void)
{
	PhoneBook	pb;
	std::string cmd;

	cmd = "";
	while (42)
	{
		while (cmd.compare("ADD") != 0 && cmd.compare("SEARCH") != 0 && cmd.compare("EXIT") != 0)
			cmd = get_input("Enter one of ['ADD', 'SEARCH', 'EXIT']");
		if (cmd.compare("EXIT") == 0)
			break ;
		else if (cmd.compare("ADD") == 0)
			pb.addContact();
		else if (cmd.compare("SEARCH") == 0)
			pb.search();
		else
			pb.printContacts();
		cmd = "";
	}
	return (0);
}

