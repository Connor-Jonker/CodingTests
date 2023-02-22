#include "pch.h"
#include <iostream>
using namespace std;

double getAnnualRate()
{
	double rate;
	cout << "Enter the annual interest rate: ";
	cin >> rate;
	while (rate < 0)
	{
		cout << "The annual interest rate can not be a negative" << endl;
		cout << "Enter the annual interest rate: ";
		cin >> rate;
	}
	return rate;
}