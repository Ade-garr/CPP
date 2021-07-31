/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-garr <ade-garr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/31 15:35:21 by ade-garr          #+#    #+#             */
/*   Updated: 2021/08/01 00:37:56 by ade-garr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

int	Account::_nbAccounts = 0;

int	Account::_totalAmount = 0;

int	Account::_totalNbDeposits = 0;

int	Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts(void) {

	return (Account::_nbAccounts);
}

int	Account::getTotalAmount(void) {

	return (Account::_totalAmount);
}

int	Account::getNbDeposits(void) {

	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals(void) {

	return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void) {

	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts;
	std::cout << ";total:" << Account::_totalAmount;
	std::cout << ";deposits:" << Account::_totalNbDeposits;
	std::cout << ";withdrawals:" << Account::_totalNbWithdrawals << std::endl;
	return ;
}

Account::Account(int initial_deposit) : _accountIndex(Account::_nbAccounts), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0) {

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << initial_deposit;
	std::cout << ";created" << std::endl;
	Account::_nbAccounts++;
	Account::_totalAmount = Account::_totalAmount + this->_amount;
	return ;
}

Account::~Account(void) {

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
	Account::_nbAccounts--;
	Account::_totalAmount = Account::_totalAmount - this->_amount;
	Account::_totalNbDeposits = Account::_totalNbDeposits - this->_nbDeposits;
	Account::_totalNbWithdrawals = Account::_totalNbWithdrawals - this->_nbDeposits;
	return ;
}

void	Account::makeDeposit(int deposit) {

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";p_amount:" << this->_amount;
	std::cout << ";deposit:" << deposit;
	this->_amount = this->_amount + deposit;
	Account::_totalAmount = Account::_totalAmount + deposit;
	this->_nbDeposits = this->_nbDeposits + 1;
	Account::_totalNbDeposits = Account::_totalNbDeposits + 1;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";nb_deposits:" << this->_nbDeposits << std::endl;
	return ;
}

bool	Account::makeWithdrawal(int withdrawal) {

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";p_amount:" << this->_amount;
	if (this->_amount < withdrawal)
	{
		std::cout << ";withdrawal:refused" << std::endl;
		return (1);
	}
	else
	{
		std::cout << ";withdrawal:" << withdrawal;
		this->_amount = this->_amount - withdrawal;
		Account::_totalAmount = Account::_totalAmount - withdrawal;
		this->_nbWithdrawals = this->_nbWithdrawals + 1;
		Account::_totalNbWithdrawals = Account::_totalNbWithdrawals + 1;
		std::cout << ";amount:" << this->_amount;
		std::cout << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		return (0);
	}
}

int	Account::checkAmount(void) const {

	return (this->_amount);
}

void	Account::displayStatus(void) const {

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";deposits:" << this->_nbDeposits;
	std::cout << ";withdrawals:" << this->_nbWithdrawals << std::endl;
	return ;
}

void	Account::_displayTimestamp(void) {

	std::cout << "[19920104_091532] ";
	return ;
}