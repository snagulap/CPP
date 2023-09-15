/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 10:41:40 by snagulap          #+#    #+#             */
/*   Updated: 2023/09/15 18:40:24 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Account.hpp"
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;


Account::Account(int initial_deposit)
{
    _nbAccounts++;
    _accountIndex = _nbAccounts - 1;
    _amount = initial_deposit;
    _totalAmount = _amount;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    
    std::cout<< "index:" << _accountIndex << ";" << "amount" << _amount<< ";"
            << "Created" << std::endl;
    
}

Account::~Account(void)
{
    _nbAccounts--;
    std::cout<< "index:" <<_accountIndex << ";" << "amount" << _amount << ";"
            <<"closed" << std::endl;
}

int Account::getNbAccounts(void){
    return _nbAccounts;    
}

int Account::getTotalAmount(void){
    return _totalAmount;
}

int Account::getNbDeposits(void){
    return _totalNbDeposits;
}

int Account::getNbWithdrawals(void){
    return _totalNbWithdrawals;
}

void Account::displayAccountsInfos(void){
    std::cout<< "Accounts:" <<getNbAccounts();
    std::cout<< "Total:" << getTotalAmount();
    std::cout<< "Deposits:" <<getNbDeposits();
    std::cout<< "Withdrawal:" <<getNbWithdrawals()<<std::endl;
}
void Account::makeDeposit(int deposit){
    _amount += deposit;
    _nbDeposits++;
    
    Account::_totalAmount += deposit;
    Account::_totalNbDeposits++;
    
    std::cout<<"index:" << _accountIndex<<";" <<"p_amount:" << _amount - deposit <<"amount:" << _amount <<";"
            <<"deposit:" << deposit << ";" << "nbdeposit:" << _nbDeposits<< std::endl;
}

bool Account::makeWithdrawal(int withdrawal){
    if(withdrawal <= _amount){
        _amount -= withdrawal;
    _nbWithdrawals++;
    
    Account::_totalAmount -= withdrawal;
    Account::_totalNbWithdrawals++;
    
    std::cout<<"index:" << _accountIndex<<";"<<"p_amount:" << _amount + withdrawal <<"amount:" << _amount <<";"
            <<"withdrawal:" << withdrawal << ";" << "nbwithdrawal:" << _nbWithdrawals<< std::endl;
    return true;}
    else{
        std::cout<<"index:" << _accountIndex<<";" <<"amount:" << _amount <<";"
            <<"withdrawal:" << "denied" << ";" << std::endl;
        return false;
    }
}

int Account::checkAmount(void) const {
    return _amount;
    
}

void Account::displayStatus(void) const {
    std::cout<< "index:" << _accountIndex;
    std::cout<<"amount" << _amount;
    std::cout<<"deposits" <<_nbDeposits;
    std::cout<<"withdrawals:"<< _nbWithdrawals<<std::endl;
    
}