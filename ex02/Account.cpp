
#include "Account.hpp" // Include il file degli header se necessario
#include <iostream>
int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) : _accountIndex(_nbAccounts), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0) {
    _nbAccounts++;
    _totalAmount += initial_deposit;
    // Aggiungi un log per la creazione dell'account
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

Account::~Account() {
    // Aggiungi un log per la chiusura dell'account
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
    _nbAccounts--;
    _totalAmount -= _amount;
}

void Account::makeDeposit(int deposit) {
    // Aggiorna il saldo e il conteggio dei depositi
    _amount += deposit;
    _nbDeposits++;
    _totalAmount += deposit;
    _totalNbDeposits++;

    // Aggiungi un log per il deposito
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";p_amount:" << (_amount - deposit) << ";deposit:" << deposit
              << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal) {
    if (_amount >= withdrawal) {
        // Se il saldo è sufficiente, aggiorna il saldo e il conteggio dei prelievi
        _amount -= withdrawal;
        _nbWithdrawals++;
        _totalAmount -= withdrawal;
        _totalNbWithdrawals++;

        // Aggiungi un log per il prelievo accettato
        _displayTimestamp();
        std::cout << "index:" << _accountIndex << ";p_amount:" << (_amount + withdrawal)
                  << ";withdrawal:" << withdrawal << ";amount:" << _amount
                  << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
        return true;
    } else {
        // Aggiungi un log per il prelievo rifiutato
        _displayTimestamp();
        std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:refused" << std::endl;
        return false;
    }
}

void Account::displayStatus() const {
    // Aggiungi un log per visualizzare lo stato dell'account
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits
              << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void Account::displayAccountsInfos() {
    // Aggiungi un log per visualizzare le informazioni sugli account
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount
              << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void Account::_displayTimestamp() {
    // Questa funzione visualizza un timestamp basato sulla data e l'ora attuali
    time_t now = time(0);
    struct tm tm_info;
    char buffer[20];
    localtime_r(&now, &tm_info);
    strftime(buffer, sizeof(buffer), "%Y%m%d_%H%M%S", &tm_info);
    std::cout << "[" << buffer << "] ";
}




