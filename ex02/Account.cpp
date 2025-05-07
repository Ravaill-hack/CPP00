
#include "Account.hpp"
#include <iostream>
#include <iomanip>
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
	std::cout << " accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

Account::Account( int initial_deposit )
{
	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_totalAmount += _amount;
	_nbAccounts++;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

Account::~Account( void )
{
	_totalAmount -= _amount;
	_nbAccounts--;
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	_amount = _amount + deposit;
	_nbDeposits ++;
	_totalNbDeposits ++;
	_totalAmount += deposit;
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";p_amount:" << _amount - deposit << ";deposit:" << deposit << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:";
	_amount -= withdrawal;
	if (checkAmount() == 1)
	{
		_nbWithdrawals ++;
		_totalNbWithdrawals ++;
		std::cout << withdrawal << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
		_totalAmount -= withdrawal;
		return (true);
	}
	else
	{
		std::cout << "refused" << std::endl;
		_amount += withdrawal;
		return (false);
	}
}

int		Account::checkAmount( void ) const
{
	if (_amount < 0)
		return (0);
	return (1);
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}


void	Account::_displayTimestamp( void )
{
	std::time_t	now = std::time(nullptr);
	std::tm	*ltm = std::localtime(&now);

	std::cout << "["
			<< std::setfill('0') <<std::setw(4) << 1900 + ltm->tm_year
			<< std::setw(2) << 1 + ltm->tm_mon
			<< std::setw(2) << ltm->tm_mday << "_"
			<< std::setw(2) << ltm->tm_hour
			<< std::setw(2) << ltm->tm_min
			<< std::setw(2) << ltm->tm_sec
			<< "]";
}

Account::Account( void )
{
	_accountIndex = _nbAccounts;
	_amount = 0;
	_totalAmount += _amount;
	_nbAccounts++;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout << " index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}
