/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolq <lolq@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 07:18:43 by lolq              #+#    #+#             */
/*   Updated: 2025/06/06 09:26:04 by lolq             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

// Définition des variables statique
int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

// Initialisation du constructeur
Account::Account(int initial_deposit)
{
    _accountIndex = _nbAccounts;
    _amount = initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    
    _nbAccounts++;
    _totalAmount += initial_deposit;
    
    _displayTimestamp();
    std::cout << "index:" << _accountIndex 
            << ";amount:" << _amount
            << ";created" << std::endl;
} 

// Implémentation du destructeur
Account::~Account()
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex
            << ";amount:" << _amount
            << ";closed" << std::endl;
}

// Implémentation des méthodes 
void    Account::makeDeposit(int deposit)
{
    int prev_amount = _amount;
    _amount += deposit;
    _nbDeposits++;
    _totalAmount += deposit;
    _totalNbDeposits++;

    _displayTimestamp();
    std::cout << "index:" << _accountIndex
                << ";p_amount:" << prev_amount
                << ";deposit:" << deposit
                << ";amount:" << _amount
                << ";nb_deposits:" << _nbDeposits
                << std::endl;
}

bool    Account::makeWithdrawal(int withdrawal)
{
    int prev_amount = _amount;
    if (withdrawal > _amount)
    {
        _displayTimestamp();
        std::cout << "index:" << _accountIndex
                    << ";p_amount:" << prev_amount
                    << ";withdrawal:refused" << std::endl;
        return (false);
    }
    _amount -= withdrawal;
    _nbWithdrawals++;
    _totalAmount -= withdrawal;
    _totalNbWithdrawals++;

    _displayTimestamp();
    std::cout << "index:" << _accountIndex
                << ";p_amount:" << prev_amount
                << ";withdrawal:" << withdrawal
                << ";amount:" << _amount
                << ";nb_withdrawals:" << _nbWithdrawals
                << std::endl;
    return (true);
}

void    Account::displayStatus() const
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex
              << ";amount:" << _amount
              << ";deposits:" << _nbDeposits
              << ";withdrawals:" << _nbWithdrawals
              << std::endl;   
}

// Getter permettant de return le montant du compte
int     Account::checkAmount() const
{
    return _amount;
}

// Implémentation des méthodes statiques

int Account::getNbAccounts()
{
    return (_nbAccounts);
}

int Account::getTotalAmount()
{
    return (_totalAmount);
}

int Account::getNbDeposits()
{
    return (_totalNbDeposits);
}

int Account::getNbWithdrawals()
{
    return (_totalNbWithdrawals);
}

void    Account::displayAccountsInfos()
{
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts
            << ";total:" << _totalAmount
            << ";deposits:" << _totalNbDeposits
            << ";withdrawals:" << _totalNbWithdrawals
            << std::endl;  
}

void    Account::_displayTimestamp()
{
    time_t now = std::time(NULL);
    struct tm timenow = *std::localtime(&now);

    std::cout << "[" << timenow.tm_year + 1900 <<
    std::setfill('0') << std::setw(2) << timenow.tm_mon + 1 <<
    std::setfill('0') << std::setw(2) << timenow.tm_mday << "_" <<
    std::setfill('0') << std::setw(2) << timenow.tm_hour <<
    std::setfill('0') << std::setw(2) << timenow.tm_min <<
    std::setfill('0') << std::setw(2) << timenow.tm_sec << "] ";
}