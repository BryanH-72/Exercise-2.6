// Exercise 2.6.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include <iostream>
using namespace std;

int main()
{
    double payAmount;
    int payPeriods;
    cout << "How Much Do You Get Payed Per Pay Period: ";
    cin >> payAmount;
    cout << "How Many Pay Periods Per Year: ";
    cin >> payPeriods;
    double annualPay= payAmount * payPeriods;
    cout << "Your Annual Pay is: " << annualPay << "\n";
}

