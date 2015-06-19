#include "Account.h"
#include <iostream>
#include <string>
using namespace std;

double Account::annualInterestRate = .15;

double Account::getMonthlyInterestRate()
{
	return (annualInterestRate / 12);
}

void Account::withdraw(double amt)
{
	balance -= amt;
	Transaction T('W', amt, balance, "Withdrawal");
	transactions.push_back(T);
}

void Account::deposit(double amt)
{
	balance += amt;
	Transaction T('D', amt, balance, "Deposit");
	transactions.push_back(T);
}