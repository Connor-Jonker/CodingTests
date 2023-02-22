#include "pch.h"
#include <iostream>
using namespace std;

double getYears()
{
	int years;
	cout << "Enter the amount of years you want to invest: ";
	cin >> years;
	while (years < 0)
	{
		cout << "The number of years can not be a negative" << endl;
		cout << "Enter the amount of years you want to invest: ";
		cin >> years;
	}
	return years;
}