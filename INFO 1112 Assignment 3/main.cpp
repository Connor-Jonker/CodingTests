//==========================================================
//
// File: INFO 1112 Assignment 3.cpp INFO 1112 Assignment 3
//
// Author: YConnor J Email: connor.jonker@email.kpu.ca
//
// Student id: 100374615
//
// Course: INFO 1112 Date October 27th 2019
//
//
//==========================================================
// Purpose: This program asks the user for the amount invested, the annual rate, and the years it's invested for
// and returns the amount that will they can withdraw after that amount of years.
//==========================================================

#include "pch.h"
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double getAmount();
double getYears();
double getAnnualRate();
double returnFutureInvestment(double interest, double years, double rate);

int main()
{
	double amount, years;
	double Rate, futureAmount;
	
		amount = getAmount();
		if (amount != 0)
		{
			Rate = getAnnualRate();
			years = getYears();
			futureAmount = returnFutureInvestment(amount, years, Rate);
			cout << "After " << years << " years, your investment of $" << amount << " will be worth $"	<< fixed << setprecision(2) << futureAmount;
		}

	return 0;
}