#include "pch.h"
#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;

double returnFutureInvestment(double amount, double years, double rate)
{
	double futureAmount;
	double time;
	for (time = 1; time <= years; time++)
   {
	   futureAmount = amount * pow(1 + (rate / 100), years);
   }
  
   return futureAmount;
}