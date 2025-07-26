/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ishaaq <ishaaq@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 15:14:19 by ishaaq            #+#    #+#             */
/*   Updated: 2025/07/26 22:03:33 by ishaaq           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp( void )
{
    std::time_t result;
    char mbstr[100];

	result = std::time(NULL);
    if (std::strftime(mbstr, sizeof(mbstr), "[%Y%m%d_%H%M%S] ", std::localtime(&result)))
        std::cout << mbstr;
}

Account::Account(void)
{
	Account(0);
}

Account::Account(int initial_deposit)
{
	_amount = initial_deposit;
	_accountIndex = _nbAccounts++;
	_totalAmount += _amount;
	_nbDeposits = 0;
	_nbWithdrawals = 0;

	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "created" << std::endl;
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "closed" << std::endl;
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals;
	std::cout << std::endl;
}

int		Account::checkAmount( void ) const
{
	return (this->_amount);
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	std::cout << "index:"<< this->_accountIndex << ";";
	std::cout << "p_amount:"<< this->_accountIndex << ";";
	std::cout << "withdrawal:";
	if (this->_amount < withdrawal)
		return (std::cout << "refused" << std::endl, false);
	this->_amount -= withdrawal;
	std::cout << withdrawal << ";";
	std::cout << "amount:"<< this->_amount << ";";
	std::cout << "nb_withdrawals:" << ++this->_nbWithdrawals;
	std::cout << std::endl;
	return (true);
}

void	Account::makeDeposit( int deposit )
{
	_displayTimestamp();
	std::cout << "index:"<< this->_accountIndex << ";";
	std::cout << "p_amount:"<< this->_amount<< ";";
	std::cout << "deposit:"<< deposit << ";";

	this->_amount += deposit;
	this->_nbDeposits++;
	
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "nb_deposits:" << this->_nbDeposits << ";";
	std::cout << std::endl;
}


int Account::getNbAccounts( void )
{
	return (_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";";
	std::cout << "total:" << getTotalAmount() << ";";
	std::cout << "deposits:" << getNbDeposits() << ";";
	std::cout << "withdrawals:" << getNbWithdrawals();
	std::cout << std::endl;
}
