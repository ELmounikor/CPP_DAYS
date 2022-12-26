/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mounikor <mounikor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 23:35:46 by mel-kora          #+#    #+#             */
/*   Updated: 2022/12/26 17:46:45 by mounikor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Account.hpp"
# include <iostream>
# include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit ){
	
	this->_accountIndex = 0 + _nbAccounts;
	this->_amount = initial_deposit;
	_nbAccounts++;
	_totalAmount += this->_amount;
	_displayTimestamp();
	std::cout << "index:"<< this->_accountIndex <<";amount:"<< this->_amount <<";created\n";
}

Account::~Account(void){
	
	_displayTimestamp();
	std::cout << "index:"<< this->_accountIndex <<";amount:"<< this->_amount <<";closed\n";
}

void    Account::_displayTimestamp( void ){
	
	time_t		ct = time(NULL);
	tm * 		curr_time;
	char		str[19];
	
	curr_time = localtime(&ct);
	strftime(str, 19, "[%Y%m%d_%H%M%S] ", curr_time);
	std::cout << str;
}

int	Account::getNbAccounts( void ){
	
	return(_nbAccounts);
}
int	Account::getTotalAmount( void ){
	
	return(_totalAmount);
}

int	Account::getNbDeposits( void ){
	
	return(_totalNbDeposits);
}

int	Account::getNbWithdrawals( void ){
	
	return(_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void ){
	
	_displayTimestamp();
	std::cout << "accounts:"<< getNbAccounts() <<";total:"<< getTotalAmount() <<";deposits:"<< getNbDeposits() <<";withdrawals:"<< getNbWithdrawals() <<std::endl;
}

void	Account::makeDeposit( int deposit ){
	
	this->_amount += deposit;
	this->_nbDeposits++;
	_totalNbDeposits++;
	_totalAmount += deposit;
}

bool	Account::makeWithdrawal( int withdrawal ){
	if (this->_amount >= withdrawal)
	{
		this->_amount -= withdrawal;
		this->_nbWithdrawals++;
		_totalNbWithdrawals++;
		_totalAmount -= withdrawal;
		return (1);
	}
	_displayTimestamp();
	std::cout << "index:"<< this->_accountIndex <<";p_amount:"<< this->_amount <<";withdrawal:refused"<<std::endl;
	return (0);
}

int		Account::checkAmount( void ) const{
	
	return (this->_amount);
}

void	Account::displayStatus( void ) const{
	
	_displayTimestamp();
	std::cout << "index:"<< this->_accountIndex <<";amount:"<< this->_amount <<";deposits:"<< this->_nbDeposits <<";withdrawals:"<< this->_nbWithdrawals <<std::endl;;
}
