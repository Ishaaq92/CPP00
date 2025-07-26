/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishaaq <ishaaq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 11:44:25 by ishaaq            #+#    #+#             */
/*   Updated: 2025/07/26 13:16:13 by ishaaq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string get_input(const std::string& prompt);

Contact:: Contact(void)
{
	
}

Contact:: ~Contact(void)
{
	
}

void	Contact::read_contact(void)
{
	this->_first_name = get_input("Enter first name: ");
	this->_last_name = get_input("Enter last name: ");
	this->_nickname = get_input("Enter nickname: ");
	this->_phone_number = get_input("Enter phone number: ");
	this->_darkest_secret = get_input("Enter darkest secret: ");
}

std::string	Contact::get_first_name(void)
{
	return (this->_first_name);
}

std::string	Contact::get_last_name(void)
{
	return (this->_last_name);
}

std::string	Contact::get_nickname(void)
{
	return (this->_nickname);
}

std::string	Contact::get_phone_number(void)
{
	return (this->_phone_number);
}

std::string	Contact::get_darkest_secret(void)
{
	return (this->_darkest_secret);
}
