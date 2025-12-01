/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slamhaou <slamhaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 10:47:12 by slamhaou          #+#    #+#             */
/*   Updated: 2025/11/29 12:21:46 by slamhaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

 int	Account::_nbAccounts = 0;
 int	Account::_totalAmount = 0;
 int	Account::_totalNbDeposits = 0;
 int	Account::_totalNbWithdrawals = 0; 
 
int Account::getNbAccounts( void )
{
	return _nbAccounts;
}
int	Account::getTotalAmount( void )
{
	return _totalAmount;
}
int	Account::getNbDeposits( void )
{
	return _totalNbDeposits;
}
int	Account::getNbWithdrawals( void )
{
	return _totalNbWithdrawals;
}

void GetExactTime(void)
{
	time_t	tim;
    char buffer[19];

	std::time(&tim);
	tm *tt = std::localtime(&tim);
    strftime(buffer, sizeof(buffer), "%Y%m%d_%H%M%S", tt);
    std::cout << "[" << buffer << "]" ;
}

void	Account::displayAccountsInfos( void )
{
	GetExactTime();
	std::cout<<" accounts:" << _nbAccounts << ";total:"<<_totalAmount;
	std::cout<<";deposits:"<<_totalNbDeposits <<";withdrawals:"<< _totalNbWithdrawals;
	std::cout<<std::endl;
}

void Account::displayStatus( void ) const
{
	GetExactTime();
	std::cout<<" index:"<<_accountIndex<<";amount:"<<_amount;
	std::cout<<";deposits:"<<_nbDeposits<<";withdrawals:"<<_nbWithdrawals;
	std::cout<<std::endl;

}
void Account::makeDeposit( int deposit )
{
	_nbDeposits++;
	_totalNbDeposits++;
	_totalAmount += deposit;
	GetExactTime();
	std::cout<<" index:"<<_accountIndex<<";p_amount:"<<_amount;
	_amount += deposit;
	std::cout<<";deposit:"<<deposit<<";amount:"<< _amount<< ";nb_deposits:"<<_nbDeposits<<std::endl;
}
int	 Account::checkAmount( void ) const
{
	if (_amount == 0)
		return (1);
	return (0);
}
bool Account::makeWithdrawal( int withdrawal )
{
	GetExactTime();
	if (_amount < withdrawal)
	{
		std::cout<<" index:"<<_accountIndex<<";p_amount:"<<_amount<<";withdrawal:"<<"refused"<<std::endl;
		return false;
	}
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	std::cout<<" index:"<<_accountIndex<<";p_amount:"<<_amount<<";withdrawal:"<<withdrawal;
	_amount -= withdrawal;
	_totalAmount -=withdrawal;
	std::cout<<";amount:"<< _amount<<";nb_withdrawals:"<<_nbWithdrawals<<std::endl;
	return true;
}

Account::~Account( void )
{
	GetExactTime();
	std::cout<< " index:"<<_accountIndex<<";amount:"<<_amount<<";closed"<<std::endl;
}

Account::Account(int initial_deposit)
{
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_accountIndex = _nbAccounts;
	_totalAmount += _amount;
	GetExactTime();
	std::cout<< " index:"<< _nbAccounts++ <<";amount:" << _amount<<";created"<< std::endl;
}