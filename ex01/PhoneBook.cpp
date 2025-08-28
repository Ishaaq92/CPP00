#include "PhoneBook.hpp"
#include <iomanip>
#include <string>
#include <limits>

std::string get_input(const std::string& prompt);

PhoneBook:: PhoneBook(void) : _index(0), _oldest(0)
{
	std::cout << "PhoneBook is constructed" << std:: endl;
}

PhoneBook:: ~PhoneBook(void)
{
	std::cout << "PhoneBook is destructed" << std:: endl;
}

void	PhoneBook::addContact(void)
{
	Contact	c;

	c.read_contact();
	if (this->_index == 8)
	{
		this->_phonebook[this->_oldest] = c;
		this->_oldest = (this->_oldest + 1) % 8;
		return ;
	}
	this->_phonebook[this->_index] = c;
	this->_index++;
}

void    PhoneBook::search(void)
{
	std::string	cmd;

	this->printContacts();
	cmd = "-1";
	while (atoi(cmd.c_str()) < 0 || atoi(cmd.c_str()) > 7)
		cmd = get_input("Enter an index");
	this->printContact(atoi(cmd.c_str()));
}

void	handle_length(std::string s)
{
	int			i;
	int			len;

	len = s.length();
	i = 10;
	if (len < 10)
	{
		std::cout << s;
		while (i-- - len)
			std::cout << " ";
		std::cout << "|" ;
		return ;
	}
	s = s.substr(0, 9);
	std::cout << s << ".|";
}

void	PhoneBook::printContact(int index)
{
	if (this->_phonebook[index].get_first_name().empty())
		return ;
	std::cout << this->_phonebook[index].get_first_name() << std::endl;
	std::cout << this->_phonebook[index].get_last_name() << std::endl;
	std::cout << this->_phonebook[index].get_nickname() << std::endl;
	std::cout << this->_phonebook[index].get_phone_number() << std::endl;
	std::cout << this->_phonebook[index].get_darkest_secret() << std::endl;
}

void	PhoneBook::printContacts(void)
{
	int	i;
	Contact	c;

	i = 0;
	std::cout << "INDEX     |" << "FIRST NAME|" << "LAST NAME |" << "NICKNAME  |" << std::endl;
	while (i < this->_index)
	{
		c = this->_phonebook[i];
		std::cout << i << "         |";
		handle_length(c.get_first_name());
		handle_length(c.get_last_name());
		handle_length(c.get_nickname());
		std::cout << std::endl;
		i++;
	}
}

