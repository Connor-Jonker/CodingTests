#include "pch.h"
#include <iostream>
using namespace std;

double getAmount()
{
	double amount;
	cout << "Enter the amount of the investment: ";
	cin >> amount;
	while (amount <= 0)
	{
		cout << "The investment needs to be greater than 0" << endl;
		cout << "Enter the amount of the investment: ";
		cin >> amount;
	}
	return amount;
}
