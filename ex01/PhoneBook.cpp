#include "PhoneBook.hpp"
#include <iomanip>
#include <string>
#include <limits>

PhoneBook:: PhoneBook(void) : _index(0), _oldest(0)
{
	std::cout << "PhoneBook is constructed" << std:: endl;
}

PhoneBook:: ~PhoneBook(void)
{
	std::cout << "PhoneBook is destructed" << std:: endl;
}

void	PhoneBook::addContact(Contact c)
{
	if (this->_index == 8)
	{
		this->_phonebook[this->_oldest] = c;
		this->_oldest = (this->_oldest + 1) % 8;
		return ;
	}
	this->_phonebook[this->_index] = c;
	this->_index++;
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
