#include "Account.hpp" 
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) : _accountIndex(_nbAccounts), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0) 
{
    _nbAccounts++;
    _totalAmount += initial_deposit;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

Account::~Account() 
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
    _nbAccounts--;
    _totalAmount -= _amount;
}

void Account::makeDeposit(int deposit) 
{
    _amount += deposit;
    _nbDeposits++;
    _totalAmount += deposit;
    _totalNbDeposits++;

    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";p_amount:" << (_amount - deposit) << ";deposit:" << deposit
              << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal) 
{
    if (_amount >= withdrawal) 
    {
        _amount -= withdrawal;
        _nbWithdrawals++;
        _totalAmount -= withdrawal;
        _totalNbWithdrawals++;

        _displayTimestamp();
        std::cout << "index:" << _accountIndex << ";p_amount:" << (_amount + withdrawal)
                  << ";withdrawal:" << withdrawal << ";amount:" << _amount
                  << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
        return true;
    } else 
    {
        _displayTimestamp();
        std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:refused" << std::endl;
        return false;
    }
}

void Account::displayStatus() const 
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits
              << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void Account::displayAccountsInfos() 
{
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount
              << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void Account::_displayTimestamp() 
{
    time_t now = time(0);
    struct tm tm_info;
    char buffer[20];
    localtime_r(&now, &tm_info);
    strftime(buffer, sizeof(buffer), "%Y%m%d_%H%M%S", &tm_info);
    std::cout << "[" << buffer << "] ";
}




