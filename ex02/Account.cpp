
#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void )
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
	std::cout << " accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbDeposits << std::endl;
}

Account::Account( int initial_deposit )
{

}

Account::~Account( void )
{

}

void	Account::makeDeposit( int deposit )
{
	_amount = _amount + deposit;
	_nbDeposits ++;
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";p_amount:" << _amount - deposit << ";deposit:" << deposit << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:";
	if (_amount - withdrawal >= 0)
	{
		_amount = _amount - withdrawal;
		_nbWithdrawals ++;
		std::cout << withdrawal << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
	}
	else
	{
		std::cout << "refused" << std::endl;
	}
}

int		Account::checkAmount( void ) const
{

}

void	Account::displayStatus( void ) const
{
	std::cout << " index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:";
}
