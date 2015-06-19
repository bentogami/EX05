#ifndef TRANSACTION_H
#define TRANSACTION_H
#include <iostream>
#include <ctime>
#include <string>
using namespace std;
class Date
{
private:
	int year;
	int month;
	int day;

public:	
	Date() {		
		int totalDays = time(0) / 86400;
		int currDay = totalDays % 30 + 1;
		day = currDay;

		//This assumes that every month is 30 days.
		//It should be close enough to work.
		int totalMonths = time(0) / 2592000;
		int currMonth = totalMonths % 12 + 1;
		month = currMonth;

		int totalYears = time(0) / 31536000;
		int currYear = totalYears + 1970;
		year = currYear;
	}
	Date(int y, int m, int d) {
		year = y;
		month = m;
		day = d;
	}

	int getYear() { return year; }
	int getMonth() { return month; }
	int getDay() { return day; }
};

class Transaction 
{
private:
	Date date;
	char type;
	double amount;
	double balance;
	string description;

public:
	Transaction(char t, double amt, double b, string s) {
		type = t;
		amount = amt;
		balance = b;
		description = s;
	}

};


#endif