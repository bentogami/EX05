#include <string>
#include <iostream>
#include <vector>
#include "Transaction.h"
using namespace std;

#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account
{
private:
	int id;
	double balance;
	static double annualInterestRate;
	string name;
	vector<Transaction> transactions;

public:
	Account() {
		id = 0;
		balance = 0;
		name = "Sam";
	}
	Account(string n, double b, int i) {
		id = i;
		balance = b;
		name = n;
	}

	int getID() { return id; }
	double getBalance() { return balance; }
	double getIntRate() { return annualInterestRate; }
	void setID(int i) { id = i; }
	void setBalance(double b) { balance = b; }
	void setIntRate(double i) { annualInterestRate = i; }

	static double getMonthlyInterestRate();
	void withdraw(double amt);
	void deposit(double amt);

};

#endif